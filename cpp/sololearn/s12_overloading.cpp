// C11 standard
// created by cicek on Jan 29, 2021 7:23 PM

#include <iostream>
#include <string>

using namespace std;

void printNumber(int x) {
    cout << "Prints an integer: " << x << endl;
}

void printNumber(float x) {
    cout << "Prints a float: " << x << endl;
}

int main(int argc, char **argv) {

    /*
     * Function overloading allows to create multiple functions with the same name,
     * so long as they have different parameters.
     */

    int a = 16;
    float b = 54.541;
    printNumber(a);
    printNumber(b);

    /*
     * You can not overload function declarations that differ only by return type.
    The following declaration results in an error.
     */


    return 0;
}
