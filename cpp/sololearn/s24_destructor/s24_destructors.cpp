// C11 standard
// created by cicek on Feb 03, 2021 5:55 PM

#include <iostream>
#include <string>
#include "s24_destructors.h"


using namespace std;

/*
 * The name of a destructor will be exactly the same as the class,
 * only prefixed with a tilde (~). A destructor can't return a value or take any parameters.
 *
 * Destructors can be very useful for releasing resources before coming out of the program.
 * This can include closing files, releasing memory, and so on.
 */

s24_destructors::s24_destructors() {
    cout << "Constructor" << endl;
}

s24_destructors::~s24_destructors() {
    cout << "Destructor" << endl;
}

int main(int argc, char **argv) {

    /*
     * Remember constructors? They're special member functions that are automatically called when an object is created.
Destructors are special functions, as well. They're called when an object is destroyed or deleted.

     Objects are destroyed when they go out of scope,
     or whenever the delete expression is applied to a pointer directed at an object of a class.

     Constructor runs when an object is created; destructor runs when it is deleted.

     */

    /*
     * Since destructors can't take parameters, they also can't be overloaded.
Each class will have just one destructor.
Defining a destructor is not mandatory; if you don't need one, you don't have to define one.
     */

    s24_destructors obj;
    //Constructor
    //Destructor

    /*
     * When the program runs, it first creates the object and calls the constructor.
     * The object is deleted and the destructor is called when the program's execution is completed.
     */

    // Destructors are called when an object is deleted.

    return 0;
}
