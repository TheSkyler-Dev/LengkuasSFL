
// Generated from LengkuasSFL.g4 by ANTLR 4.13.1


#include "LengkuasSFLListener.h"

#include "LengkuasSFLParser.h"


using namespace antlrcpp;

using namespace antlr4;

namespace {

struct LengkuasSFLParserStaticData final {
  LengkuasSFLParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  LengkuasSFLParserStaticData(const LengkuasSFLParserStaticData&) = delete;
  LengkuasSFLParserStaticData(LengkuasSFLParserStaticData&&) = delete;
  LengkuasSFLParserStaticData& operator=(const LengkuasSFLParserStaticData&) = delete;
  LengkuasSFLParserStaticData& operator=(LengkuasSFLParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag lengkuassflParserOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
LengkuasSFLParserStaticData *lengkuassflParserStaticData = nullptr;

void lengkuassflParserInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (lengkuassflParserStaticData != nullptr) {
    return;
  }
#else
  assert(lengkuassflParserStaticData == nullptr);
#endif
  auto staticData = std::make_unique<LengkuasSFLParserStaticData>(
    std::vector<std::string>{
      "program", "statement", "variableDeclaration", "dataType", "expression", 
      "primaryExpression", "arithmeticOperator", "arithmeticOperation", 
      "templateLiteral", "functionDeclaration", "parameter", "controlFlow", 
      "ifStatement", "switchStatement", "caseBlock", "defaultBlock", "loop", 
      "whileLoop", "doWhileLoop", "forLoop", "ioOperation", "pointerReference", 
      "asyncBlock", "errorHandling", "throwStatement", "incrementDecrement"
    },
    std::vector<std::string>{
      "", "'str'", "'i32'", "'i64'", "'f32'", "'f64'", "'bool'", "'sstream'", 
      "'$'", "'${'", "'}$'", "'fun'", "'endfun'", "'if'", "'elif'", "'else'", 
      "'endif'", "'sw'", "'endsw'", "'case'", "'default'", "'while'", "'endwhile'", 
      "'do'", "'for'", "'endfor'", "'msgOut'", "'msgIn'", "'^'", "'desync'", 
      "'resync'", "'try'", "'catch'", "'endtry'", "'throw'", "'errMsg'", 
      "'prefix'", "'ecode'", "", "", "", "", "'nil'", "';'", "':'", "','", 
      "'.'", "'->'", "'='", "'+'", "'-'", "'*'", "'/'", "'%'", "'('", "')'", 
      "'{'", "'}'", "'['", "']'", "'++'", "'--'", "", "", "", "'&&'", "'||'", 
      "'!'", "'arr'"
    },
    std::vector<std::string>{
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "", "", "", "IDENTIFIER", "NUMBER", "STRING", "BOOLEAN", "NIL", 
      "SEMICOLON", "COLON", "COMMA", "DOT", "ARROW", "ASSIGN", "PLUS", "MINUS", 
      "MULT", "DIV", "MOD", "LPAREN", "RPAREN", "LBRACE", "RBRACE", "LBRACKET", 
      "RBRACKET", "INCREMENT", "DECREMENT", "WS", "COMMENT", "MULTILINE_COMMENT", 
      "AND", "OR", "NOT", "ARR"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,68,350,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,7,
  	21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,1,0,5,0,54,8,0,10,0,12,0,57,
  	9,0,1,0,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,3,1,71,8,1,1,2,1,
  	2,3,2,75,8,2,1,2,1,2,1,2,1,2,1,3,1,3,1,4,1,4,1,4,1,4,1,4,5,4,88,8,4,10,
  	4,12,4,91,9,4,1,4,1,4,3,4,95,8,4,1,4,1,4,1,4,1,4,1,4,1,4,5,4,103,8,4,
  	10,4,12,4,106,9,4,1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,5,3,5,118,8,5,
  	1,6,1,6,1,7,1,7,1,7,1,7,4,7,126,8,7,11,7,12,7,127,1,8,1,8,1,8,1,8,1,8,
  	1,8,1,8,5,8,137,8,8,10,8,12,8,140,9,8,1,9,1,9,1,9,1,9,1,9,1,9,5,9,148,
  	8,9,10,9,12,9,151,9,9,3,9,153,8,9,1,9,1,9,1,9,4,9,158,8,9,11,9,12,9,159,
  	1,9,1,9,1,10,1,10,1,10,1,11,1,11,3,11,169,8,11,1,12,1,12,1,12,1,12,1,
  	12,1,12,4,12,177,8,12,11,12,12,12,178,1,12,1,12,1,12,1,12,1,12,1,12,4,
  	12,187,8,12,11,12,12,12,188,5,12,191,8,12,10,12,12,12,194,9,12,1,12,1,
  	12,1,12,4,12,199,8,12,11,12,12,12,200,1,12,1,12,1,13,1,13,1,13,1,13,1,
  	13,1,13,4,13,211,8,13,11,13,12,13,212,1,13,3,13,216,8,13,1,13,1,13,1,
  	14,1,14,1,14,1,14,1,14,4,14,225,8,14,11,14,12,14,226,1,14,1,14,1,15,1,
  	15,1,15,1,15,4,15,235,8,15,11,15,12,15,236,1,15,1,15,1,16,1,16,1,16,3,
  	16,244,8,16,1,17,1,17,1,17,1,17,1,17,1,17,4,17,252,8,17,11,17,12,17,253,
  	1,17,1,17,1,18,1,18,1,18,4,18,261,8,18,11,18,12,18,262,1,18,1,18,1,18,
  	1,18,1,18,1,19,1,19,1,19,1,19,1,19,1,19,1,19,1,19,1,19,4,19,279,8,19,
  	11,19,12,19,280,1,19,1,19,1,20,1,20,1,20,1,20,1,20,1,20,1,20,1,20,1,20,
  	1,20,3,20,295,8,20,1,21,1,21,1,21,1,22,1,22,1,22,1,22,1,22,5,22,305,8,
  	22,10,22,12,22,308,9,22,3,22,310,8,22,1,22,1,22,1,22,4,22,315,8,22,11,
  	22,12,22,316,1,22,1,22,1,23,1,23,1,23,4,23,324,8,23,11,23,12,23,325,1,
  	23,1,23,1,23,1,23,1,23,1,24,1,24,1,24,1,24,1,24,1,24,1,24,1,24,1,24,1,
  	24,1,24,1,24,1,24,1,24,1,25,1,25,1,25,1,25,0,1,8,26,0,2,4,6,8,10,12,14,
  	16,18,20,22,24,26,28,30,32,34,36,38,40,42,44,46,48,50,0,3,1,0,1,7,1,0,
  	49,53,1,0,60,61,369,0,55,1,0,0,0,2,70,1,0,0,0,4,72,1,0,0,0,6,80,1,0,0,
  	0,8,94,1,0,0,0,10,117,1,0,0,0,12,119,1,0,0,0,14,121,1,0,0,0,16,129,1,
  	0,0,0,18,141,1,0,0,0,20,163,1,0,0,0,22,168,1,0,0,0,24,170,1,0,0,0,26,
  	204,1,0,0,0,28,219,1,0,0,0,30,230,1,0,0,0,32,243,1,0,0,0,34,245,1,0,0,
  	0,36,257,1,0,0,0,38,269,1,0,0,0,40,294,1,0,0,0,42,296,1,0,0,0,44,299,
  	1,0,0,0,46,320,1,0,0,0,48,332,1,0,0,0,50,346,1,0,0,0,52,54,3,2,1,0,53,
  	52,1,0,0,0,54,57,1,0,0,0,55,53,1,0,0,0,55,56,1,0,0,0,56,58,1,0,0,0,57,
  	55,1,0,0,0,58,59,5,0,0,1,59,1,1,0,0,0,60,71,3,4,2,0,61,71,3,18,9,0,62,
  	71,3,22,11,0,63,71,3,32,16,0,64,71,3,40,20,0,65,71,3,14,7,0,66,71,3,16,
  	8,0,67,71,3,46,23,0,68,71,3,42,21,0,69,71,3,44,22,0,70,60,1,0,0,0,70,
  	61,1,0,0,0,70,62,1,0,0,0,70,63,1,0,0,0,70,64,1,0,0,0,70,65,1,0,0,0,70,
  	66,1,0,0,0,70,67,1,0,0,0,70,68,1,0,0,0,70,69,1,0,0,0,71,3,1,0,0,0,72,
  	74,3,6,3,0,73,75,5,68,0,0,74,73,1,0,0,0,74,75,1,0,0,0,75,76,1,0,0,0,76,
  	77,5,38,0,0,77,78,5,48,0,0,78,79,3,8,4,0,79,5,1,0,0,0,80,81,7,0,0,0,81,
  	7,1,0,0,0,82,83,6,4,-1,0,83,89,3,10,5,0,84,85,3,12,6,0,85,86,3,10,5,0,
  	86,88,1,0,0,0,87,84,1,0,0,0,88,91,1,0,0,0,89,87,1,0,0,0,89,90,1,0,0,0,
  	90,95,1,0,0,0,91,89,1,0,0,0,92,93,5,67,0,0,93,95,3,8,4,1,94,82,1,0,0,
  	0,94,92,1,0,0,0,95,104,1,0,0,0,96,97,10,3,0,0,97,98,5,66,0,0,98,103,3,
  	8,4,4,99,100,10,2,0,0,100,101,5,65,0,0,101,103,3,8,4,3,102,96,1,0,0,0,
  	102,99,1,0,0,0,103,106,1,0,0,0,104,102,1,0,0,0,104,105,1,0,0,0,105,9,
  	1,0,0,0,106,104,1,0,0,0,107,118,5,39,0,0,108,118,5,40,0,0,109,118,5,41,
  	0,0,110,118,5,42,0,0,111,118,5,38,0,0,112,118,3,16,8,0,113,114,5,54,0,
  	0,114,115,3,8,4,0,115,116,5,55,0,0,116,118,1,0,0,0,117,107,1,0,0,0,117,
  	108,1,0,0,0,117,109,1,0,0,0,117,110,1,0,0,0,117,111,1,0,0,0,117,112,1,
  	0,0,0,117,113,1,0,0,0,118,11,1,0,0,0,119,120,7,1,0,0,120,13,1,0,0,0,121,
  	125,3,8,4,0,122,123,3,12,6,0,123,124,3,8,4,0,124,126,1,0,0,0,125,122,
  	1,0,0,0,126,127,1,0,0,0,127,125,1,0,0,0,127,128,1,0,0,0,128,15,1,0,0,
  	0,129,138,5,40,0,0,130,131,5,8,0,0,131,137,5,38,0,0,132,133,5,9,0,0,133,
  	134,3,8,4,0,134,135,5,10,0,0,135,137,1,0,0,0,136,130,1,0,0,0,136,132,
  	1,0,0,0,137,140,1,0,0,0,138,136,1,0,0,0,138,139,1,0,0,0,139,17,1,0,0,
  	0,140,138,1,0,0,0,141,142,5,11,0,0,142,143,5,38,0,0,143,152,5,54,0,0,
  	144,149,3,20,10,0,145,146,5,45,0,0,146,148,3,20,10,0,147,145,1,0,0,0,
  	148,151,1,0,0,0,149,147,1,0,0,0,149,150,1,0,0,0,150,153,1,0,0,0,151,149,
  	1,0,0,0,152,144,1,0,0,0,152,153,1,0,0,0,153,154,1,0,0,0,154,155,5,55,
  	0,0,155,157,5,44,0,0,156,158,3,2,1,0,157,156,1,0,0,0,158,159,1,0,0,0,
  	159,157,1,0,0,0,159,160,1,0,0,0,160,161,1,0,0,0,161,162,5,12,0,0,162,
  	19,1,0,0,0,163,164,3,6,3,0,164,165,5,38,0,0,165,21,1,0,0,0,166,169,3,
  	24,12,0,167,169,3,26,13,0,168,166,1,0,0,0,168,167,1,0,0,0,169,23,1,0,
  	0,0,170,171,5,13,0,0,171,172,5,54,0,0,172,173,3,8,4,0,173,174,5,55,0,
  	0,174,176,5,44,0,0,175,177,3,2,1,0,176,175,1,0,0,0,177,178,1,0,0,0,178,
  	176,1,0,0,0,178,179,1,0,0,0,179,192,1,0,0,0,180,181,5,14,0,0,181,182,
  	5,54,0,0,182,183,3,8,4,0,183,184,5,55,0,0,184,186,5,44,0,0,185,187,3,
  	2,1,0,186,185,1,0,0,0,187,188,1,0,0,0,188,186,1,0,0,0,188,189,1,0,0,0,
  	189,191,1,0,0,0,190,180,1,0,0,0,191,194,1,0,0,0,192,190,1,0,0,0,192,193,
  	1,0,0,0,193,195,1,0,0,0,194,192,1,0,0,0,195,196,5,15,0,0,196,198,5,44,
  	0,0,197,199,3,2,1,0,198,197,1,0,0,0,199,200,1,0,0,0,200,198,1,0,0,0,200,
  	201,1,0,0,0,201,202,1,0,0,0,202,203,5,16,0,0,203,25,1,0,0,0,204,205,5,
  	17,0,0,205,206,5,54,0,0,206,207,3,8,4,0,207,208,5,55,0,0,208,210,5,44,
  	0,0,209,211,3,28,14,0,210,209,1,0,0,0,211,212,1,0,0,0,212,210,1,0,0,0,
  	212,213,1,0,0,0,213,215,1,0,0,0,214,216,3,30,15,0,215,214,1,0,0,0,215,
  	216,1,0,0,0,216,217,1,0,0,0,217,218,5,18,0,0,218,27,1,0,0,0,219,220,5,
  	19,0,0,220,221,3,8,4,0,221,222,5,44,0,0,222,224,5,56,0,0,223,225,3,2,
  	1,0,224,223,1,0,0,0,225,226,1,0,0,0,226,224,1,0,0,0,226,227,1,0,0,0,227,
  	228,1,0,0,0,228,229,5,57,0,0,229,29,1,0,0,0,230,231,5,20,0,0,231,232,
  	5,44,0,0,232,234,5,56,0,0,233,235,3,2,1,0,234,233,1,0,0,0,235,236,1,0,
  	0,0,236,234,1,0,0,0,236,237,1,0,0,0,237,238,1,0,0,0,238,239,5,57,0,0,
  	239,31,1,0,0,0,240,244,3,34,17,0,241,244,3,36,18,0,242,244,3,38,19,0,
  	243,240,1,0,0,0,243,241,1,0,0,0,243,242,1,0,0,0,244,33,1,0,0,0,245,246,
  	5,21,0,0,246,247,5,54,0,0,247,248,3,8,4,0,248,249,5,55,0,0,249,251,5,
  	44,0,0,250,252,3,2,1,0,251,250,1,0,0,0,252,253,1,0,0,0,253,251,1,0,0,
  	0,253,254,1,0,0,0,254,255,1,0,0,0,255,256,5,22,0,0,256,35,1,0,0,0,257,
  	258,5,23,0,0,258,260,5,44,0,0,259,261,3,2,1,0,260,259,1,0,0,0,261,262,
  	1,0,0,0,262,260,1,0,0,0,262,263,1,0,0,0,263,264,1,0,0,0,264,265,5,21,
  	0,0,265,266,5,54,0,0,266,267,3,8,4,0,267,268,5,55,0,0,268,37,1,0,0,0,
  	269,270,5,24,0,0,270,271,5,54,0,0,271,272,3,4,2,0,272,273,3,8,4,0,273,
  	274,5,43,0,0,274,275,3,8,4,0,275,276,5,55,0,0,276,278,5,44,0,0,277,279,
  	3,2,1,0,278,277,1,0,0,0,279,280,1,0,0,0,280,278,1,0,0,0,280,281,1,0,0,
  	0,281,282,1,0,0,0,282,283,5,25,0,0,283,39,1,0,0,0,284,285,5,26,0,0,285,
  	286,5,54,0,0,286,287,3,8,4,0,287,288,5,55,0,0,288,295,1,0,0,0,289,290,
  	5,27,0,0,290,291,5,54,0,0,291,292,3,8,4,0,292,293,5,55,0,0,293,295,1,
  	0,0,0,294,284,1,0,0,0,294,289,1,0,0,0,295,41,1,0,0,0,296,297,5,28,0,0,
  	297,298,5,38,0,0,298,43,1,0,0,0,299,300,5,29,0,0,300,309,5,54,0,0,301,
  	306,3,20,10,0,302,303,5,45,0,0,303,305,3,20,10,0,304,302,1,0,0,0,305,
  	308,1,0,0,0,306,304,1,0,0,0,306,307,1,0,0,0,307,310,1,0,0,0,308,306,1,
  	0,0,0,309,301,1,0,0,0,309,310,1,0,0,0,310,311,1,0,0,0,311,312,5,55,0,
  	0,312,314,5,44,0,0,313,315,3,2,1,0,314,313,1,0,0,0,315,316,1,0,0,0,316,
  	314,1,0,0,0,316,317,1,0,0,0,317,318,1,0,0,0,318,319,5,30,0,0,319,45,1,
  	0,0,0,320,321,5,31,0,0,321,323,5,44,0,0,322,324,3,2,1,0,323,322,1,0,0,
  	0,324,325,1,0,0,0,325,323,1,0,0,0,325,326,1,0,0,0,326,327,1,0,0,0,327,
  	328,5,32,0,0,328,329,5,44,0,0,329,330,3,48,24,0,330,331,5,33,0,0,331,
  	47,1,0,0,0,332,333,5,34,0,0,333,334,5,54,0,0,334,335,5,35,0,0,335,336,
  	5,54,0,0,336,337,5,40,0,0,337,338,5,45,0,0,338,339,5,36,0,0,339,340,5,
  	47,0,0,340,341,5,37,0,0,341,342,5,54,0,0,342,343,5,55,0,0,343,344,5,55,
  	0,0,344,345,5,55,0,0,345,49,1,0,0,0,346,347,5,38,0,0,347,348,7,2,0,0,
  	348,51,1,0,0,0,32,55,70,74,89,94,102,104,117,127,136,138,149,152,159,
  	168,178,188,192,200,212,215,226,236,243,253,262,280,294,306,309,316,325
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  lengkuassflParserStaticData = staticData.release();
}

}

LengkuasSFLParser::LengkuasSFLParser(TokenStream *input) : LengkuasSFLParser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

LengkuasSFLParser::LengkuasSFLParser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  LengkuasSFLParser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *lengkuassflParserStaticData->atn, lengkuassflParserStaticData->decisionToDFA, lengkuassflParserStaticData->sharedContextCache, options);
}

LengkuasSFLParser::~LengkuasSFLParser() {
  delete _interpreter;
}

const atn::ATN& LengkuasSFLParser::getATN() const {
  return *lengkuassflParserStaticData->atn;
}

std::string LengkuasSFLParser::getGrammarFileName() const {
  return "LengkuasSFL.g4";
}

const std::vector<std::string>& LengkuasSFLParser::getRuleNames() const {
  return lengkuassflParserStaticData->ruleNames;
}

const dfa::Vocabulary& LengkuasSFLParser::getVocabulary() const {
  return lengkuassflParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView LengkuasSFLParser::getSerializedATN() const {
  return lengkuassflParserStaticData->serializedATN;
}


//----------------- ProgramContext ------------------------------------------------------------------

LengkuasSFLParser::ProgramContext::ProgramContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* LengkuasSFLParser::ProgramContext::EOF() {
  return getToken(LengkuasSFLParser::EOF, 0);
}

std::vector<LengkuasSFLParser::StatementContext *> LengkuasSFLParser::ProgramContext::statement() {
  return getRuleContexts<LengkuasSFLParser::StatementContext>();
}

LengkuasSFLParser::StatementContext* LengkuasSFLParser::ProgramContext::statement(size_t i) {
  return getRuleContext<LengkuasSFLParser::StatementContext>(i);
}


size_t LengkuasSFLParser::ProgramContext::getRuleIndex() const {
  return LengkuasSFLParser::RuleProgram;
}

void LengkuasSFLParser::ProgramContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LengkuasSFLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterProgram(this);
}

void LengkuasSFLParser::ProgramContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LengkuasSFLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitProgram(this);
}

LengkuasSFLParser::ProgramContext* LengkuasSFLParser::program() {
  ProgramContext *_localctx = _tracker.createInstance<ProgramContext>(_ctx, getState());
  enterRule(_localctx, 0, LengkuasSFLParser::RuleProgram);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(55);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 18022922906118398) != 0) || _la == LengkuasSFLParser::NOT) {
      setState(52);
      statement();
      setState(57);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(58);
    match(LengkuasSFLParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatementContext ------------------------------------------------------------------

LengkuasSFLParser::StatementContext::StatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

LengkuasSFLParser::VariableDeclarationContext* LengkuasSFLParser::StatementContext::variableDeclaration() {
  return getRuleContext<LengkuasSFLParser::VariableDeclarationContext>(0);
}

LengkuasSFLParser::FunctionDeclarationContext* LengkuasSFLParser::StatementContext::functionDeclaration() {
  return getRuleContext<LengkuasSFLParser::FunctionDeclarationContext>(0);
}

LengkuasSFLParser::ControlFlowContext* LengkuasSFLParser::StatementContext::controlFlow() {
  return getRuleContext<LengkuasSFLParser::ControlFlowContext>(0);
}

LengkuasSFLParser::LoopContext* LengkuasSFLParser::StatementContext::loop() {
  return getRuleContext<LengkuasSFLParser::LoopContext>(0);
}

LengkuasSFLParser::IoOperationContext* LengkuasSFLParser::StatementContext::ioOperation() {
  return getRuleContext<LengkuasSFLParser::IoOperationContext>(0);
}

LengkuasSFLParser::ArithmeticOperationContext* LengkuasSFLParser::StatementContext::arithmeticOperation() {
  return getRuleContext<LengkuasSFLParser::ArithmeticOperationContext>(0);
}

LengkuasSFLParser::TemplateLiteralContext* LengkuasSFLParser::StatementContext::templateLiteral() {
  return getRuleContext<LengkuasSFLParser::TemplateLiteralContext>(0);
}

LengkuasSFLParser::ErrorHandlingContext* LengkuasSFLParser::StatementContext::errorHandling() {
  return getRuleContext<LengkuasSFLParser::ErrorHandlingContext>(0);
}

LengkuasSFLParser::PointerReferenceContext* LengkuasSFLParser::StatementContext::pointerReference() {
  return getRuleContext<LengkuasSFLParser::PointerReferenceContext>(0);
}

LengkuasSFLParser::AsyncBlockContext* LengkuasSFLParser::StatementContext::asyncBlock() {
  return getRuleContext<LengkuasSFLParser::AsyncBlockContext>(0);
}


size_t LengkuasSFLParser::StatementContext::getRuleIndex() const {
  return LengkuasSFLParser::RuleStatement;
}

void LengkuasSFLParser::StatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LengkuasSFLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStatement(this);
}

void LengkuasSFLParser::StatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LengkuasSFLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStatement(this);
}

LengkuasSFLParser::StatementContext* LengkuasSFLParser::statement() {
  StatementContext *_localctx = _tracker.createInstance<StatementContext>(_ctx, getState());
  enterRule(_localctx, 2, LengkuasSFLParser::RuleStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(70);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(60);
      variableDeclaration();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(61);
      functionDeclaration();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(62);
      controlFlow();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(63);
      loop();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(64);
      ioOperation();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(65);
      arithmeticOperation();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(66);
      templateLiteral();
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(67);
      errorHandling();
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(68);
      pointerReference();
      break;
    }

    case 10: {
      enterOuterAlt(_localctx, 10);
      setState(69);
      asyncBlock();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VariableDeclarationContext ------------------------------------------------------------------

LengkuasSFLParser::VariableDeclarationContext::VariableDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

LengkuasSFLParser::DataTypeContext* LengkuasSFLParser::VariableDeclarationContext::dataType() {
  return getRuleContext<LengkuasSFLParser::DataTypeContext>(0);
}

tree::TerminalNode* LengkuasSFLParser::VariableDeclarationContext::IDENTIFIER() {
  return getToken(LengkuasSFLParser::IDENTIFIER, 0);
}

tree::TerminalNode* LengkuasSFLParser::VariableDeclarationContext::ASSIGN() {
  return getToken(LengkuasSFLParser::ASSIGN, 0);
}

LengkuasSFLParser::ExpressionContext* LengkuasSFLParser::VariableDeclarationContext::expression() {
  return getRuleContext<LengkuasSFLParser::ExpressionContext>(0);
}

tree::TerminalNode* LengkuasSFLParser::VariableDeclarationContext::ARR() {
  return getToken(LengkuasSFLParser::ARR, 0);
}


size_t LengkuasSFLParser::VariableDeclarationContext::getRuleIndex() const {
  return LengkuasSFLParser::RuleVariableDeclaration;
}

void LengkuasSFLParser::VariableDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LengkuasSFLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVariableDeclaration(this);
}

void LengkuasSFLParser::VariableDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LengkuasSFLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVariableDeclaration(this);
}

LengkuasSFLParser::VariableDeclarationContext* LengkuasSFLParser::variableDeclaration() {
  VariableDeclarationContext *_localctx = _tracker.createInstance<VariableDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 4, LengkuasSFLParser::RuleVariableDeclaration);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(72);
    dataType();
    setState(74);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == LengkuasSFLParser::ARR) {
      setState(73);
      match(LengkuasSFLParser::ARR);
    }
    setState(76);
    match(LengkuasSFLParser::IDENTIFIER);
    setState(77);
    match(LengkuasSFLParser::ASSIGN);
    setState(78);
    expression(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DataTypeContext ------------------------------------------------------------------

LengkuasSFLParser::DataTypeContext::DataTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t LengkuasSFLParser::DataTypeContext::getRuleIndex() const {
  return LengkuasSFLParser::RuleDataType;
}

void LengkuasSFLParser::DataTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LengkuasSFLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDataType(this);
}

void LengkuasSFLParser::DataTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LengkuasSFLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDataType(this);
}

LengkuasSFLParser::DataTypeContext* LengkuasSFLParser::dataType() {
  DataTypeContext *_localctx = _tracker.createInstance<DataTypeContext>(_ctx, getState());
  enterRule(_localctx, 6, LengkuasSFLParser::RuleDataType);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(80);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 254) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpressionContext ------------------------------------------------------------------

LengkuasSFLParser::ExpressionContext::ExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<LengkuasSFLParser::PrimaryExpressionContext *> LengkuasSFLParser::ExpressionContext::primaryExpression() {
  return getRuleContexts<LengkuasSFLParser::PrimaryExpressionContext>();
}

LengkuasSFLParser::PrimaryExpressionContext* LengkuasSFLParser::ExpressionContext::primaryExpression(size_t i) {
  return getRuleContext<LengkuasSFLParser::PrimaryExpressionContext>(i);
}

std::vector<LengkuasSFLParser::ArithmeticOperatorContext *> LengkuasSFLParser::ExpressionContext::arithmeticOperator() {
  return getRuleContexts<LengkuasSFLParser::ArithmeticOperatorContext>();
}

LengkuasSFLParser::ArithmeticOperatorContext* LengkuasSFLParser::ExpressionContext::arithmeticOperator(size_t i) {
  return getRuleContext<LengkuasSFLParser::ArithmeticOperatorContext>(i);
}

tree::TerminalNode* LengkuasSFLParser::ExpressionContext::NOT() {
  return getToken(LengkuasSFLParser::NOT, 0);
}

std::vector<LengkuasSFLParser::ExpressionContext *> LengkuasSFLParser::ExpressionContext::expression() {
  return getRuleContexts<LengkuasSFLParser::ExpressionContext>();
}

LengkuasSFLParser::ExpressionContext* LengkuasSFLParser::ExpressionContext::expression(size_t i) {
  return getRuleContext<LengkuasSFLParser::ExpressionContext>(i);
}

tree::TerminalNode* LengkuasSFLParser::ExpressionContext::OR() {
  return getToken(LengkuasSFLParser::OR, 0);
}

tree::TerminalNode* LengkuasSFLParser::ExpressionContext::AND() {
  return getToken(LengkuasSFLParser::AND, 0);
}


size_t LengkuasSFLParser::ExpressionContext::getRuleIndex() const {
  return LengkuasSFLParser::RuleExpression;
}

void LengkuasSFLParser::ExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LengkuasSFLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpression(this);
}

void LengkuasSFLParser::ExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LengkuasSFLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpression(this);
}


LengkuasSFLParser::ExpressionContext* LengkuasSFLParser::expression() {
   return expression(0);
}

LengkuasSFLParser::ExpressionContext* LengkuasSFLParser::expression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  LengkuasSFLParser::ExpressionContext *_localctx = _tracker.createInstance<ExpressionContext>(_ctx, parentState);
  LengkuasSFLParser::ExpressionContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 8;
  enterRecursionRule(_localctx, 8, LengkuasSFLParser::RuleExpression, precedence);

    

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(94);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case LengkuasSFLParser::IDENTIFIER:
      case LengkuasSFLParser::NUMBER:
      case LengkuasSFLParser::STRING:
      case LengkuasSFLParser::BOOLEAN:
      case LengkuasSFLParser::NIL:
      case LengkuasSFLParser::LPAREN: {
        setState(83);
        primaryExpression();
        setState(89);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx);
        while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
          if (alt == 1) {
            setState(84);
            arithmeticOperator();
            setState(85);
            primaryExpression(); 
          }
          setState(91);
          _errHandler->sync(this);
          alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx);
        }
        break;
      }

      case LengkuasSFLParser::NOT: {
        setState(92);
        match(LengkuasSFLParser::NOT);
        setState(93);
        expression(1);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    _ctx->stop = _input->LT(-1);
    setState(104);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(102);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(96);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(97);
          match(LengkuasSFLParser::OR);
          setState(98);
          expression(4);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(99);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(100);
          match(LengkuasSFLParser::AND);
          setState(101);
          expression(3);
          break;
        }

        default:
          break;
        } 
      }
      setState(106);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- PrimaryExpressionContext ------------------------------------------------------------------

LengkuasSFLParser::PrimaryExpressionContext::PrimaryExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* LengkuasSFLParser::PrimaryExpressionContext::NUMBER() {
  return getToken(LengkuasSFLParser::NUMBER, 0);
}

tree::TerminalNode* LengkuasSFLParser::PrimaryExpressionContext::STRING() {
  return getToken(LengkuasSFLParser::STRING, 0);
}

tree::TerminalNode* LengkuasSFLParser::PrimaryExpressionContext::BOOLEAN() {
  return getToken(LengkuasSFLParser::BOOLEAN, 0);
}

tree::TerminalNode* LengkuasSFLParser::PrimaryExpressionContext::NIL() {
  return getToken(LengkuasSFLParser::NIL, 0);
}

tree::TerminalNode* LengkuasSFLParser::PrimaryExpressionContext::IDENTIFIER() {
  return getToken(LengkuasSFLParser::IDENTIFIER, 0);
}

LengkuasSFLParser::TemplateLiteralContext* LengkuasSFLParser::PrimaryExpressionContext::templateLiteral() {
  return getRuleContext<LengkuasSFLParser::TemplateLiteralContext>(0);
}

tree::TerminalNode* LengkuasSFLParser::PrimaryExpressionContext::LPAREN() {
  return getToken(LengkuasSFLParser::LPAREN, 0);
}

LengkuasSFLParser::ExpressionContext* LengkuasSFLParser::PrimaryExpressionContext::expression() {
  return getRuleContext<LengkuasSFLParser::ExpressionContext>(0);
}

tree::TerminalNode* LengkuasSFLParser::PrimaryExpressionContext::RPAREN() {
  return getToken(LengkuasSFLParser::RPAREN, 0);
}


size_t LengkuasSFLParser::PrimaryExpressionContext::getRuleIndex() const {
  return LengkuasSFLParser::RulePrimaryExpression;
}

void LengkuasSFLParser::PrimaryExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LengkuasSFLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPrimaryExpression(this);
}

void LengkuasSFLParser::PrimaryExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LengkuasSFLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPrimaryExpression(this);
}

LengkuasSFLParser::PrimaryExpressionContext* LengkuasSFLParser::primaryExpression() {
  PrimaryExpressionContext *_localctx = _tracker.createInstance<PrimaryExpressionContext>(_ctx, getState());
  enterRule(_localctx, 10, LengkuasSFLParser::RulePrimaryExpression);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(117);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(107);
      match(LengkuasSFLParser::NUMBER);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(108);
      match(LengkuasSFLParser::STRING);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(109);
      match(LengkuasSFLParser::BOOLEAN);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(110);
      match(LengkuasSFLParser::NIL);
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(111);
      match(LengkuasSFLParser::IDENTIFIER);
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(112);
      templateLiteral();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(113);
      match(LengkuasSFLParser::LPAREN);
      setState(114);
      expression(0);
      setState(115);
      match(LengkuasSFLParser::RPAREN);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ArithmeticOperatorContext ------------------------------------------------------------------

LengkuasSFLParser::ArithmeticOperatorContext::ArithmeticOperatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* LengkuasSFLParser::ArithmeticOperatorContext::PLUS() {
  return getToken(LengkuasSFLParser::PLUS, 0);
}

tree::TerminalNode* LengkuasSFLParser::ArithmeticOperatorContext::MINUS() {
  return getToken(LengkuasSFLParser::MINUS, 0);
}

tree::TerminalNode* LengkuasSFLParser::ArithmeticOperatorContext::MULT() {
  return getToken(LengkuasSFLParser::MULT, 0);
}

tree::TerminalNode* LengkuasSFLParser::ArithmeticOperatorContext::DIV() {
  return getToken(LengkuasSFLParser::DIV, 0);
}

tree::TerminalNode* LengkuasSFLParser::ArithmeticOperatorContext::MOD() {
  return getToken(LengkuasSFLParser::MOD, 0);
}


size_t LengkuasSFLParser::ArithmeticOperatorContext::getRuleIndex() const {
  return LengkuasSFLParser::RuleArithmeticOperator;
}

void LengkuasSFLParser::ArithmeticOperatorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LengkuasSFLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArithmeticOperator(this);
}

void LengkuasSFLParser::ArithmeticOperatorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LengkuasSFLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArithmeticOperator(this);
}

LengkuasSFLParser::ArithmeticOperatorContext* LengkuasSFLParser::arithmeticOperator() {
  ArithmeticOperatorContext *_localctx = _tracker.createInstance<ArithmeticOperatorContext>(_ctx, getState());
  enterRule(_localctx, 12, LengkuasSFLParser::RuleArithmeticOperator);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(119);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 17451448556060672) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ArithmeticOperationContext ------------------------------------------------------------------

LengkuasSFLParser::ArithmeticOperationContext::ArithmeticOperationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<LengkuasSFLParser::ExpressionContext *> LengkuasSFLParser::ArithmeticOperationContext::expression() {
  return getRuleContexts<LengkuasSFLParser::ExpressionContext>();
}

LengkuasSFLParser::ExpressionContext* LengkuasSFLParser::ArithmeticOperationContext::expression(size_t i) {
  return getRuleContext<LengkuasSFLParser::ExpressionContext>(i);
}

std::vector<LengkuasSFLParser::ArithmeticOperatorContext *> LengkuasSFLParser::ArithmeticOperationContext::arithmeticOperator() {
  return getRuleContexts<LengkuasSFLParser::ArithmeticOperatorContext>();
}

LengkuasSFLParser::ArithmeticOperatorContext* LengkuasSFLParser::ArithmeticOperationContext::arithmeticOperator(size_t i) {
  return getRuleContext<LengkuasSFLParser::ArithmeticOperatorContext>(i);
}


size_t LengkuasSFLParser::ArithmeticOperationContext::getRuleIndex() const {
  return LengkuasSFLParser::RuleArithmeticOperation;
}

void LengkuasSFLParser::ArithmeticOperationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LengkuasSFLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArithmeticOperation(this);
}

void LengkuasSFLParser::ArithmeticOperationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LengkuasSFLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArithmeticOperation(this);
}

LengkuasSFLParser::ArithmeticOperationContext* LengkuasSFLParser::arithmeticOperation() {
  ArithmeticOperationContext *_localctx = _tracker.createInstance<ArithmeticOperationContext>(_ctx, getState());
  enterRule(_localctx, 14, LengkuasSFLParser::RuleArithmeticOperation);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(121);
    expression(0);
    setState(125); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(122);
      arithmeticOperator();
      setState(123);
      expression(0);
      setState(127); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 17451448556060672) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TemplateLiteralContext ------------------------------------------------------------------

LengkuasSFLParser::TemplateLiteralContext::TemplateLiteralContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* LengkuasSFLParser::TemplateLiteralContext::STRING() {
  return getToken(LengkuasSFLParser::STRING, 0);
}

std::vector<tree::TerminalNode *> LengkuasSFLParser::TemplateLiteralContext::IDENTIFIER() {
  return getTokens(LengkuasSFLParser::IDENTIFIER);
}

tree::TerminalNode* LengkuasSFLParser::TemplateLiteralContext::IDENTIFIER(size_t i) {
  return getToken(LengkuasSFLParser::IDENTIFIER, i);
}

std::vector<LengkuasSFLParser::ExpressionContext *> LengkuasSFLParser::TemplateLiteralContext::expression() {
  return getRuleContexts<LengkuasSFLParser::ExpressionContext>();
}

LengkuasSFLParser::ExpressionContext* LengkuasSFLParser::TemplateLiteralContext::expression(size_t i) {
  return getRuleContext<LengkuasSFLParser::ExpressionContext>(i);
}


size_t LengkuasSFLParser::TemplateLiteralContext::getRuleIndex() const {
  return LengkuasSFLParser::RuleTemplateLiteral;
}

void LengkuasSFLParser::TemplateLiteralContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LengkuasSFLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTemplateLiteral(this);
}

void LengkuasSFLParser::TemplateLiteralContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LengkuasSFLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTemplateLiteral(this);
}

LengkuasSFLParser::TemplateLiteralContext* LengkuasSFLParser::templateLiteral() {
  TemplateLiteralContext *_localctx = _tracker.createInstance<TemplateLiteralContext>(_ctx, getState());
  enterRule(_localctx, 16, LengkuasSFLParser::RuleTemplateLiteral);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(129);
    match(LengkuasSFLParser::STRING);
    setState(138);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(136);
        _errHandler->sync(this);
        switch (_input->LA(1)) {
          case LengkuasSFLParser::T__7: {
            setState(130);
            match(LengkuasSFLParser::T__7);
            setState(131);
            match(LengkuasSFLParser::IDENTIFIER);
            break;
          }

          case LengkuasSFLParser::T__8: {
            setState(132);
            match(LengkuasSFLParser::T__8);
            setState(133);
            expression(0);
            setState(134);
            match(LengkuasSFLParser::T__9);
            break;
          }

        default:
          throw NoViableAltException(this);
        } 
      }
      setState(140);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionDeclarationContext ------------------------------------------------------------------

LengkuasSFLParser::FunctionDeclarationContext::FunctionDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* LengkuasSFLParser::FunctionDeclarationContext::IDENTIFIER() {
  return getToken(LengkuasSFLParser::IDENTIFIER, 0);
}

tree::TerminalNode* LengkuasSFLParser::FunctionDeclarationContext::LPAREN() {
  return getToken(LengkuasSFLParser::LPAREN, 0);
}

tree::TerminalNode* LengkuasSFLParser::FunctionDeclarationContext::RPAREN() {
  return getToken(LengkuasSFLParser::RPAREN, 0);
}

tree::TerminalNode* LengkuasSFLParser::FunctionDeclarationContext::COLON() {
  return getToken(LengkuasSFLParser::COLON, 0);
}

std::vector<LengkuasSFLParser::ParameterContext *> LengkuasSFLParser::FunctionDeclarationContext::parameter() {
  return getRuleContexts<LengkuasSFLParser::ParameterContext>();
}

LengkuasSFLParser::ParameterContext* LengkuasSFLParser::FunctionDeclarationContext::parameter(size_t i) {
  return getRuleContext<LengkuasSFLParser::ParameterContext>(i);
}

std::vector<LengkuasSFLParser::StatementContext *> LengkuasSFLParser::FunctionDeclarationContext::statement() {
  return getRuleContexts<LengkuasSFLParser::StatementContext>();
}

LengkuasSFLParser::StatementContext* LengkuasSFLParser::FunctionDeclarationContext::statement(size_t i) {
  return getRuleContext<LengkuasSFLParser::StatementContext>(i);
}

std::vector<tree::TerminalNode *> LengkuasSFLParser::FunctionDeclarationContext::COMMA() {
  return getTokens(LengkuasSFLParser::COMMA);
}

tree::TerminalNode* LengkuasSFLParser::FunctionDeclarationContext::COMMA(size_t i) {
  return getToken(LengkuasSFLParser::COMMA, i);
}


size_t LengkuasSFLParser::FunctionDeclarationContext::getRuleIndex() const {
  return LengkuasSFLParser::RuleFunctionDeclaration;
}

void LengkuasSFLParser::FunctionDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LengkuasSFLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunctionDeclaration(this);
}

void LengkuasSFLParser::FunctionDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LengkuasSFLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunctionDeclaration(this);
}

LengkuasSFLParser::FunctionDeclarationContext* LengkuasSFLParser::functionDeclaration() {
  FunctionDeclarationContext *_localctx = _tracker.createInstance<FunctionDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 18, LengkuasSFLParser::RuleFunctionDeclaration);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(141);
    match(LengkuasSFLParser::T__10);
    setState(142);
    match(LengkuasSFLParser::IDENTIFIER);
    setState(143);
    match(LengkuasSFLParser::LPAREN);
    setState(152);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 254) != 0)) {
      setState(144);
      parameter();
      setState(149);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == LengkuasSFLParser::COMMA) {
        setState(145);
        match(LengkuasSFLParser::COMMA);
        setState(146);
        parameter();
        setState(151);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
    setState(154);
    match(LengkuasSFLParser::RPAREN);
    setState(155);
    match(LengkuasSFLParser::COLON);
    setState(157); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(156);
      statement();
      setState(159); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 18022922906118398) != 0) || _la == LengkuasSFLParser::NOT);
    setState(161);
    match(LengkuasSFLParser::T__11);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ParameterContext ------------------------------------------------------------------

LengkuasSFLParser::ParameterContext::ParameterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

LengkuasSFLParser::DataTypeContext* LengkuasSFLParser::ParameterContext::dataType() {
  return getRuleContext<LengkuasSFLParser::DataTypeContext>(0);
}

tree::TerminalNode* LengkuasSFLParser::ParameterContext::IDENTIFIER() {
  return getToken(LengkuasSFLParser::IDENTIFIER, 0);
}


size_t LengkuasSFLParser::ParameterContext::getRuleIndex() const {
  return LengkuasSFLParser::RuleParameter;
}

void LengkuasSFLParser::ParameterContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LengkuasSFLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParameter(this);
}

void LengkuasSFLParser::ParameterContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LengkuasSFLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParameter(this);
}

LengkuasSFLParser::ParameterContext* LengkuasSFLParser::parameter() {
  ParameterContext *_localctx = _tracker.createInstance<ParameterContext>(_ctx, getState());
  enterRule(_localctx, 20, LengkuasSFLParser::RuleParameter);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(163);
    dataType();
    setState(164);
    match(LengkuasSFLParser::IDENTIFIER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ControlFlowContext ------------------------------------------------------------------

LengkuasSFLParser::ControlFlowContext::ControlFlowContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

LengkuasSFLParser::IfStatementContext* LengkuasSFLParser::ControlFlowContext::ifStatement() {
  return getRuleContext<LengkuasSFLParser::IfStatementContext>(0);
}

LengkuasSFLParser::SwitchStatementContext* LengkuasSFLParser::ControlFlowContext::switchStatement() {
  return getRuleContext<LengkuasSFLParser::SwitchStatementContext>(0);
}


size_t LengkuasSFLParser::ControlFlowContext::getRuleIndex() const {
  return LengkuasSFLParser::RuleControlFlow;
}

void LengkuasSFLParser::ControlFlowContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LengkuasSFLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterControlFlow(this);
}

void LengkuasSFLParser::ControlFlowContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LengkuasSFLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitControlFlow(this);
}

LengkuasSFLParser::ControlFlowContext* LengkuasSFLParser::controlFlow() {
  ControlFlowContext *_localctx = _tracker.createInstance<ControlFlowContext>(_ctx, getState());
  enterRule(_localctx, 22, LengkuasSFLParser::RuleControlFlow);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(168);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case LengkuasSFLParser::T__12: {
        enterOuterAlt(_localctx, 1);
        setState(166);
        ifStatement();
        break;
      }

      case LengkuasSFLParser::T__16: {
        enterOuterAlt(_localctx, 2);
        setState(167);
        switchStatement();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IfStatementContext ------------------------------------------------------------------

LengkuasSFLParser::IfStatementContext::IfStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> LengkuasSFLParser::IfStatementContext::LPAREN() {
  return getTokens(LengkuasSFLParser::LPAREN);
}

tree::TerminalNode* LengkuasSFLParser::IfStatementContext::LPAREN(size_t i) {
  return getToken(LengkuasSFLParser::LPAREN, i);
}

std::vector<LengkuasSFLParser::ExpressionContext *> LengkuasSFLParser::IfStatementContext::expression() {
  return getRuleContexts<LengkuasSFLParser::ExpressionContext>();
}

LengkuasSFLParser::ExpressionContext* LengkuasSFLParser::IfStatementContext::expression(size_t i) {
  return getRuleContext<LengkuasSFLParser::ExpressionContext>(i);
}

std::vector<tree::TerminalNode *> LengkuasSFLParser::IfStatementContext::RPAREN() {
  return getTokens(LengkuasSFLParser::RPAREN);
}

tree::TerminalNode* LengkuasSFLParser::IfStatementContext::RPAREN(size_t i) {
  return getToken(LengkuasSFLParser::RPAREN, i);
}

std::vector<tree::TerminalNode *> LengkuasSFLParser::IfStatementContext::COLON() {
  return getTokens(LengkuasSFLParser::COLON);
}

tree::TerminalNode* LengkuasSFLParser::IfStatementContext::COLON(size_t i) {
  return getToken(LengkuasSFLParser::COLON, i);
}

std::vector<LengkuasSFLParser::StatementContext *> LengkuasSFLParser::IfStatementContext::statement() {
  return getRuleContexts<LengkuasSFLParser::StatementContext>();
}

LengkuasSFLParser::StatementContext* LengkuasSFLParser::IfStatementContext::statement(size_t i) {
  return getRuleContext<LengkuasSFLParser::StatementContext>(i);
}


size_t LengkuasSFLParser::IfStatementContext::getRuleIndex() const {
  return LengkuasSFLParser::RuleIfStatement;
}

void LengkuasSFLParser::IfStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LengkuasSFLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIfStatement(this);
}

void LengkuasSFLParser::IfStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LengkuasSFLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIfStatement(this);
}

LengkuasSFLParser::IfStatementContext* LengkuasSFLParser::ifStatement() {
  IfStatementContext *_localctx = _tracker.createInstance<IfStatementContext>(_ctx, getState());
  enterRule(_localctx, 24, LengkuasSFLParser::RuleIfStatement);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(170);
    match(LengkuasSFLParser::T__12);
    setState(171);
    match(LengkuasSFLParser::LPAREN);
    setState(172);
    expression(0);
    setState(173);
    match(LengkuasSFLParser::RPAREN);
    setState(174);
    match(LengkuasSFLParser::COLON);
    setState(176); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(175);
      statement();
      setState(178); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 18022922906118398) != 0) || _la == LengkuasSFLParser::NOT);
    setState(192);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == LengkuasSFLParser::T__13) {
      setState(180);
      match(LengkuasSFLParser::T__13);
      setState(181);
      match(LengkuasSFLParser::LPAREN);
      setState(182);
      expression(0);
      setState(183);
      match(LengkuasSFLParser::RPAREN);
      setState(184);
      match(LengkuasSFLParser::COLON);
      setState(186); 
      _errHandler->sync(this);
      _la = _input->LA(1);
      do {
        setState(185);
        statement();
        setState(188); 
        _errHandler->sync(this);
        _la = _input->LA(1);
      } while ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 18022922906118398) != 0) || _la == LengkuasSFLParser::NOT);
      setState(194);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(195);
    match(LengkuasSFLParser::T__14);
    setState(196);
    match(LengkuasSFLParser::COLON);
    setState(198); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(197);
      statement();
      setState(200); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 18022922906118398) != 0) || _la == LengkuasSFLParser::NOT);
    setState(202);
    match(LengkuasSFLParser::T__15);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SwitchStatementContext ------------------------------------------------------------------

LengkuasSFLParser::SwitchStatementContext::SwitchStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* LengkuasSFLParser::SwitchStatementContext::LPAREN() {
  return getToken(LengkuasSFLParser::LPAREN, 0);
}

LengkuasSFLParser::ExpressionContext* LengkuasSFLParser::SwitchStatementContext::expression() {
  return getRuleContext<LengkuasSFLParser::ExpressionContext>(0);
}

tree::TerminalNode* LengkuasSFLParser::SwitchStatementContext::RPAREN() {
  return getToken(LengkuasSFLParser::RPAREN, 0);
}

tree::TerminalNode* LengkuasSFLParser::SwitchStatementContext::COLON() {
  return getToken(LengkuasSFLParser::COLON, 0);
}

std::vector<LengkuasSFLParser::CaseBlockContext *> LengkuasSFLParser::SwitchStatementContext::caseBlock() {
  return getRuleContexts<LengkuasSFLParser::CaseBlockContext>();
}

LengkuasSFLParser::CaseBlockContext* LengkuasSFLParser::SwitchStatementContext::caseBlock(size_t i) {
  return getRuleContext<LengkuasSFLParser::CaseBlockContext>(i);
}

LengkuasSFLParser::DefaultBlockContext* LengkuasSFLParser::SwitchStatementContext::defaultBlock() {
  return getRuleContext<LengkuasSFLParser::DefaultBlockContext>(0);
}


size_t LengkuasSFLParser::SwitchStatementContext::getRuleIndex() const {
  return LengkuasSFLParser::RuleSwitchStatement;
}

void LengkuasSFLParser::SwitchStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LengkuasSFLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSwitchStatement(this);
}

void LengkuasSFLParser::SwitchStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LengkuasSFLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSwitchStatement(this);
}

LengkuasSFLParser::SwitchStatementContext* LengkuasSFLParser::switchStatement() {
  SwitchStatementContext *_localctx = _tracker.createInstance<SwitchStatementContext>(_ctx, getState());
  enterRule(_localctx, 26, LengkuasSFLParser::RuleSwitchStatement);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(204);
    match(LengkuasSFLParser::T__16);
    setState(205);
    match(LengkuasSFLParser::LPAREN);
    setState(206);
    expression(0);
    setState(207);
    match(LengkuasSFLParser::RPAREN);
    setState(208);
    match(LengkuasSFLParser::COLON);
    setState(210); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(209);
      caseBlock();
      setState(212); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == LengkuasSFLParser::T__18);
    setState(215);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == LengkuasSFLParser::T__19) {
      setState(214);
      defaultBlock();
    }
    setState(217);
    match(LengkuasSFLParser::T__17);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CaseBlockContext ------------------------------------------------------------------

LengkuasSFLParser::CaseBlockContext::CaseBlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

LengkuasSFLParser::ExpressionContext* LengkuasSFLParser::CaseBlockContext::expression() {
  return getRuleContext<LengkuasSFLParser::ExpressionContext>(0);
}

tree::TerminalNode* LengkuasSFLParser::CaseBlockContext::COLON() {
  return getToken(LengkuasSFLParser::COLON, 0);
}

tree::TerminalNode* LengkuasSFLParser::CaseBlockContext::LBRACE() {
  return getToken(LengkuasSFLParser::LBRACE, 0);
}

tree::TerminalNode* LengkuasSFLParser::CaseBlockContext::RBRACE() {
  return getToken(LengkuasSFLParser::RBRACE, 0);
}

std::vector<LengkuasSFLParser::StatementContext *> LengkuasSFLParser::CaseBlockContext::statement() {
  return getRuleContexts<LengkuasSFLParser::StatementContext>();
}

LengkuasSFLParser::StatementContext* LengkuasSFLParser::CaseBlockContext::statement(size_t i) {
  return getRuleContext<LengkuasSFLParser::StatementContext>(i);
}


size_t LengkuasSFLParser::CaseBlockContext::getRuleIndex() const {
  return LengkuasSFLParser::RuleCaseBlock;
}

void LengkuasSFLParser::CaseBlockContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LengkuasSFLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCaseBlock(this);
}

void LengkuasSFLParser::CaseBlockContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LengkuasSFLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCaseBlock(this);
}

LengkuasSFLParser::CaseBlockContext* LengkuasSFLParser::caseBlock() {
  CaseBlockContext *_localctx = _tracker.createInstance<CaseBlockContext>(_ctx, getState());
  enterRule(_localctx, 28, LengkuasSFLParser::RuleCaseBlock);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(219);
    match(LengkuasSFLParser::T__18);
    setState(220);
    expression(0);
    setState(221);
    match(LengkuasSFLParser::COLON);
    setState(222);
    match(LengkuasSFLParser::LBRACE);
    setState(224); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(223);
      statement();
      setState(226); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 18022922906118398) != 0) || _la == LengkuasSFLParser::NOT);
    setState(228);
    match(LengkuasSFLParser::RBRACE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DefaultBlockContext ------------------------------------------------------------------

LengkuasSFLParser::DefaultBlockContext::DefaultBlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* LengkuasSFLParser::DefaultBlockContext::COLON() {
  return getToken(LengkuasSFLParser::COLON, 0);
}

tree::TerminalNode* LengkuasSFLParser::DefaultBlockContext::LBRACE() {
  return getToken(LengkuasSFLParser::LBRACE, 0);
}

tree::TerminalNode* LengkuasSFLParser::DefaultBlockContext::RBRACE() {
  return getToken(LengkuasSFLParser::RBRACE, 0);
}

std::vector<LengkuasSFLParser::StatementContext *> LengkuasSFLParser::DefaultBlockContext::statement() {
  return getRuleContexts<LengkuasSFLParser::StatementContext>();
}

LengkuasSFLParser::StatementContext* LengkuasSFLParser::DefaultBlockContext::statement(size_t i) {
  return getRuleContext<LengkuasSFLParser::StatementContext>(i);
}


size_t LengkuasSFLParser::DefaultBlockContext::getRuleIndex() const {
  return LengkuasSFLParser::RuleDefaultBlock;
}

void LengkuasSFLParser::DefaultBlockContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LengkuasSFLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDefaultBlock(this);
}

void LengkuasSFLParser::DefaultBlockContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LengkuasSFLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDefaultBlock(this);
}

LengkuasSFLParser::DefaultBlockContext* LengkuasSFLParser::defaultBlock() {
  DefaultBlockContext *_localctx = _tracker.createInstance<DefaultBlockContext>(_ctx, getState());
  enterRule(_localctx, 30, LengkuasSFLParser::RuleDefaultBlock);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(230);
    match(LengkuasSFLParser::T__19);
    setState(231);
    match(LengkuasSFLParser::COLON);
    setState(232);
    match(LengkuasSFLParser::LBRACE);
    setState(234); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(233);
      statement();
      setState(236); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 18022922906118398) != 0) || _la == LengkuasSFLParser::NOT);
    setState(238);
    match(LengkuasSFLParser::RBRACE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LoopContext ------------------------------------------------------------------

LengkuasSFLParser::LoopContext::LoopContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

LengkuasSFLParser::WhileLoopContext* LengkuasSFLParser::LoopContext::whileLoop() {
  return getRuleContext<LengkuasSFLParser::WhileLoopContext>(0);
}

LengkuasSFLParser::DoWhileLoopContext* LengkuasSFLParser::LoopContext::doWhileLoop() {
  return getRuleContext<LengkuasSFLParser::DoWhileLoopContext>(0);
}

LengkuasSFLParser::ForLoopContext* LengkuasSFLParser::LoopContext::forLoop() {
  return getRuleContext<LengkuasSFLParser::ForLoopContext>(0);
}


size_t LengkuasSFLParser::LoopContext::getRuleIndex() const {
  return LengkuasSFLParser::RuleLoop;
}

void LengkuasSFLParser::LoopContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LengkuasSFLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLoop(this);
}

void LengkuasSFLParser::LoopContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LengkuasSFLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLoop(this);
}

LengkuasSFLParser::LoopContext* LengkuasSFLParser::loop() {
  LoopContext *_localctx = _tracker.createInstance<LoopContext>(_ctx, getState());
  enterRule(_localctx, 32, LengkuasSFLParser::RuleLoop);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(243);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case LengkuasSFLParser::T__20: {
        enterOuterAlt(_localctx, 1);
        setState(240);
        whileLoop();
        break;
      }

      case LengkuasSFLParser::T__22: {
        enterOuterAlt(_localctx, 2);
        setState(241);
        doWhileLoop();
        break;
      }

      case LengkuasSFLParser::T__23: {
        enterOuterAlt(_localctx, 3);
        setState(242);
        forLoop();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- WhileLoopContext ------------------------------------------------------------------

LengkuasSFLParser::WhileLoopContext::WhileLoopContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* LengkuasSFLParser::WhileLoopContext::LPAREN() {
  return getToken(LengkuasSFLParser::LPAREN, 0);
}

LengkuasSFLParser::ExpressionContext* LengkuasSFLParser::WhileLoopContext::expression() {
  return getRuleContext<LengkuasSFLParser::ExpressionContext>(0);
}

tree::TerminalNode* LengkuasSFLParser::WhileLoopContext::RPAREN() {
  return getToken(LengkuasSFLParser::RPAREN, 0);
}

tree::TerminalNode* LengkuasSFLParser::WhileLoopContext::COLON() {
  return getToken(LengkuasSFLParser::COLON, 0);
}

std::vector<LengkuasSFLParser::StatementContext *> LengkuasSFLParser::WhileLoopContext::statement() {
  return getRuleContexts<LengkuasSFLParser::StatementContext>();
}

LengkuasSFLParser::StatementContext* LengkuasSFLParser::WhileLoopContext::statement(size_t i) {
  return getRuleContext<LengkuasSFLParser::StatementContext>(i);
}


size_t LengkuasSFLParser::WhileLoopContext::getRuleIndex() const {
  return LengkuasSFLParser::RuleWhileLoop;
}

void LengkuasSFLParser::WhileLoopContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LengkuasSFLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterWhileLoop(this);
}

void LengkuasSFLParser::WhileLoopContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LengkuasSFLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitWhileLoop(this);
}

LengkuasSFLParser::WhileLoopContext* LengkuasSFLParser::whileLoop() {
  WhileLoopContext *_localctx = _tracker.createInstance<WhileLoopContext>(_ctx, getState());
  enterRule(_localctx, 34, LengkuasSFLParser::RuleWhileLoop);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(245);
    match(LengkuasSFLParser::T__20);
    setState(246);
    match(LengkuasSFLParser::LPAREN);
    setState(247);
    expression(0);
    setState(248);
    match(LengkuasSFLParser::RPAREN);
    setState(249);
    match(LengkuasSFLParser::COLON);
    setState(251); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(250);
      statement();
      setState(253); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 18022922906118398) != 0) || _la == LengkuasSFLParser::NOT);
    setState(255);
    match(LengkuasSFLParser::T__21);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DoWhileLoopContext ------------------------------------------------------------------

LengkuasSFLParser::DoWhileLoopContext::DoWhileLoopContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* LengkuasSFLParser::DoWhileLoopContext::COLON() {
  return getToken(LengkuasSFLParser::COLON, 0);
}

tree::TerminalNode* LengkuasSFLParser::DoWhileLoopContext::LPAREN() {
  return getToken(LengkuasSFLParser::LPAREN, 0);
}

LengkuasSFLParser::ExpressionContext* LengkuasSFLParser::DoWhileLoopContext::expression() {
  return getRuleContext<LengkuasSFLParser::ExpressionContext>(0);
}

tree::TerminalNode* LengkuasSFLParser::DoWhileLoopContext::RPAREN() {
  return getToken(LengkuasSFLParser::RPAREN, 0);
}

std::vector<LengkuasSFLParser::StatementContext *> LengkuasSFLParser::DoWhileLoopContext::statement() {
  return getRuleContexts<LengkuasSFLParser::StatementContext>();
}

LengkuasSFLParser::StatementContext* LengkuasSFLParser::DoWhileLoopContext::statement(size_t i) {
  return getRuleContext<LengkuasSFLParser::StatementContext>(i);
}


size_t LengkuasSFLParser::DoWhileLoopContext::getRuleIndex() const {
  return LengkuasSFLParser::RuleDoWhileLoop;
}

void LengkuasSFLParser::DoWhileLoopContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LengkuasSFLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDoWhileLoop(this);
}

void LengkuasSFLParser::DoWhileLoopContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LengkuasSFLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDoWhileLoop(this);
}

LengkuasSFLParser::DoWhileLoopContext* LengkuasSFLParser::doWhileLoop() {
  DoWhileLoopContext *_localctx = _tracker.createInstance<DoWhileLoopContext>(_ctx, getState());
  enterRule(_localctx, 36, LengkuasSFLParser::RuleDoWhileLoop);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(257);
    match(LengkuasSFLParser::T__22);
    setState(258);
    match(LengkuasSFLParser::COLON);
    setState(260); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(259);
              statement();
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(262); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 25, _ctx);
    } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
    setState(264);
    match(LengkuasSFLParser::T__20);
    setState(265);
    match(LengkuasSFLParser::LPAREN);
    setState(266);
    expression(0);
    setState(267);
    match(LengkuasSFLParser::RPAREN);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ForLoopContext ------------------------------------------------------------------

LengkuasSFLParser::ForLoopContext::ForLoopContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* LengkuasSFLParser::ForLoopContext::LPAREN() {
  return getToken(LengkuasSFLParser::LPAREN, 0);
}

LengkuasSFLParser::VariableDeclarationContext* LengkuasSFLParser::ForLoopContext::variableDeclaration() {
  return getRuleContext<LengkuasSFLParser::VariableDeclarationContext>(0);
}

std::vector<LengkuasSFLParser::ExpressionContext *> LengkuasSFLParser::ForLoopContext::expression() {
  return getRuleContexts<LengkuasSFLParser::ExpressionContext>();
}

LengkuasSFLParser::ExpressionContext* LengkuasSFLParser::ForLoopContext::expression(size_t i) {
  return getRuleContext<LengkuasSFLParser::ExpressionContext>(i);
}

tree::TerminalNode* LengkuasSFLParser::ForLoopContext::SEMICOLON() {
  return getToken(LengkuasSFLParser::SEMICOLON, 0);
}

tree::TerminalNode* LengkuasSFLParser::ForLoopContext::RPAREN() {
  return getToken(LengkuasSFLParser::RPAREN, 0);
}

tree::TerminalNode* LengkuasSFLParser::ForLoopContext::COLON() {
  return getToken(LengkuasSFLParser::COLON, 0);
}

std::vector<LengkuasSFLParser::StatementContext *> LengkuasSFLParser::ForLoopContext::statement() {
  return getRuleContexts<LengkuasSFLParser::StatementContext>();
}

LengkuasSFLParser::StatementContext* LengkuasSFLParser::ForLoopContext::statement(size_t i) {
  return getRuleContext<LengkuasSFLParser::StatementContext>(i);
}


size_t LengkuasSFLParser::ForLoopContext::getRuleIndex() const {
  return LengkuasSFLParser::RuleForLoop;
}

void LengkuasSFLParser::ForLoopContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LengkuasSFLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterForLoop(this);
}

void LengkuasSFLParser::ForLoopContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LengkuasSFLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitForLoop(this);
}

LengkuasSFLParser::ForLoopContext* LengkuasSFLParser::forLoop() {
  ForLoopContext *_localctx = _tracker.createInstance<ForLoopContext>(_ctx, getState());
  enterRule(_localctx, 38, LengkuasSFLParser::RuleForLoop);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(269);
    match(LengkuasSFLParser::T__23);
    setState(270);
    match(LengkuasSFLParser::LPAREN);
    setState(271);
    variableDeclaration();
    setState(272);
    expression(0);
    setState(273);
    match(LengkuasSFLParser::SEMICOLON);
    setState(274);
    expression(0);
    setState(275);
    match(LengkuasSFLParser::RPAREN);
    setState(276);
    match(LengkuasSFLParser::COLON);
    setState(278); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(277);
      statement();
      setState(280); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 18022922906118398) != 0) || _la == LengkuasSFLParser::NOT);
    setState(282);
    match(LengkuasSFLParser::T__24);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IoOperationContext ------------------------------------------------------------------

LengkuasSFLParser::IoOperationContext::IoOperationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* LengkuasSFLParser::IoOperationContext::LPAREN() {
  return getToken(LengkuasSFLParser::LPAREN, 0);
}

LengkuasSFLParser::ExpressionContext* LengkuasSFLParser::IoOperationContext::expression() {
  return getRuleContext<LengkuasSFLParser::ExpressionContext>(0);
}

tree::TerminalNode* LengkuasSFLParser::IoOperationContext::RPAREN() {
  return getToken(LengkuasSFLParser::RPAREN, 0);
}


size_t LengkuasSFLParser::IoOperationContext::getRuleIndex() const {
  return LengkuasSFLParser::RuleIoOperation;
}

void LengkuasSFLParser::IoOperationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LengkuasSFLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIoOperation(this);
}

void LengkuasSFLParser::IoOperationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LengkuasSFLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIoOperation(this);
}

LengkuasSFLParser::IoOperationContext* LengkuasSFLParser::ioOperation() {
  IoOperationContext *_localctx = _tracker.createInstance<IoOperationContext>(_ctx, getState());
  enterRule(_localctx, 40, LengkuasSFLParser::RuleIoOperation);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(294);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case LengkuasSFLParser::T__25: {
        enterOuterAlt(_localctx, 1);
        setState(284);
        match(LengkuasSFLParser::T__25);
        setState(285);
        match(LengkuasSFLParser::LPAREN);
        setState(286);
        expression(0);
        setState(287);
        match(LengkuasSFLParser::RPAREN);
        break;
      }

      case LengkuasSFLParser::T__26: {
        enterOuterAlt(_localctx, 2);
        setState(289);
        match(LengkuasSFLParser::T__26);
        setState(290);
        match(LengkuasSFLParser::LPAREN);
        setState(291);
        expression(0);
        setState(292);
        match(LengkuasSFLParser::RPAREN);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PointerReferenceContext ------------------------------------------------------------------

LengkuasSFLParser::PointerReferenceContext::PointerReferenceContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* LengkuasSFLParser::PointerReferenceContext::IDENTIFIER() {
  return getToken(LengkuasSFLParser::IDENTIFIER, 0);
}


size_t LengkuasSFLParser::PointerReferenceContext::getRuleIndex() const {
  return LengkuasSFLParser::RulePointerReference;
}

void LengkuasSFLParser::PointerReferenceContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LengkuasSFLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPointerReference(this);
}

void LengkuasSFLParser::PointerReferenceContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LengkuasSFLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPointerReference(this);
}

LengkuasSFLParser::PointerReferenceContext* LengkuasSFLParser::pointerReference() {
  PointerReferenceContext *_localctx = _tracker.createInstance<PointerReferenceContext>(_ctx, getState());
  enterRule(_localctx, 42, LengkuasSFLParser::RulePointerReference);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(296);
    match(LengkuasSFLParser::T__27);
    setState(297);
    match(LengkuasSFLParser::IDENTIFIER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AsyncBlockContext ------------------------------------------------------------------

LengkuasSFLParser::AsyncBlockContext::AsyncBlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* LengkuasSFLParser::AsyncBlockContext::LPAREN() {
  return getToken(LengkuasSFLParser::LPAREN, 0);
}

tree::TerminalNode* LengkuasSFLParser::AsyncBlockContext::RPAREN() {
  return getToken(LengkuasSFLParser::RPAREN, 0);
}

tree::TerminalNode* LengkuasSFLParser::AsyncBlockContext::COLON() {
  return getToken(LengkuasSFLParser::COLON, 0);
}

std::vector<LengkuasSFLParser::ParameterContext *> LengkuasSFLParser::AsyncBlockContext::parameter() {
  return getRuleContexts<LengkuasSFLParser::ParameterContext>();
}

LengkuasSFLParser::ParameterContext* LengkuasSFLParser::AsyncBlockContext::parameter(size_t i) {
  return getRuleContext<LengkuasSFLParser::ParameterContext>(i);
}

std::vector<LengkuasSFLParser::StatementContext *> LengkuasSFLParser::AsyncBlockContext::statement() {
  return getRuleContexts<LengkuasSFLParser::StatementContext>();
}

LengkuasSFLParser::StatementContext* LengkuasSFLParser::AsyncBlockContext::statement(size_t i) {
  return getRuleContext<LengkuasSFLParser::StatementContext>(i);
}

std::vector<tree::TerminalNode *> LengkuasSFLParser::AsyncBlockContext::COMMA() {
  return getTokens(LengkuasSFLParser::COMMA);
}

tree::TerminalNode* LengkuasSFLParser::AsyncBlockContext::COMMA(size_t i) {
  return getToken(LengkuasSFLParser::COMMA, i);
}


size_t LengkuasSFLParser::AsyncBlockContext::getRuleIndex() const {
  return LengkuasSFLParser::RuleAsyncBlock;
}

void LengkuasSFLParser::AsyncBlockContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LengkuasSFLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAsyncBlock(this);
}

void LengkuasSFLParser::AsyncBlockContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LengkuasSFLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAsyncBlock(this);
}

LengkuasSFLParser::AsyncBlockContext* LengkuasSFLParser::asyncBlock() {
  AsyncBlockContext *_localctx = _tracker.createInstance<AsyncBlockContext>(_ctx, getState());
  enterRule(_localctx, 44, LengkuasSFLParser::RuleAsyncBlock);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(299);
    match(LengkuasSFLParser::T__28);
    setState(300);
    match(LengkuasSFLParser::LPAREN);
    setState(309);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 254) != 0)) {
      setState(301);
      parameter();
      setState(306);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == LengkuasSFLParser::COMMA) {
        setState(302);
        match(LengkuasSFLParser::COMMA);
        setState(303);
        parameter();
        setState(308);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
    setState(311);
    match(LengkuasSFLParser::RPAREN);
    setState(312);
    match(LengkuasSFLParser::COLON);
    setState(314); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(313);
      statement();
      setState(316); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 18022922906118398) != 0) || _la == LengkuasSFLParser::NOT);
    setState(318);
    match(LengkuasSFLParser::T__29);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ErrorHandlingContext ------------------------------------------------------------------

LengkuasSFLParser::ErrorHandlingContext::ErrorHandlingContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> LengkuasSFLParser::ErrorHandlingContext::COLON() {
  return getTokens(LengkuasSFLParser::COLON);
}

tree::TerminalNode* LengkuasSFLParser::ErrorHandlingContext::COLON(size_t i) {
  return getToken(LengkuasSFLParser::COLON, i);
}

LengkuasSFLParser::ThrowStatementContext* LengkuasSFLParser::ErrorHandlingContext::throwStatement() {
  return getRuleContext<LengkuasSFLParser::ThrowStatementContext>(0);
}

std::vector<LengkuasSFLParser::StatementContext *> LengkuasSFLParser::ErrorHandlingContext::statement() {
  return getRuleContexts<LengkuasSFLParser::StatementContext>();
}

LengkuasSFLParser::StatementContext* LengkuasSFLParser::ErrorHandlingContext::statement(size_t i) {
  return getRuleContext<LengkuasSFLParser::StatementContext>(i);
}


size_t LengkuasSFLParser::ErrorHandlingContext::getRuleIndex() const {
  return LengkuasSFLParser::RuleErrorHandling;
}

void LengkuasSFLParser::ErrorHandlingContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LengkuasSFLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterErrorHandling(this);
}

void LengkuasSFLParser::ErrorHandlingContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LengkuasSFLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitErrorHandling(this);
}

LengkuasSFLParser::ErrorHandlingContext* LengkuasSFLParser::errorHandling() {
  ErrorHandlingContext *_localctx = _tracker.createInstance<ErrorHandlingContext>(_ctx, getState());
  enterRule(_localctx, 46, LengkuasSFLParser::RuleErrorHandling);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(320);
    match(LengkuasSFLParser::T__30);
    setState(321);
    match(LengkuasSFLParser::COLON);
    setState(323); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(322);
      statement();
      setState(325); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 18022922906118398) != 0) || _la == LengkuasSFLParser::NOT);
    setState(327);
    match(LengkuasSFLParser::T__31);
    setState(328);
    match(LengkuasSFLParser::COLON);
    setState(329);
    throwStatement();
    setState(330);
    match(LengkuasSFLParser::T__32);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ThrowStatementContext ------------------------------------------------------------------

LengkuasSFLParser::ThrowStatementContext::ThrowStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> LengkuasSFLParser::ThrowStatementContext::LPAREN() {
  return getTokens(LengkuasSFLParser::LPAREN);
}

tree::TerminalNode* LengkuasSFLParser::ThrowStatementContext::LPAREN(size_t i) {
  return getToken(LengkuasSFLParser::LPAREN, i);
}

tree::TerminalNode* LengkuasSFLParser::ThrowStatementContext::STRING() {
  return getToken(LengkuasSFLParser::STRING, 0);
}

tree::TerminalNode* LengkuasSFLParser::ThrowStatementContext::COMMA() {
  return getToken(LengkuasSFLParser::COMMA, 0);
}

tree::TerminalNode* LengkuasSFLParser::ThrowStatementContext::ARROW() {
  return getToken(LengkuasSFLParser::ARROW, 0);
}

std::vector<tree::TerminalNode *> LengkuasSFLParser::ThrowStatementContext::RPAREN() {
  return getTokens(LengkuasSFLParser::RPAREN);
}

tree::TerminalNode* LengkuasSFLParser::ThrowStatementContext::RPAREN(size_t i) {
  return getToken(LengkuasSFLParser::RPAREN, i);
}


size_t LengkuasSFLParser::ThrowStatementContext::getRuleIndex() const {
  return LengkuasSFLParser::RuleThrowStatement;
}

void LengkuasSFLParser::ThrowStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LengkuasSFLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterThrowStatement(this);
}

void LengkuasSFLParser::ThrowStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LengkuasSFLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitThrowStatement(this);
}

LengkuasSFLParser::ThrowStatementContext* LengkuasSFLParser::throwStatement() {
  ThrowStatementContext *_localctx = _tracker.createInstance<ThrowStatementContext>(_ctx, getState());
  enterRule(_localctx, 48, LengkuasSFLParser::RuleThrowStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(332);
    match(LengkuasSFLParser::T__33);
    setState(333);
    match(LengkuasSFLParser::LPAREN);
    setState(334);
    match(LengkuasSFLParser::T__34);
    setState(335);
    match(LengkuasSFLParser::LPAREN);
    setState(336);
    match(LengkuasSFLParser::STRING);
    setState(337);
    match(LengkuasSFLParser::COMMA);
    setState(338);
    match(LengkuasSFLParser::T__35);
    setState(339);
    match(LengkuasSFLParser::ARROW);
    setState(340);
    match(LengkuasSFLParser::T__36);
    setState(341);
    match(LengkuasSFLParser::LPAREN);
    setState(342);
    match(LengkuasSFLParser::RPAREN);
    setState(343);
    match(LengkuasSFLParser::RPAREN);
    setState(344);
    match(LengkuasSFLParser::RPAREN);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IncrementDecrementContext ------------------------------------------------------------------

LengkuasSFLParser::IncrementDecrementContext::IncrementDecrementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* LengkuasSFLParser::IncrementDecrementContext::IDENTIFIER() {
  return getToken(LengkuasSFLParser::IDENTIFIER, 0);
}

tree::TerminalNode* LengkuasSFLParser::IncrementDecrementContext::INCREMENT() {
  return getToken(LengkuasSFLParser::INCREMENT, 0);
}

tree::TerminalNode* LengkuasSFLParser::IncrementDecrementContext::DECREMENT() {
  return getToken(LengkuasSFLParser::DECREMENT, 0);
}


size_t LengkuasSFLParser::IncrementDecrementContext::getRuleIndex() const {
  return LengkuasSFLParser::RuleIncrementDecrement;
}

void LengkuasSFLParser::IncrementDecrementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LengkuasSFLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIncrementDecrement(this);
}

void LengkuasSFLParser::IncrementDecrementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<LengkuasSFLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIncrementDecrement(this);
}

LengkuasSFLParser::IncrementDecrementContext* LengkuasSFLParser::incrementDecrement() {
  IncrementDecrementContext *_localctx = _tracker.createInstance<IncrementDecrementContext>(_ctx, getState());
  enterRule(_localctx, 50, LengkuasSFLParser::RuleIncrementDecrement);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(346);
    match(LengkuasSFLParser::IDENTIFIER);
    setState(347);
    _la = _input->LA(1);
    if (!(_la == LengkuasSFLParser::INCREMENT

    || _la == LengkuasSFLParser::DECREMENT)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

bool LengkuasSFLParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 4: return expressionSempred(antlrcpp::downCast<ExpressionContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool LengkuasSFLParser::expressionSempred(ExpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 3);
    case 1: return precpred(_ctx, 2);

  default:
    break;
  }
  return true;
}

void LengkuasSFLParser::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  lengkuassflParserInitialize();
#else
  ::antlr4::internal::call_once(lengkuassflParserOnceFlag, lengkuassflParserInitialize);
#endif
}
