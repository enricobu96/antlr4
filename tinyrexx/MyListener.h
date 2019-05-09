#pragma once

#include "antlr4-runtime.h"
#include "tinyrexxParser.h"
#include "tinyrexxBaseListener.h"

/**
 * This class defines a concrete listener for a parse tree produced by tinyrexxParser.
 */
class  MyListener : public tinyrexxBaseListener {
private:
  int indent = 0;
  std::set<std::string> vars;

public:
  MyListener(const std::set<std::string> &ids);

  void enterProgram(tinyrexxParser::ProgramContext * ctx);
  void exitProgram(tinyrexxParser::ProgramContext * ctx);

  void enterAssign(tinyrexxParser::AssignContext * ctx);
  void exitAssign(tinyrexxParser::AssignContext * ctx);

  void enterPrint(tinyrexxParser::PrintContext * ctx);
  void exitPrint(tinyrexxParser::PrintContext * ctx);

  void exitInput(tinyrexxParser::InputContext * ctx);

  void enterW_loop(tinyrexxParser::W_loopContext * ctx);
  void exitW_loop(tinyrexxParser::W_loopContext * ctx);

  void enterTest(tinyrexxParser::TestContext * ctx);
  void exitTest(tinyrexxParser::TestContext * ctx);

  void enterA_expr(tinyrexxParser::A_exprContext * ctx);
  void exitA_expr(tinyrexxParser::A_exprContext * ctx);

  void exitA_op(tinyrexxParser::A_opContext * ctx);
  void exitR_op(tinyrexxParser::R_opContext * ctx);

  void enterTerminate(tinyrexxParser::TerminateContext * ctx);
  void exitTerminate(tinyrexxParser::TerminateContext * ctx);

  void enterI_t_e(tinyrexxParser::I_t_eContext * ctx);
  void exitI_t_e(tinyrexxParser::I_t_eContext * ctx);

  void enterF_loop(tinyrexxParser::F_loopContext * ctx);
  void exitF_loop(tinyrexxParser::F_loopContext * ctx);

  void enterF_cond(tinyrexxParser::F_condContext * ctx);
  void exitF_cond(tinyrexxParser::F_condContext * ctx);

  void enterB_op(tinyrexxParser::B_opContext * ctx);
  void exitB_op(tinyrexxParser::B_opContext * ctx);

  void enterElse_bl(tinyrexxParser::Else_blContext * ctx);
  void exitElse_bl(tinyrexxParser::Else_blContext * ctx);

  void enterThen_bl(tinyrexxParser::Then_blContext * ctx);
  void exitThen_bl(tinyrexxParser::Then_blContext * ctx);
};
