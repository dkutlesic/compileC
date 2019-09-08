%{
    using namespace std;
    #include <iostream>
    #include <string>

    #include "parser.tab.hpp"
%}

NUM "0"|[1-9][0-9]*
ID [a-zA-Z][a-zA-Z0-9_]*

%%

{NUM} {
    yylval.num = atoi(yytext);
    return NUM_TOKEN;
}

{ID} {
    yylaval.id = yytext;
    return ID_TOKEN;
}

"if" {
    return IF_TOKEN;
}

"else" {
    return ELSE_TOKEN;
}

"while" {
    return WHILE_TOKEN;
}

[{}()] {
    return *yytext;
}


%%