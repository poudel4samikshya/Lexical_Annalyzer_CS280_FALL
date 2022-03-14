# Lexical_Annalyzer_CS280_FALL

# Puropse of the project:
  The main purpose of this project is to build the lexical analyzer for the simple language in C++. The follow up projects for this project will be building the parser and Interpreter 
  for the project.

# About the project:

In this programming project, we will be building a lexical analyzer for small programming language and a program to test it. This assignment will be followed by two other assignments to build a parser and interpreter to the same language.
Although, we are not concerned about the syntax definitions of the language in this assignment, we intend to introduce it ahead of Programming Assignment 2 in order to show the language reserved words, constants, and operators. The syntax definitions of a the small programming language are given below using EBNF notations. The details of the meanings (i.e. semantics) of the language constructs will be given later on.

Prog ::= PROGRAM IDENT StmtList END PROGRAM

StmtList ::= Stmt; {Stmt;}

Stmt ::= DeclStmt | ControlStmt

DeclStmt ::= (INT | FLOAT | STRING) VarList

ControlStmt ::= AssigStmt | IfStmt | WriteStmt | RepeatStmt | CompStmt

WriteStmt ::= WRITE ExprList

IfStmt ::= IF (LogicExpr) ControlStmt

RepeatStmt ::= REPEAT (Var = Expr, Expr [,ICONST]) ControlStmt

AssignStmt ::= Var = Expr

CompStmt ::= BEGIN StmtList END

VarList ::= Var {,Var}

ExprList ::= Expr {, Expr}

Expr ::= Term {(+|-) Term}

Term ::= SFactor {( *| / | % ) SFactor}

SFactor ::= (+ | -) Factor | Factor

LogicExpr ::= Expr (== | >) Expr

Var ::= IDENT

Factor = IDENT | ICONST | RCONST | SCONST | (Expr)

 

# Based on the language definitions, the lexical rules of the language and the assigned tokens to terminals are as follows:

The language has identifiers, referred to by ident terminal, which are defined to be a letter followed by zero or more letters or digit. It is defined as:
ident := Letter {(Letter|Digit|_)}

Letter := [a-z A-Z]

Digit := [0-9]

The token for an identifier is IDENT.

 

Integer constants, referred to by iconst terminal, are defined as one or more digits. It is defined as:
iconst := [0-9]+

The token for an integer constant is ICONST.

 

Real constants, referred to by rconst terminal, are defined as zero or more digits followed by a decimal point (dot) and one or more digits. It is defined as:
Rconst := ([0-9]*)\.([0-9]+)

The token for a real constant is RCONST. For example, real number constants such as 12.0 and .2 are accepted, but 2. is not.

 

String literals, referred to by sconst terminal, are defined as a sequence of characters delimited by double quotes, that should all appear on the same line. The assigned token for a string constant is SCONST. For example, “Hello to CS 280.” is a string literal.
 

The reserved words of the language are: program, end, begin, write, if, int, float, string, repeat. These reserved words have the following tokens, respectively: PROGRAM, END, BEGIN, WRITE, IF, INT, FLOAT, STRING and REPEAT.
 

The operators of the language are: +, -, *, /, %, =, (, ), ==, >. These operators are for plus, subtract, multiply, divide, remainder, assignment, left parenthesis, right parenthesis, equality, and greater than operations. They have the following tokens, respectively: PLUS, MINUS, MULT, DIV, REM, ASSOP, LPAREN, RPAREN, EQUAL, GTHAN.
 

The semicolon and comma characters are terminals with the following tokens: SEMICOL, COMMA.
 

A comment is defined by all the characters following the exclamation mark “#” to the end of the line. A comment does not overlap one line. A recognized comment is ignored and does not have a token.
 

White spaces are skipped. However, white spaces between tokens are used to improve readability and can be used as a one way to delimit tokens.
 

An error will be denoted by the ERR token.
 

End of file will be denoted by the DONE token.

# concepts that are used in this project:

1) Map
2) Vector
3) Inbuilt C++ function that are imported from algorithm library
4) Input and Output stream 
5) Sstream
6) strings
7) Operator overloading
8) File operations : Importing, extrating,reading file content.



# Contributing
Contributions are what make the open source community such an amazing place to learn, inspire, and create. Any contributions you make are greatly appreciated.
If you have a suggestion that would make this better, please fork the repo and create a pull request.





