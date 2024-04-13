%{
    #include <stdio.h>
    #include "yacc.tab.h"
    void yyerror(char *str);
    void error(char s){
		printf("Error in line: %d\n", yylineno);
		exit(1);
	}	

%}

%option yylineno

%%

"if"                    return If;
"else"                  return Else;
"while"                 return While;
"return"                return Return;
"print"                 return Print;
"&&"                    return And;
"||"                    return Or;
"!="                    return NEquil;
"=="                    return Equil;
">"                     return More;
"<"                     return Less;
">="                    return MoreEquil;
"<="                    return LessEquil;
[+-]?[0-9]+             return Int;
[_a-zA-Z][_a-zA-Z0-9]*  return Variable;
[-+*/%=&|!><(){};]      return yytext[0]; 
[ \t\n]                 ;
.                       error(*yytext);    

%%


int yywrap (void) {return 1;}
