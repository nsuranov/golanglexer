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
"package"               return Package;
"import"                return Import;
"func"                  return Func;
"return"                return Return;

"go"                    return Go;
"chan"                  return Chan;
"select"                return Select;
"defer"                 return Defer;

"const"                 return Const;
"var"                   return Var;
"map"                   return Map;
"type"                  return Type;
"struct"                return Struct;
"interface"             return Interface;

"if"                    return If;
"else"                  return Else;
"case"                  return Case;
"switch"                return Switch;
"fallthrough"           return Fallthrough;

"continue"              return Continue;
"break"                 return Break;

"range"                 return Range;
"for"                   return For;

[-+]?0|[-+]?[1-9][0-9]*(_?[0-9]+)* return DecInt;

[_a-zA-Z][_a-zA-Z0-9]*  return Variable;

[-+*/%=&|!><(){}"'`^:;.,~]      return yytext[0]; 

[ \t\n] ;
. error(*yytext);
%%


int yywrap (void) {return 1;}