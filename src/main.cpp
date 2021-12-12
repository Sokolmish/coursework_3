#include <iostream>
#include <fstream>
#include <memory>

#include <fmt/core.h>

#include "parser/parser.hpp"
#include "ir/generator.hpp"

std::string readFile(std::string const &path) {
    std::ifstream t(path.c_str());
    t.seekg(0, std::ios::end);
    auto size = t.tellg();
    std::string buffer(size, ' ');
    t.seekg(0);
    t.read(&buffer[0], size);
    return buffer;
}

int main(int argc, char **argv) {
    std::string path = "tests/tst_prog1.c";
    if (argc > 1)
        path = argv[1];

    auto text = readFile(path);
    auto ast = std::shared_ptr<AST_TranslationUnit>(parse_program(text));

//    fmt::print("{}\n", ast->getTreeNode()->printHor());

    auto gen = std::make_unique<IR_Generator>();
    gen->parseAST(ast);
//    gen->getCfg()->printBlocks();

    auto cfg2 = *gen->getCfg();
    gen.reset(nullptr);
    cfg2.printBlocks();

    return 0;
}
