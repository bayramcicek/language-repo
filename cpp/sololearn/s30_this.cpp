// C11 standard
// created by cicek on Feb 05, 2021 8:09 PM

#include <iostream>
#include <string>

using namespace std;

class MyClass {
public:
    MyClass(int a) : var(a) {}

    // The printInfo() method offers three alternatives for printing the member variable of the class.
    void printInfo() {
        cout << var << endl;
        cout << this->var << endl;
        cout << (*this).var << endl;
        /*
         * All three of the ways to access the member variable work.
Note that only member functions have a this pointer.
         */

        cout << this << endl;
        cout << &var << endl;
    }
    /*
     * All three alternatives will produce the same result.
this is a pointer to the object, so the arrow selection operator is used to select the member variable.
     */

private:
    int var;
};

int main(int argc, char **argv) {
    // Friend functions do not have a this pointer, because friends are not members of a class.

    /*
     * Every object in C++ has access to its own address through an important pointer called the this pointer.
Inside a member function this may be used to refer to the invoking object.
     */

    MyClass obj(66);
    obj.printInfo();

    /*
     * out:
66
66
66
0x7ffc379759e4
0x7ffc379759e4
     */

    // keyword name to store the address of the current object: this

    /*
     * You may be wondering why it's necessary to use the this keyword,
     * when you have the option of directly specifying the variable.

The this keyword has an important role in operator overloading, which will be covered in the following lesson.
     */

    return 0;
}
