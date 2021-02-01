// C11 standard
// created by cicek on Feb 01, 2021 8:38 PM

#include <iostream>
#include <string>

using namespace std;

class myClass {
public:
    myClass(string nm) {
        setName(nm);
    }

    void setName(string x) {
        name = x;
    }

    string getName() {
        return name;
    }

private:
    string name;
};


int main(int argc, char **argv) {

    /*
     * Constructors can be very useful for setting initial values for certain member variables.
A default constructor has no parameters. However, when needed, parameters can be added to a constructor.
     This makes it possible to assign an initial value to an object when it's created
     */

    myClass obj("selam");
    cout << obj.getName();

    // An object is an instance of a class.


    return 0;
}
