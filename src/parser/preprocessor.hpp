#ifndef __PREPROCESSOR_HPP__
#define __PREPROCESSOR_HPP__

#include <string>
#include <map>
#include <stack>
#include <sstream>

class Preprocessor {
public:
    Preprocessor();

    void addDefine(std::string name, std::string value);
    void removeDefine(std::string const &name);

    std::string process(std::string const &path);

    static const constexpr size_t MAX_INCLUDES_DEPTH = 64;

private:
    std::stack<std::string> raw;
    std::map<std::string, std::string> defines;

    std::stringstream globalSS;

    bool isLineStart;
    bool isSkip;
    int nestCntr;

    enum LastCondState { PC_IF_TRUE, PC_IF_FALSE, PC_ELSE };
    std::stack<LastCondState> condStatuses;

    struct Location {
        std::string file;
        int line;
    };
    std::stack<Location> locations;

    using string_constit_t = decltype(raw.top().cbegin());

    void processFile(std::string const &path);
    void processDirective(std::string const &dir, string_constit_t &it);

    std::string getStringArg(string_constit_t &it, bool angleBrackets);
    uint32_t getU32Arg(string_constit_t &it);
    std::string getIdentArg(string_constit_t &it);
    void skipSpaces(string_constit_t &it);
    void assertNoArg(string_constit_t &it);

    void printError(std::string const &msg);
    void printWarn(std::string const &msg);

};

#endif /* __PREPROCESSOR_HPP__ */
