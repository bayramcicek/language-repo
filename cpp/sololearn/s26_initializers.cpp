// C11 standard
// created by cicek on Feb 04, 2021 6:46 PM

#include <iostream>
#include <string>

using namespace std;

class MyClass1 {
public:
//    /*
//     * Running this code returns an error, because one of its member variables is a constant,
//     * which cannot be assigned a value after declaration.
//     */
//    MyClass1(int a, int b) {
//        regVar = a;
//        constVar = b;
//    }

/*
 * In cases like this one, a member initialization list can be used to assign values to the member variables.
 */
    MyClass1(int a, int b)
            : regVar(a), constVar(b) {
    }
    // Use the syntax variable(value) to assign values.

    /*
     * The initialization list eliminates the need to place explicit assignments in the constructor body.
     * Also, the initialization list does not end with a semicolon.
     */

private:
    int regVar;
    const int constVar;
};

int main(int argc, char **argv) {

    /*
     * Member Initializers

Recall that constants are variables that cannot be changed, and that all const variables
     must be initialized at time of creation.

C++ provides a handy syntax for initializing members of the class called
     the member initializer list (also called a constructor initializer).
     */



    return 0;
}
