PROJECT = kod
CC = g++
CFLAGS = -std=c++14
LEX = flex
YACC = bison
YFLAGS = -v -d

$(PROJECT): parser.o lex.yy.o expression.o
	$(CC) $(CFLAGS) -o $@ $^
lex.yy.o: lex.yy.c
	$(CC) -c -o $@ $<
lex.yy.c: lex.l parser.tab.hpp
	$(LEX) $^
parser.tab.cpp parser.tab.hpp: parser.ypp
	$(YACC) $(YFLAGS) $<
parser.o: parser.tab.cpp parser.tab.hpp
	$(CC) -c -o $@ $<
expression.o: expression.cpp expression.hpp
	$(CC) -c -o $@ $<

.PHONY: clean

clean:
	rm *.o *.output parser.tab.*