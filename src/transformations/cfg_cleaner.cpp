#include "cfg_cleaner.hpp"

CfgCleaner::CfgCleaner(std::shared_ptr<ControlFlowGraph> rawCfg)
        : cfg(std::make_shared<ControlFlowGraph>(*rawCfg)) {}

std::shared_ptr<ControlFlowGraph> CfgCleaner::getCfg() {
    return cfg;
}

void CfgCleaner::removeNops() {
    for (auto const &[bId, block] : cfg->getBlocks()) {
        std::vector<IR_Node> newPhis;
        for (IR_Node &node : cfg->block(bId).phis)
            if (node.body)
                newPhis.push_back(std::move(node));
        cfg->block(bId).phis = std::move(newPhis);

        std::vector<IR_Node> newBody;
        for (IR_Node &node : cfg->block(bId).body)
            if (node.body)
                newBody.push_back(std::move(node));
        cfg->block(bId).body = std::move(newBody);
    }
}

void CfgCleaner::fixVersions() {
    std::map<IRval, std::pair<bool, int>, IRval::Comparator> versionedRegs;

    visitedBlocks.clear();
    for (auto const &[fId, func]: cfg->getFuncs()) {
        traverseBlocks(func.getEntryBlockId(), [this, &versionedRegs](int blockId) {
            auto &curBlock = cfg->block(blockId);

            for (auto const &phiNode: curBlock.phis) {
                if (phiNode.res) {
                    int curVers = *phiNode.res->version;
                    auto it = versionedRegs.lower_bound(*phiNode.res);
                    if (it != versionedRegs.end() && it->first == *phiNode.res) {
                        if (it->second.second != curVers)
                            it->second = std::make_pair(true, 0);
                    }
                    else {
                        versionedRegs.emplace_hint(it, *phiNode.res, std::make_pair(false, curVers));
                    }
                }
            }

            for (auto const &node : curBlock.body) {
                if (node.res) {
                    int curVers = *node.res->version;
                    auto it = versionedRegs.lower_bound(*node.res);
                    if (it != versionedRegs.end() && it->first == *node.res) {
                        if (it->second.second != curVers)
                            it->second = std::make_pair(true, 0);
                    }
                    else {
                        versionedRegs.emplace_hint(it, *node.res, std::make_pair(false, curVers));
                    }
                }
            }
        });
    }

    visitedBlocks.clear();
    for (auto const &[fId, func]: cfg->getFuncs()) {
        traverseBlocks(func.getEntryBlockId(), [this, &versionedRegs](int blockId) {
            auto &curBlock = cfg->block(blockId);

            for (auto &phiNode: curBlock.phis) {
                if (phiNode.res) {
                    auto it = versionedRegs.find(*phiNode.res);
                    if (it != versionedRegs.end() && !it->second.first)
                        phiNode.res->version = {};
                }
                for (auto *arg : phiNode.body->getArgs()) {
                    auto it = versionedRegs.find(*arg);
                    if (it != versionedRegs.end() && !it->second.first)
                        arg->version = {};
                }
            }

            for (auto &node: curBlock.body) {
                if (node.res) {
                    auto it = versionedRegs.find(*node.res);
                    if (it != versionedRegs.end() && !it->second.first)
                        node.res->version = {};
                }
                for (auto *arg : node.body->getArgs()) {
                    auto it = versionedRegs.find(*arg);
                    if (it != versionedRegs.end() && !it->second.first)
                        arg->version = {};
                }
            }

            if (curBlock.termNode) {
                auto &terminator = dynamic_cast<IR_ExprTerminator &>(*curBlock.termNode->body);
                if (terminator.arg) {
                    auto it = versionedRegs.find(*terminator.arg);
                    if (it != versionedRegs.end() && !it->second.first)
                        terminator.arg->version = {};
                }
            }
        });
    }
}

void CfgCleaner::removeUselessNodes() {
    std::set<IRval, IRval::ComparatorVersions> usedRegs;
    bool changed = true;

    while (changed) {
        changed = false;
        usedRegs.clear();

        visitedBlocks.clear();
        for (auto const &[fId, func]: cfg->getFuncs()) {
            traverseBlocks(func.getEntryBlockId(), [this, &usedRegs](int blockId) {
                auto &curBlock = cfg->block(blockId);
                auto refs = curBlock.getReferences();
                usedRegs.insert(refs.begin(), refs.end());
            });
        }

        visitedBlocks.clear();
        for (auto const &[fId, func]: cfg->getFuncs()) {
            traverseBlocks(func.getEntryBlockId(), [this, &usedRegs, &changed](int blockId) {
                auto &curBlock = cfg->block(blockId);
                for (auto *node: curBlock.getAllNodes()) {
                    if (node->res.has_value() && !usedRegs.contains(*node->res)) {
                        changed = true;
                        node->res = {};
                        if (node->body->type != IR_Expr::CALL)
                            node->body = nullptr;
                    }
                }
            });
        }
    }
}

void CfgCleaner::traverseBlocks(int blockId, std::function<void(int)> action) {
    action(blockId);
    for (int nextId : cfg->block(blockId).next)
        if (!visitedBlocks.contains(nextId))
            traverseBlocks(nextId, action);
}
