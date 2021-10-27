#include<iostream>
#include<cctype>
#include"lex.h"
using namespace std;



LexItem getNextToken(istream& in, int& linenum) {


    enum TokState {

        START, INID, INSTRING, ININT, INREAL, INCOMMENT
    } tokState = START;
    string lexeme;
    char character;
    Token token;
    char next_character ;
    char uppercase_char;


    while (in.get(character)) {

        switch (tokState) { // start

            case START:
                if( character == '\n')
                    linenum++;

                if(isspace(character))
                    continue;



                lexeme = character;

                if(character == '#'){
                    tokState = INCOMMENT;
                    break;
                }

                else if(isdigit(character)){
                    tokState = ININT;
                    break;
                }
                else if( isalpha(character)){
                    lexeme[0]=toupper(lexeme[0]);
                    tokState = INID;
                    break;

                }
                else if (character == '"'){
                    lexeme="";
                    tokState = INSTRING;
                    break;
                }
                else if (character == '.'){ //.56

                    tokState = INREAL;
                    break;

                }

                else {
                    if (character == '+')
                        token = PLUS;

                    else if (character == '-')
                        token = MINUS;

                    else if (character == '*')
                        token = MULT;

                    else if (character == '/')
                        token = DIV;

                    else if (character == '%')
                        token = REM;

                    else if (character == '=') {
                        if (in.peek() == '=') {
                            next_character = in.get();
                            lexeme = character + next_character;
                            token = EQUAL;


                        } else {
                            token = ASSOP;

                        }

                    }
                    else if (character == '(')
                        token = LPAREN;

                    else if (character == ')')
                        token = RPAREN;

                    else if (character == '>')
                        token = GTHAN;

                    else if (character == ';')

                        token = SEMICOL;

                    else if (character == ',')
                        token = COMMA;


                    else{
                        token = ERR;
                        return LexItem(token,lexeme,linenum);
                    }
                    return LexItem(token,lexeme,linenum);

                }

            case INCOMMENT:
                if (character == '\n'){
                    in.putback(character);
                    lexeme="";
                    tokState = START;
                }
                break;
            case ININT:

                if(isdigit(character)){
                    lexeme += character;
                }

                else if(character == '.'){
                    in.putback(character);
                    tokState = INREAL;
                    break;

                }
                else{// 55.55
                    in.putback(character);
                    tokState = START;
                    return LexItem(ICONST,lexeme,linenum);

                }
                break;

            case INREAL:


                if (character == '.'  && isdigit(in.peek())){
                    lexeme += character;

                }
                else if (isalpha(character)){


                    lexeme += character;

                    return LexItem(ERR,lexeme,linenum);


                }

                    // .2
                else if(isdigit(character)) {
                    lexeme += character;
                }

                else if (character == '.' && !isdigit(in.peek())){

                    lexeme +=character;

                    return LexItem(ERR,lexeme,linenum);

                }
                else{
                    in.putback(character);
                    tokState = START;
                    return LexItem(RCONST,lexeme,linenum);
                }
                break;

            case INID:
                uppercase_char = toupper(character);
                if(isalpha(character)|| isdigit(character)|| uppercase_char == '_'){
                    lexeme += uppercase_char;
                }



                else {
                    in.putback(character);
                    tokState = START;
                    return id_or_kw(lexeme,linenum);
                }
                break;
            case INSTRING:
                //"samikshya"
                if (character == '\n') {
                    in.putback(character);
                    tokState = START;
                    return LexItem(ERR, lexeme, linenum);
                }
                if(character =='"') {
                    tokState = START;
                    return LexItem(SCONST, lexeme,linenum);
                }
                else{
                    lexeme += character;
                }
                break;


        }


    }// end of the while loop

    if( in.eof() )
        return LexItem(DONE, "", linenum );
    return LexItem(ERR, "Error!", linenum );

}

