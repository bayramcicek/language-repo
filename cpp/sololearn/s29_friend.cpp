// C11 standard
// created by cicek on Feb 05, 2021 8:00 PM

#include <iostream>
#include <string>

using namespace std;

/*
 * Normally, private members of a class cannot be accessed from outside of that class.
However, declaring a non-member function as a friend of a class allows it to access the class' private members.
 This is accomplished by including a declaration of this external function within the class,
 and preceding it with the keyword friend.

However, declaring a non-member function as a friend of a class allows it to access the class' private members.
 This is accomplished by including a declaration of this external function within the class, and preceding it with the keyword friend.
 */

// friend: keyword for making a function a friend function for a class.

class MyClass {
public:
    MyClass() {
        regVar = 0;
    }

private:
    int regVar;

    friend void someFunc(MyClass &obj);
};

// The someFunc() function changes the private member of the object and prints its value.
void someFunc(MyClass &obj) {
    obj.regVar = 42;
    cout << obj.regVar;
}

/*
 * The function someFunc() is defined as a regular function outside the class.
 * It takes an object of type MyClass as its parameter, and is able to access the private data members of that object.
 *
 * To make its members accessible, the class has to declare the function as a friend in its definition.
 * You cannot "make" a function a friend to a class without the class "giving away" its friendship to that function
 */

int main(int argc, char **argv) {

    MyClass obj;
    someFunc(obj);
    /*
     * someFunc() had the ability to modify the private member of the object and print its value.
Typical use cases of friend functions are operations that are conducted
     between two different classes accessing private members of both.
     */

    /*
     * You can declare a function friend across any number of classes.
Similar to friend functions, you can define a friend class, which has access to the private members of another class.
     */

// A friend function can modify all members of a class, including private members

    return 0;
}
