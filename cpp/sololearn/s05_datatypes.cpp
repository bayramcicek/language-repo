// C11 standard
// created by cicek on Jan 27, 2021 9:05 PM

#include <iostream>
#include <string>
/*The <string> library is included in the <iostream> library,
 * so you don't need to include <string> separately, if you already use <iostream>.*/
using namespace std;

int main(int argc, char **argv) {

    /*
     * The operating system allocates memory and selects what will be stored in the reserved memory
     * based on the variable's data type.
The data type defines the proper use of an identifier, what kind of data can be stored,
     and which types of operations can be performed.*/

    /*
     * Numeric data types include:
Integers (whole numbers), such as -7, 42.
Floating point numbers, such as 3.14, -42.67.*/

    /*A string is composed of numbers, characters, or symbols. String literals are placed in double quotation marks;
     * some examples are "Hello", "My name is David", and similar.
     * Characters are single letters or symbols, and must be enclosed between single quotes, like 'a', 'b', etc.*/

    /*In C++, single quotation marks indicate a character; double quotes create a string literal.
     * While 'a' is a single a character literal, "a" is a string literal.*/

    // The Boolean data type returns just two possible values: true (1) and false (0).

    /*
     * The size of the integer type varies according to the architecture of the system on which the program runs,
     * although 4 bytes is the minimum size in most modern system architectures.*/

    int a = 42;
    /*Several of the basic types, including integers, can be modified using one or more of these type modifiers:

    signed: A signed integer can hold both negative and positive numbers.
    unsigned: An unsigned integer can hold only positive values.
    short: Half of the default size.
    long: Twice the default size.*/

    unsigned long int b; // The integer data type reserves 4-8 bytes depending on the operating system.

    // There are three different floating point data types: float, double, and long double.
    /*In most modern architectures, a float is 4 bytes, a double is 8,
     * and a long double can be equivalent to a double (8 bytes), or 16 bytes.*/

    double temp = 4.21;
    /* Floating point data types are always signed, which means that they have the capability to hold
     * both positive and negative values.*/

    /*A string is an ordered sequence of characters, enclosed in double quotation marks.
    It is part of the Standard Library.
    You need to include the <string> library to use the string data type.
     Alternatively, you can use a library that includes the string library.*/

    string str = "Learning C++";
    cout << str << endl;

    /*A char variable holds a 1-byte integer. However, instead of interpreting the value of the char as an integer,
     * the value of a char variable is typically interpreted as an ASCII character.
       A character is enclosed between single quotes (such as 'a', 'b', etc).*/

    char test = 'S';
    cout << test << endl; // S

    /*American Standard Code for Information Interchange (ASCII) is a character-encoding scheme that
     * is used to represent text in computers.*/

    /*Boolean variables only have two possible values: true (1) and false (0).
    To declare a boolean variable, we use the keyword bool.*/

    bool online = false;
    bool logged_in = true;

    /*If a Boolean value is assigned to an integer, true becomes 1 and false becomes 0.
    If an integer value is assigned to a Boolean, 0 becomes false and any value that has a non-zero value becomes true.*/



    return 0;
}
