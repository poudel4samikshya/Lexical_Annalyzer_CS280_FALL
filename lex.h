/*
 * lex.h
 *
 * CS280
 * Fall 2021
*/

#ifndef LEX_H_
#define LEX_H_

#include <string>
#include <iostream>
#include <map>
using namespace std;


//Definition of all the possible token types
enum Token {
		// keywords
	PROGRAM, WRITE, INT, END, IF, FLOAT, STRING,

		// an identifier
	REPEAT, BEGIN, IDENT,

		// an integer, real, and string constant
	ICONST, RCONST, SCONST, 

		// the operators, parens, semicolon
	PLUS, MINUS, MULT, DIV, REM, ASSOP, LPAREN, RPAREN, COMMA, 
	EQUAL, GTHAN, SEMICOL,
		// any error returns this token
	ERR,

		// when completed (EOF), return this token
	DONE
};

static map<Token,string> tokenPrint = {
		{PROGRAM, "PROGRAM"},
		{WRITE, "WRITE"},
		{INT, "INT"},
		{ END, "END" },
		{ IF, "IF" },
		{FLOAT, "FLOAT"},
		{STRING, "STRING"},
		{ REPEAT, "REPEAT" },
		
		
		{BEGIN, "BEGIN"},

		{ IDENT, "IDENT" },

		{ ICONST, "ICONST" },
		{ RCONST, "RCONST" },
		{ SCONST, "SCONST" },
		
		{ PLUS, "PLUS" },
		{ MINUS, "MINUS" },
		{ MULT, "MULT" },
		{ DIV, "DIV" },
		{REM, "REM"},
		{ ASSOP, "ASSOP" },
		{ LPAREN, "LPAREN" },
		{ RPAREN, "RPAREN" },
            
		{ COMMA, "COMMA" },
		{ EQUAL, "EQUAL" },
		{ GTHAN, "GTHAN" },
		
		{ SEMICOL, "SEMICOL" },
		
		{ ERR, "ERR" },

		{ DONE, "DONE" },
};

//Keywords mapping
static map<string,Token> kwmap = {
		{"PROGRAM", PROGRAM},
		{"WRITE", WRITE},
		{ "INT", INT},
		{ "FLOAT", FLOAT},
		{ "STRING", STRING},
		{ "REPEAT", REPEAT },
		{ "BEGIN", BEGIN },
		{"IF", IF},
		{ "END", END },
};

//Class definition of LexItem
class LexItem {
	Token	token;
	string	lexeme;
	int	lnum;

public:
    // constructors
	LexItem() {
		token = ERR;
		lnum = -1;
	}
	LexItem(Token token, string lexeme, int line) {
		this->token = token;
		this->lexeme = lexeme;
		this->lnum = line;
	}
// methods
	bool operator==(const Token token) const { return this->token == token; }
	bool operator!=(const Token token) const { return this->token != token; }

	Token	GetToken() const { return token; }
	string	GetLexeme() const { return lexeme; }
	int	GetLinenum() const { return lnum; }
};



extern ostream& operator<<(ostream& out, const LexItem& tok);
extern LexItem id_or_kw(const string& lexeme, int linenum);
extern LexItem getNextToken(istream& in, int& linenum);


#endif /* LEX_H_ */
