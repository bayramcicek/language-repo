// C11 standard
// created by cicek on Feb 03, 2021 5:36 PM

// What is the purpose of #ifndef #define directives in header files?:
// They prevent a header file from being included more than once within one file

#ifndef CPP_MYCLASS_H
#define CPP_MYCLASS_H
/*
 * ifndef stands for "if not defined". The first pair of statements tells the program to define
 * the MyClass header file if it has not been defined already. endif ends the condition.
 *
 * This prevents a header file from being included more than once within one file.
 */

/*
 * The header file (.h) holds the function declarations (prototypes) and variable declarations.
It currently includes a template for our new MyClass class, with one default constructor.
 */

class MyClass {
public:
    MyClass();
    void myPrint();

protected:
private:
};

/*
 * The implementation of the class and its methods go into the source file (.cpp).
Currently it includes just an empty constructor.
 */

// What is the header file used for?: Function prototypes and variable declaration

#endif //CPP_MYCLASS_H
