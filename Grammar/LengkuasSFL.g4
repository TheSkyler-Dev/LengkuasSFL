grammar ThylSFL;

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

//Parser rules