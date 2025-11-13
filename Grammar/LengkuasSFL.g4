grammar LengkuasSFL;

//Lexer rules
//data types
STR: 'str';
I32: 'i32';
I64: 'i64';
F32: 'f32';
F64: 'f64';
BOOL: 'bool';
SSTREAM: 'sstream';
CONST: 'const';

//control flow
IF: 'if';
ELIF: 'elif';
ELSE: 'else';
ENDIF: 'endif';
SWITCH: 'sw';
CASE: 'case';
DEFAULT: 'default';
ENDSW: 'endsw';

//loops
WHILE: 'while';
ENDWHILE: 'endwhile';
DO: 'do';
ENDDO: 'enddo';
FOR: 'for';
ENDFOR: 'endfor';

//data structures
ARR: 'arr';
DICT: 'dict';

//functions, async, error handling
FUN: 'fun';
ENDFUN: 'endfun';
ASYNC: 'desync';
RESYNC: 'resync';
AWAIT: 'expect';
TRY: 'try';
CATCH: 'catch';
ENDTRY: 'endtry';
THROW: 'throw';

//units
CELSIUS: 'celsius';
FAHRENHEIT: 'fahrenheit';
KELVIN: 'kelvin';

//other syntax
IDENTIFIER: [a-zA-Z_][a-zA-Z0-9_]*;
NUMBER: [0-9]+ ('.' [0-9]+)? | '0x' [0-9a-fA-F]+;
STRING: '"' .*? '"';
BOOLEAN: 'true' | 'false';
NIL: 'nil';
SEMICOLON: ';';
COLON: ':';
COMMA: ',';
DOT: '.';
ARROW: '->';
ASSIGN: '=';
PLUS: '+';
MINUS: '-';
MULT: '*';
DIV: '/';
MOD: '%';
LPAREN: '(';
RPAREN: ')';
LBRACE:'{';
RBRACE: '}';
LBRACKET: '[';
RBRACKET: ']';
INCREMENT: '++';
DECREMENT: '--';
WS: [ \t\r\n]+ -> skip;
COMMENT: '~' ~[\r\n]* -> skip;
MULTILINE_COMMENT: '~~' .*? '~~' -> skip;
AND: '&&';
OR: '||';
NOT: '!';
EQ: '==';
NEQ: '!=';
LT: '<';
GT: '>';
LTE: '<=';
GTE: '>=';
PTR: '^';

//Parser rules
program: (statement)* EOF;

statement: variableDeclaration
         | functionDeclaration
         | controlFlow
         | loop
         | ioOperation
         | arithmeticOperation
         | templateLiteral
         | errorHandling
         | pointerReference
         | asyncBlock
         | incrementDecrement;

variableDeclaration: (CONST)? dataType (ARR | DICT)? IDENTIFIER ASSIGN expression;

dataType: STR | I32 | I64 | F32 | F64 | BOOL | SSTREAM;

expression: primaryExpression (arithmeticOperator primaryExpression)*
          | expression OR expression
          | expression AND expression
          | NOT expression;

primaryExpression: NUMBER
                 | STRING
                 | BOOLEAN
                 | NIL
                 | IDENTIFIER
                 | templateLiteral
                 | LPAREN expression RPAREN;

arithmeticOperator: PLUS | MINUS | MULT | DIV | MOD;

arithmeticOperation: expression (arithmeticOperator expression)*;

templateLiteral: STRING ('$' IDENTIFIER | '${' expression '}$')*;

functionDeclaration: FUN IDENTIFIER LPAREN (parameter (COMMA parameter)*)? RPAREN ARROW dataType COLON statement+ ENDFUN;

parameter: dataType IDENTIFIER;

controlFlow: ifStatement | switchStatement;

ifStatement: IF LPAREN expression RPAREN COLON statement+ (ELIF LPAREN expression RPAREN COLON statement+)* ELSE COLON statement+ ENDIF;

switchStatement: SWITCH LPAREN expression RPAREN COLON (caseBlock)+ (defaultBlock)? ENDSW;

caseBlock: CASE expression COLON LBRACE statement+ RBRACE;

defaultBlock: DEFAULT COLON LBRACE statement+ RBRACE;

loop: whileLoop |doWhileLoop | forLoop;

whileLoop: WHILE LPAREN expression RPAREN COLON statement+ ENDWHILE;

doWhileLoop: DO COLON statement+ ENDDO WHILE LPAREN expression RPAREN;

forLoop: FOR LPAREN variableDeclaration SEMICOLON expression SEMICOLON expression RPAREN COLON statement+ ENDFOR;

functionCall: IDENTIFIER LPAREN (expression (COMMA expression)*)? RPAREN;

pointerReference: PTR IDENTIFIER;

asyncBlock: ASYNC LPAREN (parameter (COMMA parameter)*)? RPAREN COLON statement+ RESYNC;

errorHandling: TRY COLON statement+ CATCH COLON throwStatement ENDTRY;

throwStatement: THROW LPAREN 'errMsg' LPAREN STRING COMMA 'prefix' ARROW 'ecode' LPAREN RPAREN RPAREN RPAREN;

//rules for advanced syntax
incrementDecrement: IDENTIFIER (INCREMENT | DECREMENT);