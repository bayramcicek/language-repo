// C11 standard
// created by cicek on Feb 01, 2021 8:04 PM

#include <iostream>
#include <string>

using namespace std;

class MyClass {
public:
    string selam;

    void setSurname(string x) {
        surname = x;
    }

    string getSurname() {
        return surname;
    }

private:
    string surname;
};

int main(int argc, char **argv) {

    /*
     * Access specifiers are used to set access levels to particular members of the class.
The three levels of access specifiers are public, protected, and private.

A public member is accessible from outside the class, and anywhere within the scope of the class object.
     */

    MyClass obj1;
    obj1.selam = "merhaba";

    cout << obj1.selam << endl;

    /*
     * A private member cannot be accessed, or even viewed, from outside the class; it can be accessed only from within the class.
A public member function may be used to access the private members. For example:
     */

    MyClass obj2;
    obj2.setSurname("Kramer");
    string test = obj2.getSurname();
    cout << test << endl; // The getSurname() method returns the value of the private surname attribute.

    // If no access specifier is defined, all members of a class are set to private by default.
    // This allows for changes to the implementation of the methods and attributes, without affecting the outside code.
    // we provided access to it using public methods. Our class data can be read and modified only through those methods.


    return 0;
}
