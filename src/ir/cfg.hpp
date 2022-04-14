#ifndef CFG_HPP_INCLUDED__
#define CFG_HPP_INCLUDED__

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
        std::shared_ptr<IR_Type> fullType;

        enum FuncSpec : int {
            FSPEC_NONE = 0,
            INLINE = 0x1,
            GOTOED = 0x2,
        };
        int fspec;

        Function clone() const;
        int getId() const;
        std::string getName() const;
        int getEntryBlockId() const;
        std::shared_ptr<IR_TypeFunc> getFuncType() const;

        void setEntryBlockId(int id);
    };

    struct GlobalVar {
        int id;
        std::string name;
        std::shared_ptr<IR_Type> type;
        IRval init;
    };

    ControlFlowGraph() = default;
    ControlFlowGraph(ControlFlowGraph const &oth);
    ControlFlowGraph(ControlFlowGraph &&oth) noexcept = default;
    ControlFlowGraph& operator=(ControlFlowGraph &&oth) noexcept = default;

    IR_Block& createBlock();
    void linkBlocks(IR_Block &prev, IR_Block &next);
    Function& createFunction(std::string name, IR_StorageSpecifier stor, int fspec,
                             std::shared_ptr<IR_Type> fullType);
    Function& createPrototype(std::string name, IR_StorageSpecifier stor,
                              std::shared_ptr<IR_Type> fullType);
    IRval createReg(std::shared_ptr<IR_Type> type);
    IRval createGlobal(std::string name, std::shared_ptr<IR_Type> type, IRval init);

    /** get block by id */
    IR_Block& block(int id);
    IR_Block const& block(int id) const;
    Function& getFunction(int id);
    Function const& getFunction(int id) const;

    uint64_t putString(std::string str);

    std::map<int, Function> const& getFuncs() const;
    std::map<int, Function>& getFuncsMut();
    std::map<int, Function> const& getPrototypes() const;
    std::map<int, IR_Block> const& getBlocks() const;
    std::map<int, IR_Block>& getBlocksData();
    std::map<int, GlobalVar> const& getGlobals() const;
    std::map<string_id_t, std::shared_ptr<IR_TypeStruct>> const& getStructs() const;
    std::map<uint64_t, std::string> const& getStrings() const;

    void traverseBlocks(int blockId, std::set<int> &visited, std::function<void(int)> const &action);

    [[nodiscard]] std::string printIR() const;
    [[nodiscard]] std::string drawCFG() const;

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

#endif /* CFG_HPP_INCLUDED__ */
