
// Generated from LengkuasSFL.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"
#include "LengkuasSFLListener.h"


/**
 * This class provides an empty implementation of LengkuasSFLListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  LengkuasSFLBaseListener : public LengkuasSFLListener {
public:

  virtual void enterProgram(LengkuasSFLParser::ProgramContext * /*ctx*/) override { }
  virtual void exitProgram(LengkuasSFLParser::ProgramContext * /*ctx*/) override { }

  virtual void enterStatement(LengkuasSFLParser::StatementContext * /*ctx*/) override { }
  virtual void exitStatement(LengkuasSFLParser::StatementContext * /*ctx*/) override { }

  virtual void enterVariableDeclaration(LengkuasSFLParser::VariableDeclarationContext * /*ctx*/) override { }
  virtual void exitVariableDeclaration(LengkuasSFLParser::VariableDeclarationContext * /*ctx*/) override { }

  virtual void enterDataType(LengkuasSFLParser::DataTypeContext * /*ctx*/) override { }
  virtual void exitDataType(LengkuasSFLParser::DataTypeContext * /*ctx*/) override { }

  virtual void enterExpression(LengkuasSFLParser::ExpressionContext * /*ctx*/) override { }
  virtual void exitExpression(LengkuasSFLParser::ExpressionContext * /*ctx*/) override { }

  virtual void enterPrimaryExpression(LengkuasSFLParser::PrimaryExpressionContext * /*ctx*/) override { }
  virtual void exitPrimaryExpression(LengkuasSFLParser::PrimaryExpressionContext * /*ctx*/) override { }

  virtual void enterArithmeticOperator(LengkuasSFLParser::ArithmeticOperatorContext * /*ctx*/) override { }
  virtual void exitArithmeticOperator(LengkuasSFLParser::ArithmeticOperatorContext * /*ctx*/) override { }

  virtual void enterArithmeticOperation(LengkuasSFLParser::ArithmeticOperationContext * /*ctx*/) override { }
  virtual void exitArithmeticOperation(LengkuasSFLParser::ArithmeticOperationContext * /*ctx*/) override { }

  virtual void enterTemplateLiteral(LengkuasSFLParser::TemplateLiteralContext * /*ctx*/) override { }
  virtual void exitTemplateLiteral(LengkuasSFLParser::TemplateLiteralContext * /*ctx*/) override { }

  virtual void enterFunctionDeclaration(LengkuasSFLParser::FunctionDeclarationContext * /*ctx*/) override { }
  virtual void exitFunctionDeclaration(LengkuasSFLParser::FunctionDeclarationContext * /*ctx*/) override { }

  virtual void enterParameter(LengkuasSFLParser::ParameterContext * /*ctx*/) override { }
  virtual void exitParameter(LengkuasSFLParser::ParameterContext * /*ctx*/) override { }

  virtual void enterControlFlow(LengkuasSFLParser::ControlFlowContext * /*ctx*/) override { }
  virtual void exitControlFlow(LengkuasSFLParser::ControlFlowContext * /*ctx*/) override { }

  virtual void enterIfStatement(LengkuasSFLParser::IfStatementContext * /*ctx*/) override { }
  virtual void exitIfStatement(LengkuasSFLParser::IfStatementContext * /*ctx*/) override { }

  virtual void enterSwitchStatement(LengkuasSFLParser::SwitchStatementContext * /*ctx*/) override { }
  virtual void exitSwitchStatement(LengkuasSFLParser::SwitchStatementContext * /*ctx*/) override { }

  virtual void enterCaseBlock(LengkuasSFLParser::CaseBlockContext * /*ctx*/) override { }
  virtual void exitCaseBlock(LengkuasSFLParser::CaseBlockContext * /*ctx*/) override { }

  virtual void enterDefaultBlock(LengkuasSFLParser::DefaultBlockContext * /*ctx*/) override { }
  virtual void exitDefaultBlock(LengkuasSFLParser::DefaultBlockContext * /*ctx*/) override { }

  virtual void enterLoop(LengkuasSFLParser::LoopContext * /*ctx*/) override { }
  virtual void exitLoop(LengkuasSFLParser::LoopContext * /*ctx*/) override { }

  virtual void enterWhileLoop(LengkuasSFLParser::WhileLoopContext * /*ctx*/) override { }
  virtual void exitWhileLoop(LengkuasSFLParser::WhileLoopContext * /*ctx*/) override { }

  virtual void enterDoWhileLoop(LengkuasSFLParser::DoWhileLoopContext * /*ctx*/) override { }
  virtual void exitDoWhileLoop(LengkuasSFLParser::DoWhileLoopContext * /*ctx*/) override { }

  virtual void enterForLoop(LengkuasSFLParser::ForLoopContext * /*ctx*/) override { }
  virtual void exitForLoop(LengkuasSFLParser::ForLoopContext * /*ctx*/) override { }

  virtual void enterIoOperation(LengkuasSFLParser::IoOperationContext * /*ctx*/) override { }
  virtual void exitIoOperation(LengkuasSFLParser::IoOperationContext * /*ctx*/) override { }

  virtual void enterPointerReference(LengkuasSFLParser::PointerReferenceContext * /*ctx*/) override { }
  virtual void exitPointerReference(LengkuasSFLParser::PointerReferenceContext * /*ctx*/) override { }

  virtual void enterAsyncBlock(LengkuasSFLParser::AsyncBlockContext * /*ctx*/) override { }
  virtual void exitAsyncBlock(LengkuasSFLParser::AsyncBlockContext * /*ctx*/) override { }

  virtual void enterErrorHandling(LengkuasSFLParser::ErrorHandlingContext * /*ctx*/) override { }
  virtual void exitErrorHandling(LengkuasSFLParser::ErrorHandlingContext * /*ctx*/) override { }

  virtual void enterThrowStatement(LengkuasSFLParser::ThrowStatementContext * /*ctx*/) override { }
  virtual void exitThrowStatement(LengkuasSFLParser::ThrowStatementContext * /*ctx*/) override { }

  virtual void enterIncrementDecrement(LengkuasSFLParser::IncrementDecrementContext * /*ctx*/) override { }
  virtual void exitIncrementDecrement(LengkuasSFLParser::IncrementDecrementContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

