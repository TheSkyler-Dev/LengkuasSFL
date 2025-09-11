grammar LengkuasSFL;

//Lexer rules
IDENTIFIER: [a-zA-Z_][a-zA-Z0-9_]*;
NUMBER: [0-9]+ ('.' [0-9+])?;
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
         | asyncBlock;

variableDeclaration: dataType IDENTIFIER ASSIGN expression;

dataType: 'str' | 'i32' | 'i64' | 'f32' | 'f64' | 'bool' | 'sstream';

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

arithmeticOperation: expression (arithmeticOperator expression)+;

templateLiteral: STRING ('$' IDENTIFIER | '${' expression '}$')*;

functionDeclaration: 'fun' IDENTIFIER LPAREN (parameter (COMMA parameter)*)? RPAREN COLON statement+ 'endfun';

parameter: dataType IDENTIFIER;

controlFlow: ifStatement | switchStatement;

ifStatement: 'if' LPAREN expression RPAREN COLON statement+ ('elif' LPAREN expression RPAREN COLON statement+)* ('else' COLON statement+ 'endif')+;

switchStatement: 'sw' LPAREN expression RPAREN COLON 'endsw';

caseBloack: 'case' expression COLON LBRACE statement+ RBRACE;

defaultBlock: 'default' COLON LBRACE statement+ RBRACE;

loop: whileLoop |doWhileLoop | forLoop;

whileLoop: 'while' LPAREN expression RPAREN COLON statement+ 'endwhile';

doWhileLoop: 'do' COLON statement+ 'while' LPAREN expression RPAREN;

forLoop: 'for' LPAREN variableDeclaration expression SEMICOLON expression RPAREN COLON statement+ 'endfor';

ioOperation: 'msgOut' LPAREN expression RPAREN
           | 'msgIn' LPAREN STRING RPAREN;

pointerReference: '^' IDENTIFIER;

asyncBlock: 'desync' LPAREN (parameter (COMMA parameter)*)? RPAREN COLON statement+ 'resync';

errorHandling: 'try' COLON statement+ 'catch' COLON throwStatement 'endtry';

throwStatement: 'throw' LPAREN 'errMsg' LPAREN STRING COMMA 'prefix' ARROW 'ecode' LPAREN RPAREN RPAREN RPAREN;

//rules for advanced syntax
incrementDecrement: IDENTIFIER (INCREMENT | DECREMENT);