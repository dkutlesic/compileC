%option noyywrap
%option noinput
%option nounput

%{
    using namespace std;
    #include<iostream>
    #include<cstdlib>
    #include<string>

    #include "parser.tab.hpp"
%}

NUM "0"|[1-9][0-9]*
ID [a-zA-Z][a-zA-Z0-9_]*

%%

"if" {
    return IF_TOKEN;
}

"else" {
    return ELSE_TOKEN;
}

"while" {
    return WHILE_TOKEN;
}

"++" {
    return INC_TOKEN;
}

"--" {
    return DEC_TOKEN;
}

"==" {
    return EQUAL_TOKEN;
}

{NUM} {
    yylval.num = atoi(yytext);
    return NUM_TOKEN;
}

{ID} {
    yylval.id = new string(yytext);
    return ID_TOKEN;
}

[{}()] {
    return *yytext;
}

[ \t\n] { }

. {
    cerr<<"Uknown character: "<<*yytext<<endl;
    exit(EXIT_FAILURE);
}

%%