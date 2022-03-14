#include<iostream>
#include<fstream>
#include<map>
#include<string>
#include<sstream>
#include<vector>
#include <algorithm>
#include"lex.h"
using namespace  std;

// functions that are implemented
//fix the linne number

static map<string,Token>::iterator it;
LexItem id_or_kw(const string& lexeme, int linenum) {
    for (it = kwmap.begin(); it != kwmap.end(); it++) {
        if (it->first == lexeme)
            return (LexItem(it->second, lexeme, linenum));



    }
    return LexItem( (LexItem(IDENT, lexeme, linenum)));
}

ostream& operator<<(ostream& out, const LexItem& tok){
    Token t = tok.GetToken();
    string lexeme = tok.GetLexeme();


    if (t == IDENT || t == ICONST || t == RCONST || t == SCONST || t == ERR){
        out<<tokenPrint[t]<<"("<<lexeme<<")";
    }
    else
        cout<<tokenPrint[t];


    return out;
}

int main(int argc, char* argv[]) {
   
    ifstream input_file;
    input_file.open(argv[1]);

    // checking if there is no any file provided
    if (argc == 1) {

        cerr << "NO SPECIFIED INPUT FILE NAME." << endl;
        exit(1);

    }


    // variables for flags:
    bool vflag = false;
    bool intflag = false;
    bool fflag = false;
    bool strflag = false;
    bool idflag = false;

// Iterating through the flags

    for (int i = 2; i < argc; i++) {

        string arg = argv[i];


        if (argv[i][0] != '-') {

            cout << "ONLY ONE FILE NAME ALLOWED" << endl;
            exit(1);
        }

        else  {
            if (arg == "-v")
                vflag = true;
            else if (arg == "-iconst")
                intflag = true;

            else if (arg == "-fconst")
                fflag = true;

            else if (arg == "-strconst")
                strflag = true;

            else if (arg == "-ident")
                idflag = true;

            else {
                cout << "UNRECOGNIZED FLAG " << argv[i] << endl;
                exit(1);
            }

        }// end of the for loop

    }





    // map to store the tokens ane lexemes
    vector<LexItem> toks;
    vector<int>integers;
    vector<double>reals;
    vector<string>strng;
    vector<string> identifiers;
    vector<string>non_duplicate_identifiers;
    // map<Token, string>::iterator it;

    LexItem tok;
    int num_lines = 1;
    int num_tokens = 0;



    // The object has the value 12345 and stream
    // it to the integer x

    if(input_file){
        //we have DOne there cause we donot want to counnt DONE as token

        while ((tok = getNextToken(input_file, num_lines)) != DONE && tok != ERR) {

            // we are counting tokens - not DONE token  and lines here

            // counting tokens
            num_tokens++;


            // this line going to update line_number
            num_lines = tok.GetLinenum();



            //INSERTING THE VALUE ON VECTOR
            toks.push_back(tok);


        }

    }

    else{


        cerr << "CANNOT OPEN the File " <<argv[1]<<endl;
        exit(1);



    }

    //handeling error



    //Handling Done
    if (tok == DONE || tok == ERR) {

        if(tok == ERR){

            if(strflag){
                strflag = false;
                cout << "Error in line " << tok.GetLinenum() << " (\"" << tok.GetLexeme() << ")" << endl;
            }
            else if (vflag){
                vflag = false;
                for(size_t i = 0; i<toks.size(); i++){
                    cout<<toks[i]<<endl;
                }

                cout << "Error in line " << tok.GetLinenum() << " (" << tok.GetLexeme() << ")" << endl;
            }
            else{
                fflag = false;
                idflag = false;
                intflag = false;
                cout << "Error in line " << tok.GetLinenum() << " (" << tok.GetLexeme() << ")" << endl;

            }



        }


        if (vflag) {

            for(size_t i = 0; i<toks.size(); i++){
                cout<<toks[i]<<endl;
            }
        }


        if(tok == DONE){
            if (num_lines == 1) {

                cout << "Lines: " << num_lines -1 << endl;
            }

            else {

                cout << "Lines: " << num_lines-1 << endl;
                cout << "Tokens: " << num_tokens << endl;
            }
        }




        if (strflag) {
            cout << "STRINGS:" << endl;

            for (size_t i = 0; i<toks.size(); i++) {
                Token t = toks[i].GetToken();
                string lex = toks[i].GetLexeme();
                if (t == SCONST)
                    strng.push_back(lex);
            }
            sort(strng.begin(),strng.end());
            for(auto elem : strng) {
                cout<<"\""<<elem<<"\""<<endl;
            }
        }




        if (intflag) {

            cout << "INTEGERS:" << endl;

            for (size_t i = 0; i<toks.size(); i++) {

                Token t = toks[i].GetToken();
                string lex = toks[i].GetLexeme();
                stringstream ss(lex);
                int int_value = 0;
                ss>>int_value;

                if (t == ICONST){


                    integers.push_back(int_value);

                }

            }
            sort(integers.begin(),integers.end());
            int previous_elem = integers[0];
            cout<<integers[0]<<endl;
            for(int i = 1; i<integers.size(); i++) {
                if(integers[i] == previous_elem){

                    continue;
                }
                cout<<integers[i]<<endl;
                previous_elem = integers[i];
            }
        }




        if (fflag) {
            cout << "REALS:" << endl;
            for (size_t i = 0; i<toks.size(); i++ ){
                Token t = toks[i].GetToken();
                string lex = toks[i].GetLexeme();
                stringstream ss(lex);
                double real_value = 0;
                ss>>real_value;
                if (t == RCONST)
                    reals.push_back(real_value);

            }
            sort(reals.begin(),reals.end());
            for(auto elem : reals) {
                cout<<elem<<endl;
            }
        }


        if (idflag) {
            cout << "IDENTIFIERS:" << endl;
            for (size_t i = 0; i<toks.size(); i++ ){
                Token t = toks[i].GetToken();
                string lex = toks[i].GetLexeme();

                if (t == IDENT)
                    identifiers.push_back(lex);
            }

            sort(identifiers.begin(),identifiers.end());

            string previous_elem = identifiers[0];
            non_duplicate_identifiers.push_back(identifiers[0]);
            for(int i = 1; i<identifiers.size(); i++) {
                if(identifiers[i] == previous_elem){

                    continue;
                }
                non_duplicate_identifiers.push_back(identifiers[i]);
                previous_elem = identifiers[i];
            }

            for(int i = 0; i<non_duplicate_identifiers.size() -1 ; i++){

                cout<<non_duplicate_identifiers[i]<<", ";
            }



            cout<<identifiers[(identifiers.size() - 1)]<<endl;

        }





    }// end of done condition



}//end of main function






















