// C11 standard
// created by cicek on Jan 29, 2021 6:04 PM

#include <iostream>
#include <string>

using namespace std;

//Function declaration
void selam();

void helloWorld() {
    cout << "hello !\n";
}

void printSomething(int x) {
    cout << x;
}

int sum(int a, int b = 42) { // default parameter
    int result = a + b;
    return (result);
}

int main(int argc, char **argv) {

    // Every valid C++ program has at least one function - the main() function.
    // void is a basic data type that defines a valueless state.

    helloWorld();
    printSomething(42);
    /*
   * The value 42 is passed to the function as an argument, and is assigned to the formal parameter of the function: x.
     */


    return 0;
}

//Function definition
void selam() {
    cout << "selam\n";
}

/*
 * Function declaration is required when you define a function in one source file and
 * you call that function in another file. In such case, you should declare
 * the function at the top of the file calling the function.
 */

// function parameters: They are created upon entering the function, and are destroyed upon exiting the function
