// C11 standard
// created by cicek on Nov 21, 2020 12:21 PM

#include <iostream>
#include <string>

using namespace std;

class MyClass {
public:
    MyClass() { // constructor
        cout << "My class constructor\n";
    }

    int myNum = 0;
    string myString;

    void myMethod(); // definition

private:
    int y = 12;
};

void MyClass::myMethod() {
    cout << "my func!\n";
}

int main(int argc, char **argv) {

    MyClass myObj;

    myObj.myNum = 34;
    myObj.myString = "selamlar";

    cout << myObj.myNum << "\n";
    cout << myObj.myString << "\n";
    myObj.myMethod();

//    myObj.y = 34 // private, not allowed

    return 0;
}
