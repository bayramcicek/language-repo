// C11 standard
// created by cicek on 18.03.2019 11:09

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/* sözlük analizcisi
değişken adları ve sayıların operand olduğu aritmetik işlemler
değişken adları ve alfanümerik karakterler ile başlasın
                            |
                            -> harf

 */
int charClass;
char lexeme[100];
char nextChar;
int lexLen;
int token;
int nextToken;
FILE *in_fp;

void addChar();

void getChar();

void getNoneBlank();

int lex();

int lookUp(char);

// char classes
#define LETTER 0
#define DIGIT 1
#define UNKNOWN 99

// token codes
#define INT_LIT 10
#define IDENT 11
#define ASSIGN_OP 20
#define ADD_OP 21
#define SUB_OP 22
#define MULT_OP 23
#define DIV_OP 24
#define LEFT_PAREN 25
#define RIGHT_PAREN 26

int main() {

    if ((in_fp = fopen("/home/cicek/Desktop/a.txt", "r")) == NULL)
        printf("ERROR cannot open file");
    else {
        getChar();
        do{
            lex();
        }while (nextToken != EOF);

    }


    return 0;
}

int lookup(char ch) { // tokenları ayırdığımız yer
    switch (ch) {
        case '(':
            addChar(); // lexeme dizisine karakter ekleyacek
            nextToken = LEFT_PAREN;
            break;

        case ')':
            addChar(); // lexeme dizisine karakter ekleyacek
            nextToken = RIGHT_PAREN;
            break;

        case '-':
            addChar(); // lexeme dizisine karakter ekleyacek
            nextToken = SUB_OP;
            break;

        case '+':
            addChar(); // lexeme dizisine karakter ekleyacek
            nextToken = ADD_OP;
            break;

        case '*':
            addChar(); // lexeme dizisine karakter ekleyacek
            nextToken = MULT_OP;
            break;

        case '/':
            addChar(); // lexeme dizisine karakter ekleyacek
            nextToken = DIV_OP;
            break;
        case '=':
            addChar(); // lexeme dizisine karakter ekleyacek
            nextToken = ASSIGN_OP;
            break;

        default:
            addChar();
            nextToken = EOF;
            break;
    }

    return nextToken;

}

void addChar() {
    if (lexLen <= 98) {
        lexeme[lexLen++] = nextChar;
        lexeme[lexLen] = 0;
    } else {
        printf("ERRROR lexeme is too long");
    }
}

// digit mi alfanümerik mi
void getChar() {
    if ((nextChar = getc(in_fp)) != EOF) { // EOF end of file
        if (isalpha(nextChar)) { // alfanümerik karakter mi (hazır sınıf)
            charClass = LETTER;
        } else if (isdigit(nextChar)) {
            charClass = DIGIT;
        } else {
            charClass = UNKNOWN;
        }
    } else {
        charClass = EOF;
    }

}

void getNoneBlank() {
    while (isspace(nextChar)) {
        getChar(); // bizim yazdığımız get char. getchar() ile karışmasın
    }
}

int lex() { // asıl sözcük analizcisi
    lexLen = 0;
    getNoneBlank(); // kontrol

    switch (charClass) {

        case LETTER:
            addChar();
            getChar(); // 1 karakter daha oku
            while (charClass == LETTER || charClass == DIGIT) {
                addChar();
                getChar();
            } // ident oluştu

            nextToken = IDENT;
            break;

        case DIGIT:
            addChar();
            getChar();
            while (charClass == DIGIT){
                addChar();
                getChar();
            }
            nextToken = INT_LIT; // sayılar için tanımladığımız token
            break;

        case UNKNOWN:
            lookup(nextChar); // lookup fonksiyonu ile uyuşuyor mu
            getChar();
            break;

        case EOF:
            nextToken = EOF;
            lexeme[0] = 'E';
            lexeme[1] = 'O';
            lexeme[2] = 'F';
            lexeme[3] = 0;
            break;
    }

    printf("Next token : %d Next lexeme : %s\n ", nextToken, lexeme);
//    return nextToken; // global değilkeni return etmeye gerek yok
}

/*
 *
 * Next token : 11 Next lexeme : count
 Next token : 20 Next lexeme : =
 Next token : 25 Next lexeme : (
 Next token : 11 Next lexeme : total
 Next token : 21 Next lexeme : +
 Next token : 11 Next lexeme : count
 Next token : 26 Next lexeme : )
 Next token : 24 Next lexeme : /
 Next token : 10 Next lexeme : 25
 Next token : -1 Next lexeme : EOF

Process finished with exit code 0
 */
