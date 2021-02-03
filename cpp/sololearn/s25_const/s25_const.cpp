// C11 standard
// created by cicek on Feb 03, 2021 9:49 PM

#include <iostream>
#include <string>
#include "s25_const.h"

using namespace std;

/*
 * Only non-const objects can call non-const functions.
A constant object can't call regular functions. Hence, for a constant object to work you need a constant function.

To specify a function as a const member, the const keyword must follow the function prototype,
 outside of its parameters' closing parenthesis.
 */

class MyClassTest {
public:
    MyClassTest() {
        cout << "hii" << endl;
    }

    void TestFun() {
        cout << "test" << endl;
    }

};

// Now the myPrint() function is a constant member function
void s25_const::myPrint() const {
    cout << "Hello const" << endl;
}

void s25_const::test1() {
    cout << "Hello test1" << endl;
}


int main(int argc, char **argv) {

    const double var = 3.14;

    /*
     * A constant is an expression with a fixed value. It cannot be changed while the program is running.
Use the const keyword to define a constant variable.
     All constant variables must be initialized at the time of their creation.
     */

    cout << var << endl;

    /*
     * As with the built-in data types, we can make class objects constant by using the const keyword.
     *
     * All const variables must be initialized when they're created. In the case of classes,
     * this initialization is done via constructors. If a class is not initialized using a
     * parameterized constructor, a public default constructor must be provided - if no public
     * default constructor is provided, a compiler error will occur.

Once a const class object has been initialized via the constructor, you cannot modify
     the object's member variables. This includes both directly making changes to
     public member variables and calling member functions that set the value of member variables.
     *
     */

    const MyClassTest obj;
//    MyClassTest obj;
//    obj.TestFun(); // error with const

    /*
     * For const member functions that are defined outside of the class definition,
     * the const keyword must be used on both the function prototype and definition.
     */

    const s25_const obj2;
    obj2.myPrint(); // Hello const

    // Attempting to call a regular function from a constant object results in an error.
//    obj2.test1(); // error

    /*
     * In addition, a compiler error is generated when any const
     * member function attempts to change a member variable or to call a non-const member function.
     *
     * Defining constant objects and functions ensures that corresponding data members cannot be unexpectedly modified.
     *
     */

    // Constant member functions cannot modify any non-const members

    return 0;
}
