
// Generated from tinyrexx.g4 by ANTLR 4.7.1


#include "tinyrexxListener.h"

#include "tinyrexxParser.h"


using namespace antlrcpp;
using namespace antlr4;

tinyrexxParser::tinyrexxParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

tinyrexxParser::~tinyrexxParser() {
  delete _interpreter;
}

std::string tinyrexxParser::getGrammarFileName() const {
  return "tinyrexx.g4";
}

const std::vector<std::string>& tinyrexxParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& tinyrexxParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- ProgramContext ------------------------------------------------------------------

tinyrexxParser::ProgramContext::ProgramContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tinyrexxParser::StatementContext *> tinyrexxParser::ProgramContext::statement() {
  return getRuleContexts<tinyrexxParser::StatementContext>();
}

tinyrexxParser::StatementContext* tinyrexxParser::ProgramContext::statement(size_t i) {
  return getRuleContext<tinyrexxParser::StatementContext>(i);
}


size_t tinyrexxParser::ProgramContext::getRuleIndex() const {
  return tinyrexxParser::RuleProgram;
}

void tinyrexxParser::ProgramContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<tinyrexxListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterProgram(this);
}

void tinyrexxParser::ProgramContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<tinyrexxListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitProgram(this);
}

tinyrexxParser::ProgramContext* tinyrexxParser::program() {
  ProgramContext *_localctx = _tracker.createInstance<ProgramContext>(_ctx, getState());
  enterRule(_localctx, 0, tinyrexxParser::RuleProgram);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(31); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(30);
      statement();
      setState(33); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << tinyrexxParser::T__1)
      | (1ULL << tinyrexxParser::T__2)
      | (1ULL << tinyrexxParser::T__3)
      | (1ULL << tinyrexxParser::T__7)
      | (1ULL << tinyrexxParser::T__10)
      | (1ULL << tinyrexxParser::OB)
      | (1ULL << tinyrexxParser::MINUS)
      | (1ULL << tinyrexxParser::ID)
      | (1ULL << tinyrexxParser::NUMBER)
      | (1ULL << tinyrexxParser::NOT))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatementContext ------------------------------------------------------------------

tinyrexxParser::StatementContext::StatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tinyrexxParser::AssignContext* tinyrexxParser::StatementContext::assign() {
  return getRuleContext<tinyrexxParser::AssignContext>(0);
}

tinyrexxParser::PrintContext* tinyrexxParser::StatementContext::print() {
  return getRuleContext<tinyrexxParser::PrintContext>(0);
}

tinyrexxParser::InputContext* tinyrexxParser::StatementContext::input() {
  return getRuleContext<tinyrexxParser::InputContext>(0);
}

tinyrexxParser::W_loopContext* tinyrexxParser::StatementContext::w_loop() {
  return getRuleContext<tinyrexxParser::W_loopContext>(0);
}

tinyrexxParser::I_t_eContext* tinyrexxParser::StatementContext::i_t_e() {
  return getRuleContext<tinyrexxParser::I_t_eContext>(0);
}

tinyrexxParser::B_opContext* tinyrexxParser::StatementContext::b_op() {
  return getRuleContext<tinyrexxParser::B_opContext>(0);
}

tinyrexxParser::TerminateContext* tinyrexxParser::StatementContext::terminate() {
  return getRuleContext<tinyrexxParser::TerminateContext>(0);
}


size_t tinyrexxParser::StatementContext::getRuleIndex() const {
  return tinyrexxParser::RuleStatement;
}

void tinyrexxParser::StatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<tinyrexxListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStatement(this);
}

void tinyrexxParser::StatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<tinyrexxListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStatement(this);
}

tinyrexxParser::StatementContext* tinyrexxParser::statement() {
  StatementContext *_localctx = _tracker.createInstance<StatementContext>(_ctx, getState());
  enterRule(_localctx, 2, tinyrexxParser::RuleStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(42);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(35);
      assign();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(36);
      print();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(37);
      input();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(38);
      w_loop();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(39);
      i_t_e();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(40);
      b_op(0);
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(41);
      terminate();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AssignContext ------------------------------------------------------------------

tinyrexxParser::AssignContext::AssignContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* tinyrexxParser::AssignContext::ID() {
  return getToken(tinyrexxParser::ID, 0);
}

tinyrexxParser::A_exprContext* tinyrexxParser::AssignContext::a_expr() {
  return getRuleContext<tinyrexxParser::A_exprContext>(0);
}

tinyrexxParser::B_opContext* tinyrexxParser::AssignContext::b_op() {
  return getRuleContext<tinyrexxParser::B_opContext>(0);
}


size_t tinyrexxParser::AssignContext::getRuleIndex() const {
  return tinyrexxParser::RuleAssign;
}

void tinyrexxParser::AssignContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<tinyrexxListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAssign(this);
}

void tinyrexxParser::AssignContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<tinyrexxListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAssign(this);
}

tinyrexxParser::AssignContext* tinyrexxParser::assign() {
  AssignContext *_localctx = _tracker.createInstance<AssignContext>(_ctx, getState());
  enterRule(_localctx, 4, tinyrexxParser::RuleAssign);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(50);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(44);
      match(tinyrexxParser::ID);
      setState(45);
      match(tinyrexxParser::T__0);
      setState(46);
      a_expr(0);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(47);
      match(tinyrexxParser::ID);
      setState(48);
      match(tinyrexxParser::T__0);
      setState(49);
      b_op(0);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PrintContext ------------------------------------------------------------------

tinyrexxParser::PrintContext::PrintContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tinyrexxParser::A_exprContext* tinyrexxParser::PrintContext::a_expr() {
  return getRuleContext<tinyrexxParser::A_exprContext>(0);
}


size_t tinyrexxParser::PrintContext::getRuleIndex() const {
  return tinyrexxParser::RulePrint;
}

void tinyrexxParser::PrintContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<tinyrexxListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPrint(this);
}

void tinyrexxParser::PrintContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<tinyrexxListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPrint(this);
}

tinyrexxParser::PrintContext* tinyrexxParser::print() {
  PrintContext *_localctx = _tracker.createInstance<PrintContext>(_ctx, getState());
  enterRule(_localctx, 6, tinyrexxParser::RulePrint);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(52);
    match(tinyrexxParser::T__1);
    setState(53);
    a_expr(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InputContext ------------------------------------------------------------------

tinyrexxParser::InputContext::InputContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* tinyrexxParser::InputContext::ID() {
  return getToken(tinyrexxParser::ID, 0);
}


size_t tinyrexxParser::InputContext::getRuleIndex() const {
  return tinyrexxParser::RuleInput;
}

void tinyrexxParser::InputContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<tinyrexxListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInput(this);
}

void tinyrexxParser::InputContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<tinyrexxListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInput(this);
}

tinyrexxParser::InputContext* tinyrexxParser::input() {
  InputContext *_localctx = _tracker.createInstance<InputContext>(_ctx, getState());
  enterRule(_localctx, 8, tinyrexxParser::RuleInput);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(55);
    match(tinyrexxParser::T__2);
    setState(56);
    match(tinyrexxParser::ID);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- W_loopContext ------------------------------------------------------------------

tinyrexxParser::W_loopContext::W_loopContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tinyrexxParser::TestContext* tinyrexxParser::W_loopContext::test() {
  return getRuleContext<tinyrexxParser::TestContext>(0);
}

std::vector<tinyrexxParser::StatementContext *> tinyrexxParser::W_loopContext::statement() {
  return getRuleContexts<tinyrexxParser::StatementContext>();
}

tinyrexxParser::StatementContext* tinyrexxParser::W_loopContext::statement(size_t i) {
  return getRuleContext<tinyrexxParser::StatementContext>(i);
}


size_t tinyrexxParser::W_loopContext::getRuleIndex() const {
  return tinyrexxParser::RuleW_loop;
}

void tinyrexxParser::W_loopContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<tinyrexxListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterW_loop(this);
}

void tinyrexxParser::W_loopContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<tinyrexxListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitW_loop(this);
}

tinyrexxParser::W_loopContext* tinyrexxParser::w_loop() {
  W_loopContext *_localctx = _tracker.createInstance<W_loopContext>(_ctx, getState());
  enterRule(_localctx, 10, tinyrexxParser::RuleW_loop);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(58);
    match(tinyrexxParser::T__3);
    setState(59);
    match(tinyrexxParser::T__4);
    setState(60);
    test();
    setState(62); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(61);
      statement();
      setState(64); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << tinyrexxParser::T__1)
      | (1ULL << tinyrexxParser::T__2)
      | (1ULL << tinyrexxParser::T__3)
      | (1ULL << tinyrexxParser::T__7)
      | (1ULL << tinyrexxParser::T__10)
      | (1ULL << tinyrexxParser::OB)
      | (1ULL << tinyrexxParser::MINUS)
      | (1ULL << tinyrexxParser::ID)
      | (1ULL << tinyrexxParser::NUMBER)
      | (1ULL << tinyrexxParser::NOT))) != 0));
    setState(66);
    match(tinyrexxParser::T__5);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- F_loopContext ------------------------------------------------------------------

tinyrexxParser::F_loopContext::F_loopContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* tinyrexxParser::F_loopContext::ID() {
  return getToken(tinyrexxParser::ID, 0);
}

std::vector<tinyrexxParser::A_exprContext *> tinyrexxParser::F_loopContext::a_expr() {
  return getRuleContexts<tinyrexxParser::A_exprContext>();
}

tinyrexxParser::A_exprContext* tinyrexxParser::F_loopContext::a_expr(size_t i) {
  return getRuleContext<tinyrexxParser::A_exprContext>(i);
}

std::vector<tinyrexxParser::StatementContext *> tinyrexxParser::F_loopContext::statement() {
  return getRuleContexts<tinyrexxParser::StatementContext>();
}

tinyrexxParser::StatementContext* tinyrexxParser::F_loopContext::statement(size_t i) {
  return getRuleContext<tinyrexxParser::StatementContext>(i);
}


size_t tinyrexxParser::F_loopContext::getRuleIndex() const {
  return tinyrexxParser::RuleF_loop;
}

void tinyrexxParser::F_loopContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<tinyrexxListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterF_loop(this);
}

void tinyrexxParser::F_loopContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<tinyrexxListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitF_loop(this);
}

tinyrexxParser::F_loopContext* tinyrexxParser::f_loop() {
  F_loopContext *_localctx = _tracker.createInstance<F_loopContext>(_ctx, getState());
  enterRule(_localctx, 12, tinyrexxParser::RuleF_loop);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(68);
    match(tinyrexxParser::T__3);
    setState(69);
    match(tinyrexxParser::ID);
    setState(70);
    match(tinyrexxParser::T__0);
    setState(71);
    a_expr(0);
    setState(72);
    match(tinyrexxParser::T__6);
    setState(73);
    a_expr(0);
    setState(75); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(74);
      statement();
      setState(77); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << tinyrexxParser::T__1)
      | (1ULL << tinyrexxParser::T__2)
      | (1ULL << tinyrexxParser::T__3)
      | (1ULL << tinyrexxParser::T__7)
      | (1ULL << tinyrexxParser::T__10)
      | (1ULL << tinyrexxParser::OB)
      | (1ULL << tinyrexxParser::MINUS)
      | (1ULL << tinyrexxParser::ID)
      | (1ULL << tinyrexxParser::NUMBER)
      | (1ULL << tinyrexxParser::NOT))) != 0));
    setState(79);
    match(tinyrexxParser::T__5);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- I_t_eContext ------------------------------------------------------------------

tinyrexxParser::I_t_eContext::I_t_eContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tinyrexxParser::GuardiaContext* tinyrexxParser::I_t_eContext::guardia() {
  return getRuleContext<tinyrexxParser::GuardiaContext>(0);
}

std::vector<tinyrexxParser::StatementContext *> tinyrexxParser::I_t_eContext::statement() {
  return getRuleContexts<tinyrexxParser::StatementContext>();
}

tinyrexxParser::StatementContext* tinyrexxParser::I_t_eContext::statement(size_t i) {
  return getRuleContext<tinyrexxParser::StatementContext>(i);
}


size_t tinyrexxParser::I_t_eContext::getRuleIndex() const {
  return tinyrexxParser::RuleI_t_e;
}

void tinyrexxParser::I_t_eContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<tinyrexxListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterI_t_e(this);
}

void tinyrexxParser::I_t_eContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<tinyrexxListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitI_t_e(this);
}

tinyrexxParser::I_t_eContext* tinyrexxParser::i_t_e() {
  I_t_eContext *_localctx = _tracker.createInstance<I_t_eContext>(_ctx, getState());
  enterRule(_localctx, 14, tinyrexxParser::RuleI_t_e);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(111);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(81);
      match(tinyrexxParser::T__7);
      setState(82);
      guardia();
      setState(83);
      match(tinyrexxParser::T__8);
      setState(84);
      match(tinyrexxParser::T__3);
      setState(86); 
      _errHandler->sync(this);
      _la = _input->LA(1);
      do {
        setState(85);
        statement();
        setState(88); 
        _errHandler->sync(this);
        _la = _input->LA(1);
      } while ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << tinyrexxParser::T__1)
        | (1ULL << tinyrexxParser::T__2)
        | (1ULL << tinyrexxParser::T__3)
        | (1ULL << tinyrexxParser::T__7)
        | (1ULL << tinyrexxParser::T__10)
        | (1ULL << tinyrexxParser::OB)
        | (1ULL << tinyrexxParser::MINUS)
        | (1ULL << tinyrexxParser::ID)
        | (1ULL << tinyrexxParser::NUMBER)
        | (1ULL << tinyrexxParser::NOT))) != 0));
      setState(90);
      match(tinyrexxParser::T__5);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(92);
      match(tinyrexxParser::T__7);
      setState(93);
      guardia();
      setState(94);
      match(tinyrexxParser::T__8);
      setState(95);
      match(tinyrexxParser::T__3);
      setState(97); 
      _errHandler->sync(this);
      _la = _input->LA(1);
      do {
        setState(96);
        statement();
        setState(99); 
        _errHandler->sync(this);
        _la = _input->LA(1);
      } while ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << tinyrexxParser::T__1)
        | (1ULL << tinyrexxParser::T__2)
        | (1ULL << tinyrexxParser::T__3)
        | (1ULL << tinyrexxParser::T__7)
        | (1ULL << tinyrexxParser::T__10)
        | (1ULL << tinyrexxParser::OB)
        | (1ULL << tinyrexxParser::MINUS)
        | (1ULL << tinyrexxParser::ID)
        | (1ULL << tinyrexxParser::NUMBER)
        | (1ULL << tinyrexxParser::NOT))) != 0));
      setState(101);
      match(tinyrexxParser::T__5);
      setState(102);
      match(tinyrexxParser::T__9);
      setState(103);
      match(tinyrexxParser::T__3);
      setState(105); 
      _errHandler->sync(this);
      _la = _input->LA(1);
      do {
        setState(104);
        statement();
        setState(107); 
        _errHandler->sync(this);
        _la = _input->LA(1);
      } while ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << tinyrexxParser::T__1)
        | (1ULL << tinyrexxParser::T__2)
        | (1ULL << tinyrexxParser::T__3)
        | (1ULL << tinyrexxParser::T__7)
        | (1ULL << tinyrexxParser::T__10)
        | (1ULL << tinyrexxParser::OB)
        | (1ULL << tinyrexxParser::MINUS)
        | (1ULL << tinyrexxParser::ID)
        | (1ULL << tinyrexxParser::NUMBER)
        | (1ULL << tinyrexxParser::NOT))) != 0));
      setState(109);
      match(tinyrexxParser::T__5);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TestContext ------------------------------------------------------------------

tinyrexxParser::TestContext::TestContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tinyrexxParser::A_exprContext *> tinyrexxParser::TestContext::a_expr() {
  return getRuleContexts<tinyrexxParser::A_exprContext>();
}

tinyrexxParser::A_exprContext* tinyrexxParser::TestContext::a_expr(size_t i) {
  return getRuleContext<tinyrexxParser::A_exprContext>(i);
}

tinyrexxParser::R_opContext* tinyrexxParser::TestContext::r_op() {
  return getRuleContext<tinyrexxParser::R_opContext>(0);
}


size_t tinyrexxParser::TestContext::getRuleIndex() const {
  return tinyrexxParser::RuleTest;
}

void tinyrexxParser::TestContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<tinyrexxListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTest(this);
}

void tinyrexxParser::TestContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<tinyrexxListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTest(this);
}

tinyrexxParser::TestContext* tinyrexxParser::test() {
  TestContext *_localctx = _tracker.createInstance<TestContext>(_ctx, getState());
  enterRule(_localctx, 16, tinyrexxParser::RuleTest);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(113);
    a_expr(0);
    setState(114);
    r_op();
    setState(115);
    a_expr(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- A_exprContext ------------------------------------------------------------------

tinyrexxParser::A_exprContext::A_exprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* tinyrexxParser::A_exprContext::ID() {
  return getToken(tinyrexxParser::ID, 0);
}

tree::TerminalNode* tinyrexxParser::A_exprContext::NUMBER() {
  return getToken(tinyrexxParser::NUMBER, 0);
}

std::vector<tinyrexxParser::A_exprContext *> tinyrexxParser::A_exprContext::a_expr() {
  return getRuleContexts<tinyrexxParser::A_exprContext>();
}

tinyrexxParser::A_exprContext* tinyrexxParser::A_exprContext::a_expr(size_t i) {
  return getRuleContext<tinyrexxParser::A_exprContext>(i);
}

tree::TerminalNode* tinyrexxParser::A_exprContext::MINUS() {
  return getToken(tinyrexxParser::MINUS, 0);
}

tinyrexxParser::A_opContext* tinyrexxParser::A_exprContext::a_op() {
  return getRuleContext<tinyrexxParser::A_opContext>(0);
}


size_t tinyrexxParser::A_exprContext::getRuleIndex() const {
  return tinyrexxParser::RuleA_expr;
}

void tinyrexxParser::A_exprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<tinyrexxListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterA_expr(this);
}

void tinyrexxParser::A_exprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<tinyrexxListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitA_expr(this);
}


tinyrexxParser::A_exprContext* tinyrexxParser::a_expr() {
   return a_expr(0);
}

tinyrexxParser::A_exprContext* tinyrexxParser::a_expr(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  tinyrexxParser::A_exprContext *_localctx = _tracker.createInstance<A_exprContext>(_ctx, parentState);
  tinyrexxParser::A_exprContext *previousContext = _localctx;
  size_t startState = 18;
  enterRecursionRule(_localctx, 18, tinyrexxParser::RuleA_expr, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(126);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case tinyrexxParser::ID: {
        setState(118);
        match(tinyrexxParser::ID);
        break;
      }

      case tinyrexxParser::NUMBER: {
        setState(119);
        match(tinyrexxParser::NUMBER);
        break;
      }

      case tinyrexxParser::OB: {
        setState(120);
        match(tinyrexxParser::OB);
        setState(121);
        a_expr(0);
        setState(122);
        match(tinyrexxParser::CB);
        break;
      }

      case tinyrexxParser::MINUS: {
        setState(124);
        match(tinyrexxParser::MINUS);
        setState(125);
        a_expr(1);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    _ctx->stop = _input->LT(-1);
    setState(134);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<A_exprContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleA_expr);
        setState(128);

        if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
        setState(129);
        a_op();
        setState(130);
        a_expr(3); 
      }
      setState(136);
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

//----------------- A_opContext ------------------------------------------------------------------

tinyrexxParser::A_opContext::A_opContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* tinyrexxParser::A_opContext::MINUS() {
  return getToken(tinyrexxParser::MINUS, 0);
}

tree::TerminalNode* tinyrexxParser::A_opContext::PLUS() {
  return getToken(tinyrexxParser::PLUS, 0);
}

tree::TerminalNode* tinyrexxParser::A_opContext::MUL() {
  return getToken(tinyrexxParser::MUL, 0);
}

tree::TerminalNode* tinyrexxParser::A_opContext::DIV() {
  return getToken(tinyrexxParser::DIV, 0);
}


size_t tinyrexxParser::A_opContext::getRuleIndex() const {
  return tinyrexxParser::RuleA_op;
}

void tinyrexxParser::A_opContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<tinyrexxListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterA_op(this);
}

void tinyrexxParser::A_opContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<tinyrexxListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitA_op(this);
}

tinyrexxParser::A_opContext* tinyrexxParser::a_op() {
  A_opContext *_localctx = _tracker.createInstance<A_opContext>(_ctx, getState());
  enterRule(_localctx, 20, tinyrexxParser::RuleA_op);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(137);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << tinyrexxParser::MINUS)
      | (1ULL << tinyrexxParser::PLUS)
      | (1ULL << tinyrexxParser::MUL)
      | (1ULL << tinyrexxParser::DIV))) != 0))) {
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

//----------------- R_opContext ------------------------------------------------------------------

tinyrexxParser::R_opContext::R_opContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* tinyrexxParser::R_opContext::EQUAL() {
  return getToken(tinyrexxParser::EQUAL, 0);
}

tree::TerminalNode* tinyrexxParser::R_opContext::LT() {
  return getToken(tinyrexxParser::LT, 0);
}

tree::TerminalNode* tinyrexxParser::R_opContext::LEQ() {
  return getToken(tinyrexxParser::LEQ, 0);
}

tree::TerminalNode* tinyrexxParser::R_opContext::GT() {
  return getToken(tinyrexxParser::GT, 0);
}

tree::TerminalNode* tinyrexxParser::R_opContext::GEQ() {
  return getToken(tinyrexxParser::GEQ, 0);
}


size_t tinyrexxParser::R_opContext::getRuleIndex() const {
  return tinyrexxParser::RuleR_op;
}

void tinyrexxParser::R_opContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<tinyrexxListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterR_op(this);
}

void tinyrexxParser::R_opContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<tinyrexxListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitR_op(this);
}

tinyrexxParser::R_opContext* tinyrexxParser::r_op() {
  R_opContext *_localctx = _tracker.createInstance<R_opContext>(_ctx, getState());
  enterRule(_localctx, 22, tinyrexxParser::RuleR_op);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(139);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << tinyrexxParser::EQUAL)
      | (1ULL << tinyrexxParser::LT)
      | (1ULL << tinyrexxParser::LEQ)
      | (1ULL << tinyrexxParser::GT)
      | (1ULL << tinyrexxParser::GEQ))) != 0))) {
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

//----------------- B_opContext ------------------------------------------------------------------

tinyrexxParser::B_opContext::B_opContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* tinyrexxParser::B_opContext::NOT() {
  return getToken(tinyrexxParser::NOT, 0);
}

std::vector<tinyrexxParser::B_opContext *> tinyrexxParser::B_opContext::b_op() {
  return getRuleContexts<tinyrexxParser::B_opContext>();
}

tinyrexxParser::B_opContext* tinyrexxParser::B_opContext::b_op(size_t i) {
  return getRuleContext<tinyrexxParser::B_opContext>(i);
}

tree::TerminalNode* tinyrexxParser::B_opContext::OB() {
  return getToken(tinyrexxParser::OB, 0);
}

tree::TerminalNode* tinyrexxParser::B_opContext::CB() {
  return getToken(tinyrexxParser::CB, 0);
}

tinyrexxParser::TestContext* tinyrexxParser::B_opContext::test() {
  return getRuleContext<tinyrexxParser::TestContext>(0);
}

tree::TerminalNode* tinyrexxParser::B_opContext::AND() {
  return getToken(tinyrexxParser::AND, 0);
}

tree::TerminalNode* tinyrexxParser::B_opContext::OR() {
  return getToken(tinyrexxParser::OR, 0);
}


size_t tinyrexxParser::B_opContext::getRuleIndex() const {
  return tinyrexxParser::RuleB_op;
}

void tinyrexxParser::B_opContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<tinyrexxListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterB_op(this);
}

void tinyrexxParser::B_opContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<tinyrexxListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitB_op(this);
}


tinyrexxParser::B_opContext* tinyrexxParser::b_op() {
   return b_op(0);
}

tinyrexxParser::B_opContext* tinyrexxParser::b_op(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  tinyrexxParser::B_opContext *_localctx = _tracker.createInstance<B_opContext>(_ctx, parentState);
  tinyrexxParser::B_opContext *previousContext = _localctx;
  size_t startState = 24;
  enterRecursionRule(_localctx, 24, tinyrexxParser::RuleB_op, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(149);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx)) {
    case 1: {
      setState(142);
      match(tinyrexxParser::NOT);
      setState(143);
      b_op(3);
      break;
    }

    case 2: {
      setState(144);
      match(tinyrexxParser::OB);
      setState(145);
      b_op(0);
      setState(146);
      match(tinyrexxParser::CB);
      break;
    }

    case 3: {
      setState(148);
      test();
      break;
    }

    }
    _ctx->stop = _input->LT(-1);
    setState(159);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 13, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(157);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<B_opContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleB_op);
          setState(151);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(152);
          match(tinyrexxParser::AND);
          setState(153);
          b_op(6);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<B_opContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleB_op);
          setState(154);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(155);
          match(tinyrexxParser::OR);
          setState(156);
          b_op(5);
          break;
        }

        } 
      }
      setState(161);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 13, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- TerminateContext ------------------------------------------------------------------

tinyrexxParser::TerminateContext::TerminateContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tinyrexxParser::A_exprContext* tinyrexxParser::TerminateContext::a_expr() {
  return getRuleContext<tinyrexxParser::A_exprContext>(0);
}


size_t tinyrexxParser::TerminateContext::getRuleIndex() const {
  return tinyrexxParser::RuleTerminate;
}

void tinyrexxParser::TerminateContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<tinyrexxListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTerminate(this);
}

void tinyrexxParser::TerminateContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<tinyrexxListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTerminate(this);
}

tinyrexxParser::TerminateContext* tinyrexxParser::terminate() {
  TerminateContext *_localctx = _tracker.createInstance<TerminateContext>(_ctx, getState());
  enterRule(_localctx, 26, tinyrexxParser::RuleTerminate);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(162);
    match(tinyrexxParser::T__10);
    setState(163);
    a_expr(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- GuardiaContext ------------------------------------------------------------------

tinyrexxParser::GuardiaContext::GuardiaContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tinyrexxParser::TestContext* tinyrexxParser::GuardiaContext::test() {
  return getRuleContext<tinyrexxParser::TestContext>(0);
}

tinyrexxParser::A_exprContext* tinyrexxParser::GuardiaContext::a_expr() {
  return getRuleContext<tinyrexxParser::A_exprContext>(0);
}


size_t tinyrexxParser::GuardiaContext::getRuleIndex() const {
  return tinyrexxParser::RuleGuardia;
}

void tinyrexxParser::GuardiaContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<tinyrexxListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterGuardia(this);
}

void tinyrexxParser::GuardiaContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<tinyrexxListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitGuardia(this);
}

tinyrexxParser::GuardiaContext* tinyrexxParser::guardia() {
  GuardiaContext *_localctx = _tracker.createInstance<GuardiaContext>(_ctx, getState());
  enterRule(_localctx, 28, tinyrexxParser::RuleGuardia);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(167);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 14, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(165);
      test();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(166);
      a_expr(0);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

bool tinyrexxParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 9: return a_exprSempred(dynamic_cast<A_exprContext *>(context), predicateIndex);
    case 12: return b_opSempred(dynamic_cast<B_opContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool tinyrexxParser::a_exprSempred(A_exprContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 2);

  default:
    break;
  }
  return true;
}

bool tinyrexxParser::b_opSempred(B_opContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 1: return precpred(_ctx, 5);
    case 2: return precpred(_ctx, 4);

  default:
    break;
  }
  return true;
}

// Static vars and initialization.
std::vector<dfa::DFA> tinyrexxParser::_decisionToDFA;
atn::PredictionContextCache tinyrexxParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN tinyrexxParser::_atn;
std::vector<uint16_t> tinyrexxParser::_serializedATN;

std::vector<std::string> tinyrexxParser::_ruleNames = {
  "program", "statement", "assign", "print", "input", "w_loop", "f_loop", 
  "i_t_e", "test", "a_expr", "a_op", "r_op", "b_op", "terminate", "guardia"
};

std::vector<std::string> tinyrexxParser::_literalNames = {
  "", "'='", "'say'", "'pull'", "'do'", "'while'", "'end'", "'to'", "'if'", 
  "'then'", "'else'", "'exit'", "'('", "')'", "'-'", "'+'", "'*'", "'/'", 
  "'=='", "'<'", "'<='", "'>'", "'>='"
};

std::vector<std::string> tinyrexxParser::_symbolicNames = {
  "", "", "", "", "", "", "", "", "", "", "", "", "OB", "CB", "MINUS", "PLUS", 
  "MUL", "DIV", "EQUAL", "LT", "LEQ", "GT", "GEQ", "ID", "NUMBER", "WS", 
  "ErrorChar", "AND", "OR", "NOT"
};

dfa::Vocabulary tinyrexxParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> tinyrexxParser::_tokenNames;

tinyrexxParser::Initializer::Initializer() {
	for (size_t i = 0; i < _symbolicNames.size(); ++i) {
		std::string name = _vocabulary.getLiteralName(i);
		if (name.empty()) {
			name = _vocabulary.getSymbolicName(i);
		}

		if (name.empty()) {
			_tokenNames.push_back("<INVALID>");
		} else {
      _tokenNames.push_back(name);
    }
	}

  _serializedATN = {
    0x3, 0x608b, 0xa72a, 0x8133, 0xb9ed, 0x417c, 0x3be7, 0x7786, 0x5964, 
    0x3, 0x1f, 0xac, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 0x9, 
    0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 0x4, 
    0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 0x9, 
    0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 0x9, 0xe, 0x4, 
    0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x3, 0x2, 0x6, 0x2, 0x22, 0xa, 
    0x2, 0xd, 0x2, 0xe, 0x2, 0x23, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 
    0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x5, 0x3, 0x2d, 0xa, 0x3, 0x3, 0x4, 0x3, 
    0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x5, 0x4, 0x35, 0xa, 0x4, 
    0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x7, 
    0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x6, 0x7, 0x41, 0xa, 0x7, 0xd, 0x7, 0xe, 
    0x7, 0x42, 0x3, 0x7, 0x3, 0x7, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 
    0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x6, 0x8, 0x4e, 0xa, 0x8, 0xd, 0x8, 0xe, 
    0x8, 0x4f, 0x3, 0x8, 0x3, 0x8, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 
    0x3, 0x9, 0x6, 0x9, 0x59, 0xa, 0x9, 0xd, 0x9, 0xe, 0x9, 0x5a, 0x3, 0x9, 
    0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x6, 0x9, 
    0x64, 0xa, 0x9, 0xd, 0x9, 0xe, 0x9, 0x65, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 
    0x3, 0x9, 0x6, 0x9, 0x6c, 0xa, 0x9, 0xd, 0x9, 0xe, 0x9, 0x6d, 0x3, 0x9, 
    0x3, 0x9, 0x5, 0x9, 0x72, 0xa, 0x9, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 
    0xa, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 
    0xb, 0x3, 0xb, 0x3, 0xb, 0x5, 0xb, 0x81, 0xa, 0xb, 0x3, 0xb, 0x3, 0xb, 
    0x3, 0xb, 0x3, 0xb, 0x7, 0xb, 0x87, 0xa, 0xb, 0xc, 0xb, 0xe, 0xb, 0x8a, 
    0xb, 0xb, 0x3, 0xc, 0x3, 0xc, 0x3, 0xd, 0x3, 0xd, 0x3, 0xe, 0x3, 0xe, 
    0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x5, 0xe, 
    0x98, 0xa, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 
    0xe, 0x7, 0xe, 0xa0, 0xa, 0xe, 0xc, 0xe, 0xe, 0xe, 0xa3, 0xb, 0xe, 0x3, 
    0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0x10, 0x3, 0x10, 0x5, 0x10, 0xaa, 0xa, 
    0x10, 0x3, 0x10, 0x2, 0x4, 0x14, 0x1a, 0x11, 0x2, 0x4, 0x6, 0x8, 0xa, 
    0xc, 0xe, 0x10, 0x12, 0x14, 0x16, 0x18, 0x1a, 0x1c, 0x1e, 0x2, 0x4, 
    0x3, 0x2, 0x10, 0x13, 0x3, 0x2, 0x14, 0x18, 0x2, 0xb3, 0x2, 0x21, 0x3, 
    0x2, 0x2, 0x2, 0x4, 0x2c, 0x3, 0x2, 0x2, 0x2, 0x6, 0x34, 0x3, 0x2, 0x2, 
    0x2, 0x8, 0x36, 0x3, 0x2, 0x2, 0x2, 0xa, 0x39, 0x3, 0x2, 0x2, 0x2, 0xc, 
    0x3c, 0x3, 0x2, 0x2, 0x2, 0xe, 0x46, 0x3, 0x2, 0x2, 0x2, 0x10, 0x71, 
    0x3, 0x2, 0x2, 0x2, 0x12, 0x73, 0x3, 0x2, 0x2, 0x2, 0x14, 0x80, 0x3, 
    0x2, 0x2, 0x2, 0x16, 0x8b, 0x3, 0x2, 0x2, 0x2, 0x18, 0x8d, 0x3, 0x2, 
    0x2, 0x2, 0x1a, 0x97, 0x3, 0x2, 0x2, 0x2, 0x1c, 0xa4, 0x3, 0x2, 0x2, 
    0x2, 0x1e, 0xa9, 0x3, 0x2, 0x2, 0x2, 0x20, 0x22, 0x5, 0x4, 0x3, 0x2, 
    0x21, 0x20, 0x3, 0x2, 0x2, 0x2, 0x22, 0x23, 0x3, 0x2, 0x2, 0x2, 0x23, 
    0x21, 0x3, 0x2, 0x2, 0x2, 0x23, 0x24, 0x3, 0x2, 0x2, 0x2, 0x24, 0x3, 
    0x3, 0x2, 0x2, 0x2, 0x25, 0x2d, 0x5, 0x6, 0x4, 0x2, 0x26, 0x2d, 0x5, 
    0x8, 0x5, 0x2, 0x27, 0x2d, 0x5, 0xa, 0x6, 0x2, 0x28, 0x2d, 0x5, 0xc, 
    0x7, 0x2, 0x29, 0x2d, 0x5, 0x10, 0x9, 0x2, 0x2a, 0x2d, 0x5, 0x1a, 0xe, 
    0x2, 0x2b, 0x2d, 0x5, 0x1c, 0xf, 0x2, 0x2c, 0x25, 0x3, 0x2, 0x2, 0x2, 
    0x2c, 0x26, 0x3, 0x2, 0x2, 0x2, 0x2c, 0x27, 0x3, 0x2, 0x2, 0x2, 0x2c, 
    0x28, 0x3, 0x2, 0x2, 0x2, 0x2c, 0x29, 0x3, 0x2, 0x2, 0x2, 0x2c, 0x2a, 
    0x3, 0x2, 0x2, 0x2, 0x2c, 0x2b, 0x3, 0x2, 0x2, 0x2, 0x2d, 0x5, 0x3, 
    0x2, 0x2, 0x2, 0x2e, 0x2f, 0x7, 0x19, 0x2, 0x2, 0x2f, 0x30, 0x7, 0x3, 
    0x2, 0x2, 0x30, 0x35, 0x5, 0x14, 0xb, 0x2, 0x31, 0x32, 0x7, 0x19, 0x2, 
    0x2, 0x32, 0x33, 0x7, 0x3, 0x2, 0x2, 0x33, 0x35, 0x5, 0x1a, 0xe, 0x2, 
    0x34, 0x2e, 0x3, 0x2, 0x2, 0x2, 0x34, 0x31, 0x3, 0x2, 0x2, 0x2, 0x35, 
    0x7, 0x3, 0x2, 0x2, 0x2, 0x36, 0x37, 0x7, 0x4, 0x2, 0x2, 0x37, 0x38, 
    0x5, 0x14, 0xb, 0x2, 0x38, 0x9, 0x3, 0x2, 0x2, 0x2, 0x39, 0x3a, 0x7, 
    0x5, 0x2, 0x2, 0x3a, 0x3b, 0x7, 0x19, 0x2, 0x2, 0x3b, 0xb, 0x3, 0x2, 
    0x2, 0x2, 0x3c, 0x3d, 0x7, 0x6, 0x2, 0x2, 0x3d, 0x3e, 0x7, 0x7, 0x2, 
    0x2, 0x3e, 0x40, 0x5, 0x12, 0xa, 0x2, 0x3f, 0x41, 0x5, 0x4, 0x3, 0x2, 
    0x40, 0x3f, 0x3, 0x2, 0x2, 0x2, 0x41, 0x42, 0x3, 0x2, 0x2, 0x2, 0x42, 
    0x40, 0x3, 0x2, 0x2, 0x2, 0x42, 0x43, 0x3, 0x2, 0x2, 0x2, 0x43, 0x44, 
    0x3, 0x2, 0x2, 0x2, 0x44, 0x45, 0x7, 0x8, 0x2, 0x2, 0x45, 0xd, 0x3, 
    0x2, 0x2, 0x2, 0x46, 0x47, 0x7, 0x6, 0x2, 0x2, 0x47, 0x48, 0x7, 0x19, 
    0x2, 0x2, 0x48, 0x49, 0x7, 0x3, 0x2, 0x2, 0x49, 0x4a, 0x5, 0x14, 0xb, 
    0x2, 0x4a, 0x4b, 0x7, 0x9, 0x2, 0x2, 0x4b, 0x4d, 0x5, 0x14, 0xb, 0x2, 
    0x4c, 0x4e, 0x5, 0x4, 0x3, 0x2, 0x4d, 0x4c, 0x3, 0x2, 0x2, 0x2, 0x4e, 
    0x4f, 0x3, 0x2, 0x2, 0x2, 0x4f, 0x4d, 0x3, 0x2, 0x2, 0x2, 0x4f, 0x50, 
    0x3, 0x2, 0x2, 0x2, 0x50, 0x51, 0x3, 0x2, 0x2, 0x2, 0x51, 0x52, 0x7, 
    0x8, 0x2, 0x2, 0x52, 0xf, 0x3, 0x2, 0x2, 0x2, 0x53, 0x54, 0x7, 0xa, 
    0x2, 0x2, 0x54, 0x55, 0x5, 0x1e, 0x10, 0x2, 0x55, 0x56, 0x7, 0xb, 0x2, 
    0x2, 0x56, 0x58, 0x7, 0x6, 0x2, 0x2, 0x57, 0x59, 0x5, 0x4, 0x3, 0x2, 
    0x58, 0x57, 0x3, 0x2, 0x2, 0x2, 0x59, 0x5a, 0x3, 0x2, 0x2, 0x2, 0x5a, 
    0x58, 0x3, 0x2, 0x2, 0x2, 0x5a, 0x5b, 0x3, 0x2, 0x2, 0x2, 0x5b, 0x5c, 
    0x3, 0x2, 0x2, 0x2, 0x5c, 0x5d, 0x7, 0x8, 0x2, 0x2, 0x5d, 0x72, 0x3, 
    0x2, 0x2, 0x2, 0x5e, 0x5f, 0x7, 0xa, 0x2, 0x2, 0x5f, 0x60, 0x5, 0x1e, 
    0x10, 0x2, 0x60, 0x61, 0x7, 0xb, 0x2, 0x2, 0x61, 0x63, 0x7, 0x6, 0x2, 
    0x2, 0x62, 0x64, 0x5, 0x4, 0x3, 0x2, 0x63, 0x62, 0x3, 0x2, 0x2, 0x2, 
    0x64, 0x65, 0x3, 0x2, 0x2, 0x2, 0x65, 0x63, 0x3, 0x2, 0x2, 0x2, 0x65, 
    0x66, 0x3, 0x2, 0x2, 0x2, 0x66, 0x67, 0x3, 0x2, 0x2, 0x2, 0x67, 0x68, 
    0x7, 0x8, 0x2, 0x2, 0x68, 0x69, 0x7, 0xc, 0x2, 0x2, 0x69, 0x6b, 0x7, 
    0x6, 0x2, 0x2, 0x6a, 0x6c, 0x5, 0x4, 0x3, 0x2, 0x6b, 0x6a, 0x3, 0x2, 
    0x2, 0x2, 0x6c, 0x6d, 0x3, 0x2, 0x2, 0x2, 0x6d, 0x6b, 0x3, 0x2, 0x2, 
    0x2, 0x6d, 0x6e, 0x3, 0x2, 0x2, 0x2, 0x6e, 0x6f, 0x3, 0x2, 0x2, 0x2, 
    0x6f, 0x70, 0x7, 0x8, 0x2, 0x2, 0x70, 0x72, 0x3, 0x2, 0x2, 0x2, 0x71, 
    0x53, 0x3, 0x2, 0x2, 0x2, 0x71, 0x5e, 0x3, 0x2, 0x2, 0x2, 0x72, 0x11, 
    0x3, 0x2, 0x2, 0x2, 0x73, 0x74, 0x5, 0x14, 0xb, 0x2, 0x74, 0x75, 0x5, 
    0x18, 0xd, 0x2, 0x75, 0x76, 0x5, 0x14, 0xb, 0x2, 0x76, 0x13, 0x3, 0x2, 
    0x2, 0x2, 0x77, 0x78, 0x8, 0xb, 0x1, 0x2, 0x78, 0x81, 0x7, 0x19, 0x2, 
    0x2, 0x79, 0x81, 0x7, 0x1a, 0x2, 0x2, 0x7a, 0x7b, 0x7, 0xe, 0x2, 0x2, 
    0x7b, 0x7c, 0x5, 0x14, 0xb, 0x2, 0x7c, 0x7d, 0x7, 0xf, 0x2, 0x2, 0x7d, 
    0x81, 0x3, 0x2, 0x2, 0x2, 0x7e, 0x7f, 0x7, 0x10, 0x2, 0x2, 0x7f, 0x81, 
    0x5, 0x14, 0xb, 0x3, 0x80, 0x77, 0x3, 0x2, 0x2, 0x2, 0x80, 0x79, 0x3, 
    0x2, 0x2, 0x2, 0x80, 0x7a, 0x3, 0x2, 0x2, 0x2, 0x80, 0x7e, 0x3, 0x2, 
    0x2, 0x2, 0x81, 0x88, 0x3, 0x2, 0x2, 0x2, 0x82, 0x83, 0xc, 0x4, 0x2, 
    0x2, 0x83, 0x84, 0x5, 0x16, 0xc, 0x2, 0x84, 0x85, 0x5, 0x14, 0xb, 0x5, 
    0x85, 0x87, 0x3, 0x2, 0x2, 0x2, 0x86, 0x82, 0x3, 0x2, 0x2, 0x2, 0x87, 
    0x8a, 0x3, 0x2, 0x2, 0x2, 0x88, 0x86, 0x3, 0x2, 0x2, 0x2, 0x88, 0x89, 
    0x3, 0x2, 0x2, 0x2, 0x89, 0x15, 0x3, 0x2, 0x2, 0x2, 0x8a, 0x88, 0x3, 
    0x2, 0x2, 0x2, 0x8b, 0x8c, 0x9, 0x2, 0x2, 0x2, 0x8c, 0x17, 0x3, 0x2, 
    0x2, 0x2, 0x8d, 0x8e, 0x9, 0x3, 0x2, 0x2, 0x8e, 0x19, 0x3, 0x2, 0x2, 
    0x2, 0x8f, 0x90, 0x8, 0xe, 0x1, 0x2, 0x90, 0x91, 0x7, 0x1f, 0x2, 0x2, 
    0x91, 0x98, 0x5, 0x1a, 0xe, 0x5, 0x92, 0x93, 0x7, 0xe, 0x2, 0x2, 0x93, 
    0x94, 0x5, 0x1a, 0xe, 0x2, 0x94, 0x95, 0x7, 0xf, 0x2, 0x2, 0x95, 0x98, 
    0x3, 0x2, 0x2, 0x2, 0x96, 0x98, 0x5, 0x12, 0xa, 0x2, 0x97, 0x8f, 0x3, 
    0x2, 0x2, 0x2, 0x97, 0x92, 0x3, 0x2, 0x2, 0x2, 0x97, 0x96, 0x3, 0x2, 
    0x2, 0x2, 0x98, 0xa1, 0x3, 0x2, 0x2, 0x2, 0x99, 0x9a, 0xc, 0x7, 0x2, 
    0x2, 0x9a, 0x9b, 0x7, 0x1d, 0x2, 0x2, 0x9b, 0xa0, 0x5, 0x1a, 0xe, 0x8, 
    0x9c, 0x9d, 0xc, 0x6, 0x2, 0x2, 0x9d, 0x9e, 0x7, 0x1e, 0x2, 0x2, 0x9e, 
    0xa0, 0x5, 0x1a, 0xe, 0x7, 0x9f, 0x99, 0x3, 0x2, 0x2, 0x2, 0x9f, 0x9c, 
    0x3, 0x2, 0x2, 0x2, 0xa0, 0xa3, 0x3, 0x2, 0x2, 0x2, 0xa1, 0x9f, 0x3, 
    0x2, 0x2, 0x2, 0xa1, 0xa2, 0x3, 0x2, 0x2, 0x2, 0xa2, 0x1b, 0x3, 0x2, 
    0x2, 0x2, 0xa3, 0xa1, 0x3, 0x2, 0x2, 0x2, 0xa4, 0xa5, 0x7, 0xd, 0x2, 
    0x2, 0xa5, 0xa6, 0x5, 0x14, 0xb, 0x2, 0xa6, 0x1d, 0x3, 0x2, 0x2, 0x2, 
    0xa7, 0xaa, 0x5, 0x12, 0xa, 0x2, 0xa8, 0xaa, 0x5, 0x14, 0xb, 0x2, 0xa9, 
    0xa7, 0x3, 0x2, 0x2, 0x2, 0xa9, 0xa8, 0x3, 0x2, 0x2, 0x2, 0xaa, 0x1f, 
    0x3, 0x2, 0x2, 0x2, 0x11, 0x23, 0x2c, 0x34, 0x42, 0x4f, 0x5a, 0x65, 
    0x6d, 0x71, 0x80, 0x88, 0x97, 0x9f, 0xa1, 0xa9, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

tinyrexxParser::Initializer tinyrexxParser::_init;
