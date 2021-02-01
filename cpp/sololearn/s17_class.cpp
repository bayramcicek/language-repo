// C11 standard
// created by cicek on Jan 30, 2021 7:39 PM

#include <iostream>
#include <string>

using namespace std;

class BankAccount {
public:
    void sayHi() {
        cout << "Hi!";
    }
};

int main(int argc, char **argv) {

    /*
     * Objects are created using classes, which are actually the focal point of OOP.

The class describes what the object will be, but is separate from the object itself.
In other words, a class can be described as an object's blueprint, description, or definition.
You can use the same class as a blueprint for creating multiple different objects.
     For example, in preparation to creating a new building, the architect creates a blueprint,
     which is used as a basis for actually building the structure. That same blueprint
     can be used to create multiple buildings.

Programming works in the same fashion. We first define a class, which becomes the blueprint for creating objects.

Each class has a name, and describes attributes and behavior.

In programming, the term type is used to refer to a class name: We're creating an object of a particular type.
Attributes are also referred to as properties or data.
     */

    /*
     * For example, if we are creating a banking program, we can give our class the following characteristics:
name: BankAccount
attributes: accountNumber, balance, dateOpened
behavior: open(), close(), deposit()

The class specifies that each object should have the defined attributes and behavior.
     However, it doesn't specify what the actual data is; it only provides a definition.

Once we've written the class, we can move on to create objects that are based on that class.
Each object is called an instance of a class. The process of creating objects is called instantiation.
Each object has its own identity, data, and behavior.
     */

    /*
     *
      class BankAccount {

        }; //A class definition must be followed by a semicolon.
     */
    /*
     * Define all attributes and behavior (or members) in the body of the class, within curly braces.
You can also define an access specifier for members of the class.
     */

    BankAccount bank1;  // Our object named bank1 has all the members of the class defined.
    bank1.sayHi(); // Hi!
    // We must declare a class before using it, as we do with functions.

    return 0;
}
