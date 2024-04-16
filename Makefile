lng: lex.yy.c yacc.tab.c
	clang lex.yy.c yacc.tab.c -o lng

lex.yy.c: lex.l
	lex lex.l 
 
yacc.tab.c: yacc.y
	bison -d yacc.y

clean:
	rm lng lex.yy.c yacc.tab.c yacc.tab.h