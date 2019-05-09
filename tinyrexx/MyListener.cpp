// Generated from tinyrexx.g4 by ANTLR 4.7
#include <iostream>
#include "MyListener.h"

using namespace std;

MyListener::MyListener(const std::set<std::string> &ids) {
  vars = ids;
}


void MyListener::enterProgram(tinyrexxParser::ProgramContext *ctx) {
    cout << "#include <iostream>" << endl << endl
         << "using namespace std;" << endl << endl
         << "int main() {" << endl;
    indent += 4;
    // Dichiara le variabili
    for (auto name : vars) {
        cout << string(indent, ' ') << "int " << name << " = 0;" << endl;
    }

}

void MyListener::exitProgram(tinyrexxParser::ProgramContext *ctx) {
    cout << "}" << endl;
}

void MyListener::enterAssign(tinyrexxParser::AssignContext * ctx) {
    string name = ctx->ID()->getText();
    cout << string(indent, ' ') << name << " = " ;
}

void MyListener::exitAssign(tinyrexxParser::AssignContext * ctx) {
    cout << ";" << endl;
}

void MyListener::enterPrint(tinyrexxParser::PrintContext * ctx) {
    cout << string(indent, ' ') << "cout << " ;
}

void MyListener::exitPrint(tinyrexxParser::PrintContext * ctx) {
    cout << " << endl;" << endl;
}


void MyListener::exitInput(tinyrexxParser::InputContext * ctx) {
    string name = ctx->ID()->getText();
    cout << string(indent, ' ') << "cin >> " << name << ";" << endl;
}


void MyListener::enterA_expr(tinyrexxParser::A_exprContext * ctx) {
    // controllo in quale caso sono
    if(ctx->ID() != NULL) {
        // caso ID semplice
        cout << ctx->ID()->getText();
    } else if(ctx->NUMBER() != NULL) {
        // caso valore numerico semplice
        cout << ctx->NUMBER()->getText();
    } else if(ctx->MINUS() !=  NULL) {
        // caso operatore - unario
        cout << "-" ;
    } else if(ctx->a_op() != NULL) {
        // caso operatore binario: gestito da enterA_op
    } else {
        // caso parentesi
        cout << "(" ;
    }
}

void MyListener::exitA_expr(tinyrexxParser::A_exprContext * ctx) {
    // controllo in quale caso sono
    if(ctx->ID() != NULL) {
        // caso ID semplice
    } else if(ctx->NUMBER() != NULL) {
        // caso valore numerico semplice
    } else if(ctx->MINUS() !=  NULL) {
        // caso operatore - unario
    } else if(ctx->a_op() != NULL) {
        // caso operatore binario: gestito da exitA_op
    } else {
        // caso parentesi
        cout << ")" ;
    }
}

void MyListener::exitA_op(tinyrexxParser::A_opContext * ctx) {
    // controllo operatore aritmetico
    if(ctx->PLUS() != NULL) {
        cout << " + ";
    } else if(ctx->MINUS() != NULL) {
        cout << " - ";
    } else if(ctx->MUL() != NULL) {
        cout << " * ";
    } else if(ctx->DIV() != NULL) {
        cout << " / ";
    }
}

void MyListener::exitR_op(tinyrexxParser::R_opContext * ctx) {
    // controllo operatore aritmetico
    if(ctx->EQUAL() != NULL) {
        cout << " == ";
    } else if(ctx->LT() != NULL) {
        cout << " < ";
    } else if(ctx->LEQ() != NULL) {
        cout << " <= ";
    } else if(ctx->GT() != NULL) {
        cout << " > ";
    } else if(ctx->GEQ() != NULL) {
        cout << " >= ";
    }
    else if(ctx->DISEQUAL() != NULL) {
      cout << "!= ";
    }
}

//implementazione enterTerminate
void MyListener::enterTerminate(tinyrexxParser::TerminateContext * ctx) {
  cout << string(indent, ' ') << "return ";
}

//implementazione exitTerminate
void MyListener::exitTerminate(tinyrexxParser::TerminateContext * ctx) {
  cout << " ;" << endl;
}


void MyListener::enterW_loop(tinyrexxParser::W_loopContext * ctx){
    cout << string(indent, ' ') << "while";
    indent += 4;
}


void MyListener::exitW_loop(tinyrexxParser::W_loopContext * ctx){
    indent -= 4;
    cout << string(indent, ' ') << "}" << endl;
}


void MyListener::enterTest(tinyrexxParser::TestContext * ctx){
    cout << "(";
}

void MyListener::exitTest(tinyrexxParser::TestContext * ctx){
    cout << ") {" << endl;
}

void MyListener::enterF_loop(tinyrexxParser::F_loopContext * ctx){
    cout << string(indent, ' ') << "for ";
}

void MyListener::exitF_loop(tinyrexxParser::F_loopContext * ctx){
    cout << "}" << endl;
    indent -= 4;
}

void MyListener::enterF_cond(tinyrexxParser::F_condContext * ctx) {
    cout << "(";
    if(ctx->ID() != NULL) {
        //gestito da assign
    }
    else if(ctx->b_op() != NULL) {
      //gestito da b_op
    }
}

void MyListener::exitF_cond(tinyrexxParser::F_condContext * ctx) {
    cout << ") {" << endl;
}

//Da rivedere nella struttura della grammatica, qualcosa non funziona

void MyListener::enterI_t_e(tinyrexxParser::I_t_eContext * ctx){
    cout << string(indent, ' ') << "if ";
    indent += 4;
}

void MyListener::exitI_t_e(tinyrexxParser::I_t_eContext * ctx){
    cout << endl << "}";
    indent -= 4;
}

void MyListener::enterElse_bl(tinyrexxParser::Else_blContext * ctx){
  indent -= 4;
  cout << string(indent, ' ') << "}" << endl << "else {" << endl;
  indent += 4;
}

void MyListener::exitElse_bl(tinyrexxParser::Else_blContext * ctx){
  //indent -= 4;
  //non fa nulla apparte sistemare l'output
}

void MyListener::enterThen_bl(tinyrexxParser::Then_blContext * ctx){
  cout << ") {" << endl;
  indent += 4;
}

void MyListener::exitThen_bl(tinyrexxParser::Then_blContext * ctx){
  //non fa nulla, il blocco viene chiuso da i_t_e
}

//Anche l'operatore booleano non funziona, và corretto

void MyListener::enterB_op(tinyrexxParser::B_opContext * ctx){
  // controllo in quale caso sono
  if(ctx->AND() != NULL) {
      cout << "&&";
  } else if(ctx->OR() != NULL) {
      cout << "||";
  } else if(ctx->NOT() !=  NULL) {
      cout << "!";
  } else {
      cout << "(" ;
  }
}

void MyListener::exitB_op(tinyrexxParser::B_opContext * ctx){
  if(ctx->AND() != NULL) {

  } else if(ctx->OR() != NULL) {

  } else if(ctx->NOT() != NULL) {

  }
}
