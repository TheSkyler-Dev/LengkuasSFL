
// Generated from LengkuasSFL.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"




class  LengkuasSFLLexer : public antlr4::Lexer {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, T__5 = 6, T__6 = 7, 
    T__7 = 8, T__8 = 9, T__9 = 10, T__10 = 11, T__11 = 12, T__12 = 13, T__13 = 14, 
    T__14 = 15, T__15 = 16, T__16 = 17, T__17 = 18, T__18 = 19, T__19 = 20, 
    T__20 = 21, T__21 = 22, T__22 = 23, T__23 = 24, T__24 = 25, T__25 = 26, 
    T__26 = 27, T__27 = 28, T__28 = 29, T__29 = 30, T__30 = 31, T__31 = 32, 
    T__32 = 33, T__33 = 34, T__34 = 35, T__35 = 36, T__36 = 37, IDENTIFIER = 38, 
    NUMBER = 39, STRING = 40, BOOLEAN = 41, NIL = 42, SEMICOLON = 43, COLON = 44, 
    COMMA = 45, DOT = 46, ARROW = 47, ASSIGN = 48, PLUS = 49, MINUS = 50, 
    MULT = 51, DIV = 52, MOD = 53, LPAREN = 54, RPAREN = 55, LBRACE = 56, 
    RBRACE = 57, LBRACKET = 58, RBRACKET = 59, INCREMENT = 60, DECREMENT = 61, 
    WS = 62, COMMENT = 63, MULTILINE_COMMENT = 64, AND = 65, OR = 66, NOT = 67, 
    ARR = 68
  };

  explicit LengkuasSFLLexer(antlr4::CharStream *input);

  ~LengkuasSFLLexer() override;


  std::string getGrammarFileName() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const std::vector<std::string>& getChannelNames() const override;

  const std::vector<std::string>& getModeNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;

  const antlr4::atn::ATN& getATN() const override;

  // By default the static state used to implement the lexer is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:

  // Individual action functions triggered by action() above.

  // Individual semantic predicate functions triggered by sempred() above.

};

