// C11 standard
// created by cicek on Jan 28, 2021 7:00 PM

#include <iostream>

using namespace std;

int main(int argc, char **argv) {

    /*Every variable is a memory location, which has its address defined.
    That address can be accessed using the ampersand (&) operator (also called the address-of operator),
     which denotes an address in memory.*/

    int score = 5;
    cout << &score << endl;  // 0x7ffca47a4314

    /*A pointer is a variable, with the address of another variable as its value.
    In C++, pointers help make certain tasks easier to perform. Other tasks, such as
     dynamic memory allocation, cannot be performed without using pointers.

    All pointers share the same data type - a long hexadecimal number that represents a memory address.*/

    // The only difference between pointers of different data types is the data type of the variable that the pointer points to.

    int *ip;  // pointer to an integer
    double *dp;   // pointer to a double
    float *fp;  // pointer to a float
    char *ch;  // pointer to a character

    // The asterisk sign can be placed next to the data type, or the variable name, or in the middle.

    int *scorePtr;
    scorePtr = &score;
    cout << scorePtr << endl;  // Now, scorePtr's value is the memory location(bellek konumu) of score.

    /*There are two operators for pointers:
    Address-of operator (&): returns the memory address of its operand.
    Contents-of (or dereference) operator (*):
        returns the value of the variable located at the address specified by its operand.*/

    int var = 50;
    int  *p;
    p = &var;

    cout << var << endl;
    // Outputs 50 (the value of var)

    cout << p << endl;
    // Outputs 0x29fee8 (var's memory location)

    cout << *p << endl;
    /* Outputs 50 (the value of the variable
     stored in the pointer p) */

    /*The asterisk (*) is used in declaring a pointer for the simple purpose of indicating
     * that it is a pointer (The asterisk is part of its type compound specifier).
     * Don't confuse this with the dereference operator, which is used to obtain
     * the value located at the specified address. They are simply two different things represented with the same sign*/

    int x = 5;
    int *ptr = &x;

    x = x + 4;
    x = *ptr + 4;
    *ptr = *ptr + 4;

    cout << x << endl;  // 17

    return 0;
}
