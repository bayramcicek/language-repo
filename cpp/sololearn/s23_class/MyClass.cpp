// C11 standard
// created by cicek on Feb 03, 2021 5:36 PM

#include <iostream>
#include <string>
#include "MyClass.h"

using namespace std;

/*
 * The double colon in the source file (.cpp) is called the scope resolution operator,
 * and it's used for the constructor definition:
 */

// So, basically, MyClass::MyClass() refers to the MyClass() member function - or, in this case, constructor - of the MyClass class.
MyClass::MyClass() {
    // ctor -> constructor
    cout << "Hi. I am constructor\n";
}

/*
 * The scope resolution operator is used to define a particular class' member functions,
 * which have already been declared. Remember that we defined the constructor prototype in the header file.
 */

// create a function called ''test'' belonging to a class called ''demo''.
/*
 *  demo::test() { ... }
 *  <class_name>::<func_name>() { ... }
 */

/*
 * Since myPrint() is a regular member function, it's necessary to specify
 * its return type in both the declaration and the definition.
 */

void MyClass::myPrint() {
    cout << "myPrint()\n";
}

int main(int argc, char **argv) {

    /*
     * The new files act as templates for our new class.
        - MyClass.h is the header file.
        - MyClass.cpp is the source file.
     */

    MyClass obj;
    /*
     * The header declares "what" a class (or whatever is being implemented) will do,
     * while the cpp source file defines "how" it will perform those features.
     */

    obj.myPrint();

    // The type of the pointer is MyClass as it points to an object of that type.
    MyClass *ptr = &obj;

    // The arrow member selection operator (->) is used to access an object's members with a pointer.
    ptr->myPrint();


    return 0;
}


