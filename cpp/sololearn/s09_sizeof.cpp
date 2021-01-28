// C11 standard
// created by cicek on Jan 28, 2021 8:16 PM

#include <iostream>
#include <string>

using namespace std;

int main(int argc, char **argv) {

    /*category          type        min size
     * boolean          bool        1 byte
     *
     * character        char        1 byte
     *
     * integer          short       2 byte
     *                  int         2 byte
     *                  long        4 byte
     *                  long long   8 byte
     *
     * floating point   float       4 byte
     *                  double      8 byte
     *                  long double 8 byte
     */

    // The sizeof operator determines and returns the size of either a type or a variable in bytes.
    cout << "char: " << sizeof(char) << endl; // char: 1
    cout << "int: " << sizeof(int) << endl; // int: 4
    cout << "float: " << sizeof(float) << endl; // float: 4
    cout << "double: " << sizeof(double) << endl; // double: 8

    int var = 50;
    cout << "var: " << sizeof(var) << endl; // var: 4
    // Output values may vary, according to the computer and compiler used.

    double myArr[10];
    cout << sizeof(myArr) << endl; // 80

    /*In addition, divide the total number of bytes in the array
     * by the number of bytes in a single element to learn how many elements you have in the array.*/
    int numbers[100];
    cout << sizeof(numbers) / sizeof(numbers[0]) << endl; // 100

    return 0;
}
