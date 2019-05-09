grammar tinyrexx;

program   : statement+;

statement : assign | print | input | w_loop | i_t_e | b_expr | terminate;

assign    : ID '=' a_expr | ID '=' b_op;
print     : 'say' a_expr ;
input     : 'pull' ID ;
w_loop    : 'do' 'while' test statement+ 'end' ;
test      : a_expr r_op a_expr;
i_t_e     : if_cond do_block | if_cond do_block else_cond do_block;
if_cond   : 'if' b_op 'then';
do_block  : 'do' statement+ 'end';
else_cond : 'else';
a_expr    : ID | NUMBER | '(' a_expr ')' | a_expr a_op a_expr | MINUS a_expr ;
b_expr    : T | F | '(' b_expr ')' | b_expr b_op b_expr | NOT b_expr | test;
a_op      : MINUS | PLUS | MUL | DIV ;
r_op      : EQUAL | LT | LEQ | GT | GEQ | DISEQUAL;
b_op      : AND|OR;
terminate : 'exit' a_expr;


T         : 'true';
F         : 'false';
AND       : '&' ;
OR        : '|' ;
NOT       : '\\' ;
MINUS     : '-' ;
PLUS      : '+' ;
MUL       : '*' ;
DIV       : '/' ;
EQUAL     : '==' ;
DISEQUAL  : '!=' ;
LT        : '<' ;
LEQ       : '<=' ;
GT        : '>' ;
GEQ       : '>=' ;
ID        : [a-z]+ ;
NUMBER    : [0-9]+ ;
WS        : [ \n\t]+ -> skip;
ErrorChar : . ;
