#ifndef __CFG_HPP__
#define __CFG_HPP__

#include <vector>
#include <memory>
#include <map>
#include <set>
#include <functional>
#include "nodes.hpp"


class ControlFlowGraph {
public:
    class Function {
    private:
        int id;
        std::string name;
        int entryBlockId;
        friend class ControlFlowGraph;

    public:
        IR_StorageSpecifier storage;
        bool isInline;
        std::shared_ptr<IR_Type> fullType;

        Function clone() const;
        int getId() const;
        std::string getName() const;
        int getEntryBlockId() const;
        std::shared_ptr<IR_TypeFunc> getFuncType() const;
    };

    struct GlobalVar {
        int id;
        std::string name;
        std::shared_ptr<IR_Type> type;
        IRval init;
    };

    ControlFlowGraph() = default;
    ControlFlowGraph(ControlFlowGraph const &oth);

    IR_Block& createBlock();
    void linkBlocks(IR_Block &prev, IR_Block &next);
    Function& createFunction(std::string name, IR_StorageSpecifier stor, bool isInline,
                             std::shared_ptr<IR_Type> fullType);
    Function& createPrototype(std::string name, IR_StorageSpecifier stor,
                              std::shared_ptr<IR_Type> fullType);
    IRval createReg(std::shared_ptr<IR_Type> type);
    IRval createGlobal(std::string name, std::shared_ptr<IR_Type> type, IRval init);

    /** get block by id */
    IR_Block& block(int id);
    Function& getFunction(int id);
    Function const& getFunction(int id) const;

    uint64_t putString(std::string str);

    std::map<int, Function> const& getFuncs() const;
    std::map<int, Function> const& getPrototypes() const;
    std::map<int, IR_Block> const& getBlocks() const;
    std::map<int, IR_Block>& getBlocksData();
    std::map<int, GlobalVar> const& getGlobals() const;
    std::map<string_id_t, std::shared_ptr<IR_TypeStruct>> const& getStructs() const;
    std::map<uint64_t, std::string> const& getStrings() const;

    void traverseBlocks(int blockId, std::set<int> &visited, std::function<void(int)> action);

    std::string printIR() const;
    std::string drawCFG() const;

private:
    int blocksCounter = 0;
    uint64_t regs_counter = 0;
    int funcsCounter = 0;
    uint64_t stringsCounter = 0;
    int globalsCounter = 0;

    std::map<int, IR_Block> blocks;
    std::map<int, Function> funcs;
    std::map<int, Function> prototypes;
    std::map<string_id_t, std::shared_ptr<IR_TypeStruct>> structs;
    std::map<uint64_t, std::string> strings;
    std::map<int, GlobalVar> globals;

    friend class IR_Generator;

    void printExpr(std::stringstream &ss, IR_Expr const &rawExpr) const;
    void printBlock(std::stringstream &ss, IR_Block const &block) const;
    void drawBlock(std::stringstream &ss, IR_Block const &block) const;
};

#endif /* __CFG_HPP__ */
