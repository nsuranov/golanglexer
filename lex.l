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
"do"                    return Do;
"while"                 return While;
"for"                   return For;

([-+]?[1-9][0-9]*|0|[-+]?0)(_?[0-9]+)*      return DecInt;

[+-]?[1-9]+             return Int;
[_a-zA-Z][_a-zA-Z0-9]*  return Variable;

[-+*/%=&|!><(){}"'`^:;.,~]      return yytext[0]; 

[ \t\n] ;
. error(*yytext);
%%


int yywrap (void) {return 1;}