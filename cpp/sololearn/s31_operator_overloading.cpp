// C11 standard
// created by cicek on Feb 05, 2021 8:29 PM

#include <iostream>
#include <string>

using namespace std;

// Our class has two constructors and one member variable.
class MyClass {
public:
    int var;

    MyClass() {}

    MyClass(int a)
            : var(a) {}

    /*
     * Overloaded operators are functions, defined by the keyword operator followed by the
     * symbol for the operator being defined.
An overloaded operator is similar to other functions in that it has a return type and a parameter list.

In our example we will be overloading the + operator. It will return an object of our class and take an
     object of our class as its parameter.
     */

    MyClass operator+(MyClass &obj) {
        // Now, we need to define what the function does.
        MyClass res;
        res.var = this->var + obj.var;
        return res;
    }
    /*
     * Here, we declared a new res object. We then assigned the sum of the member variables
     * of the current object (this) and the parameter object (obj) to the res object's var member variable.
     * The res object is returned as the result.

This gives us the ability to create objects in main and use the overloaded + operator to add them together.
     */

    // Which choice is the keyword for overloading an operator in C++?: operator
};

int main(int argc, char **argv) {

    /*
     * Most of the C++ built-in operators can be redefined or overloaded.
Thus, operators can be used with user-defined types as well (for example, allowing you to add two objects together).
     */

    // Operators that can't be overloaded include :: | .* | . | ?:

    MyClass abc(2);
    cout << abc.var; // 2

    MyClass obj1(12), obj2(54);
    MyClass res = obj1 + obj2;

    /*
     * With overloaded operators, you can use any custom logic needed.
     * However, it's not possible to alter the operators' precedence, grouping, or number of operands.
     */

    return 0;
}
