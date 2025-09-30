
// Generated from LengkuasSFL.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"
#include "LengkuasSFLParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by LengkuasSFLParser.
 */
class  LengkuasSFLListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterProgram(LengkuasSFLParser::ProgramContext *ctx) = 0;
  virtual void exitProgram(LengkuasSFLParser::ProgramContext *ctx) = 0;

  virtual void enterStatement(LengkuasSFLParser::StatementContext *ctx) = 0;
  virtual void exitStatement(LengkuasSFLParser::StatementContext *ctx) = 0;

  virtual void enterVariableDeclaration(LengkuasSFLParser::VariableDeclarationContext *ctx) = 0;
  virtual void exitVariableDeclaration(LengkuasSFLParser::VariableDeclarationContext *ctx) = 0;

  virtual void enterDataType(LengkuasSFLParser::DataTypeContext *ctx) = 0;
  virtual void exitDataType(LengkuasSFLParser::DataTypeContext *ctx) = 0;

  virtual void enterExpression(LengkuasSFLParser::ExpressionContext *ctx) = 0;
  virtual void exitExpression(LengkuasSFLParser::ExpressionContext *ctx) = 0;

  virtual void enterPrimaryExpression(LengkuasSFLParser::PrimaryExpressionContext *ctx) = 0;
  virtual void exitPrimaryExpression(LengkuasSFLParser::PrimaryExpressionContext *ctx) = 0;

  virtual void enterArithmeticOperator(LengkuasSFLParser::ArithmeticOperatorContext *ctx) = 0;
  virtual void exitArithmeticOperator(LengkuasSFLParser::ArithmeticOperatorContext *ctx) = 0;

  virtual void enterArithmeticOperation(LengkuasSFLParser::ArithmeticOperationContext *ctx) = 0;
  virtual void exitArithmeticOperation(LengkuasSFLParser::ArithmeticOperationContext *ctx) = 0;

  virtual void enterTemplateLiteral(LengkuasSFLParser::TemplateLiteralContext *ctx) = 0;
  virtual void exitTemplateLiteral(LengkuasSFLParser::TemplateLiteralContext *ctx) = 0;

  virtual void enterFunctionDeclaration(LengkuasSFLParser::FunctionDeclarationContext *ctx) = 0;
  virtual void exitFunctionDeclaration(LengkuasSFLParser::FunctionDeclarationContext *ctx) = 0;

  virtual void enterParameter(LengkuasSFLParser::ParameterContext *ctx) = 0;
  virtual void exitParameter(LengkuasSFLParser::ParameterContext *ctx) = 0;

  virtual void enterControlFlow(LengkuasSFLParser::ControlFlowContext *ctx) = 0;
  virtual void exitControlFlow(LengkuasSFLParser::ControlFlowContext *ctx) = 0;

  virtual void enterIfStatement(LengkuasSFLParser::IfStatementContext *ctx) = 0;
  virtual void exitIfStatement(LengkuasSFLParser::IfStatementContext *ctx) = 0;

  virtual void enterSwitchStatement(LengkuasSFLParser::SwitchStatementContext *ctx) = 0;
  virtual void exitSwitchStatement(LengkuasSFLParser::SwitchStatementContext *ctx) = 0;

  virtual void enterCaseBlock(LengkuasSFLParser::CaseBlockContext *ctx) = 0;
  virtual void exitCaseBlock(LengkuasSFLParser::CaseBlockContext *ctx) = 0;

  virtual void enterDefaultBlock(LengkuasSFLParser::DefaultBlockContext *ctx) = 0;
  virtual void exitDefaultBlock(LengkuasSFLParser::DefaultBlockContext *ctx) = 0;

  virtual void enterLoop(LengkuasSFLParser::LoopContext *ctx) = 0;
  virtual void exitLoop(LengkuasSFLParser::LoopContext *ctx) = 0;

  virtual void enterWhileLoop(LengkuasSFLParser::WhileLoopContext *ctx) = 0;
  virtual void exitWhileLoop(LengkuasSFLParser::WhileLoopContext *ctx) = 0;

  virtual void enterDoWhileLoop(LengkuasSFLParser::DoWhileLoopContext *ctx) = 0;
  virtual void exitDoWhileLoop(LengkuasSFLParser::DoWhileLoopContext *ctx) = 0;

  virtual void enterForLoop(LengkuasSFLParser::ForLoopContext *ctx) = 0;
  virtual void exitForLoop(LengkuasSFLParser::ForLoopContext *ctx) = 0;

  virtual void enterIoOperation(LengkuasSFLParser::IoOperationContext *ctx) = 0;
  virtual void exitIoOperation(LengkuasSFLParser::IoOperationContext *ctx) = 0;

  virtual void enterPointerReference(LengkuasSFLParser::PointerReferenceContext *ctx) = 0;
  virtual void exitPointerReference(LengkuasSFLParser::PointerReferenceContext *ctx) = 0;

  virtual void enterAsyncBlock(LengkuasSFLParser::AsyncBlockContext *ctx) = 0;
  virtual void exitAsyncBlock(LengkuasSFLParser::AsyncBlockContext *ctx) = 0;

  virtual void enterErrorHandling(LengkuasSFLParser::ErrorHandlingContext *ctx) = 0;
  virtual void exitErrorHandling(LengkuasSFLParser::ErrorHandlingContext *ctx) = 0;

  virtual void enterThrowStatement(LengkuasSFLParser::ThrowStatementContext *ctx) = 0;
  virtual void exitThrowStatement(LengkuasSFLParser::ThrowStatementContext *ctx) = 0;

  virtual void enterIncrementDecrement(LengkuasSFLParser::IncrementDecrementContext *ctx) = 0;
  virtual void exitIncrementDecrement(LengkuasSFLParser::IncrementDecrementContext *ctx) = 0;


};

