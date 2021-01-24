// C11 standard
// created by cicek on Jan 24, 2021 7:32 PM

#include <iostream>
#include <string>

using namespace std;

int main(int argc, char **argv) {

    /*Creating a variable reserves a memory location, or a space in memory for storing values.
     * The compiler requires that you provide a data type for each variable you declare.
     C++ offer a rich assortment of built-in as well as user defined data types.*/

    /*An identifier is a name for a variable, function, class, module, or any other user-defined item.
     * An identifier starts with a letter (A-Z or a-z) or an underscore (_), followed by additional letters,
     * underscores, and digits (0 to 9).*/

    int myVariable = 10;
    // Different operating systems can reserve different sizes of memory for the same data type.

    // The C++ programming language is case-sensitive, so myVariable and myvariable are two different identifiers.

    int a, b;
    // defines two variables of type int

    int c = 30;
    int d = 15;
    int sum = c + d;
    // Now sum equals 45

    cout << sum;

    return 0;
}
