// C11 standard
// created by cicek on Feb 01, 2021 8:33 PM

#include <iostream>
#include <string>

using namespace std;

class Hey {
public:
    Hey() {
        cout << "hey";
    }
};

int main(int argc, char **argv) {

    /*
     * Class constructors are special member functions of a class.
     * They are executed whenever new objects are created within that class.
The constructor's name is identical to that of the class. It has no return type, not even void.
     */

    Hey obj; // hey
    // When is the constructor called?: When a class object is created


    return 0;
}
