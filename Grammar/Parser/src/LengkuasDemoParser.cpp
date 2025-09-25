#include <iostream>
#include <fstream>
#include <string>
#include "antlr4-runtime.h"
#include "LengkuasSFLLexer.h"
#include "LengkuasSFLParser.h"
#include "LengkuasSFLBaseListener.h"

class ErrorListener : publi antlr4::BaseErrorListener
{
    public:
        void syntaxError(antlr4::Recognizer *recognizer, antlr4::Token *offendingSymbol, size_t line, size_t charPositionInLine, const std::string &msg, std::exception_ptr e) override
        {
            std::cout << "line " << line << ":" << charPositionInLine << " " << msg << std::endl;
        }
};

int main(int argc, char *argv[])
{
    try
    {
        //init input variables
        std::string inputText;
        antlr4::ANTLRInputStream input;

        if(argc > 1)
        {
            //read from file if provided
            std::ifstream inputFile(argv[1]);
            if(!inputFile.good())
            {
                std::cerr << "Error: Could not open input file ' " << argv[1] << " ' " << std::endl;
                return 1;
            }
            input = antlr4::ANTLRInputStream(inputFile);
        }
        else
        {
            //use test str if no file provided
            inputText = 'msgOut("Hello World!")';
            input = antlr4::ANTLRInputStream(inputText);
        }

        //create lexer/parser
        LengkuasSFLLexer lexer(&input);
        antlr4::CommonTokenStream tokens(&lexer);
        LengkuasSFLParser parser(&tokens);

        //Add custom error Listener
        ErrorListener errorListener;
        parser.removeErrorListeners();
        parser.addErrorListener(&errorListener);

        //parse input with grammar starting rule
        antlr4::tree::ParseTree* tree = parser.program();

        //print parse tree (DEMO ONLY)
        std::cout << "Parse tree: " << tree->toStringTree(&parser) << std::endl;

        return 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << "Exception: " << e.what() << std::endl;
        return 1;
    }
}