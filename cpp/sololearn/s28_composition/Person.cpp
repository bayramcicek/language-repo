// C11 standard
// created by cicek on Feb 04, 2021 7:48 PM

#include <iostream>
#include <string>
#include "Birthday.h"

using namespace std;

/*
 * The Person class has a name and a Birthday member, and a constructor to initialize them.
Ensure that the corresponding header files are included.
 */

class Person {
public:
    Person(string n, Birthday b)
            : name(n),
              bd(b) {
    }

/* Notice that we can call the bd member's printDate() function,
 since it's of type Birthday, which has that function defined. */
    void printInfo() {
        cout << name << endl;
        bd.printDate();
    }

private:
    string name;
    Birthday bd;
};

void Birthday::printDate() {

    cout << month << "/" << day
         << "/" << year << endl;

}

int main(int argc, char **argv) {


    Birthday b1(1, 1, 2021);
    Person p1("Benjamin", b1);

    // Composition is used for objects that share a has-a relationship, as in "A Person has a Birthday".
    // Now, our Person class has a member of type Birthday

    p1.printInfo();
    /*
     * Person object and passed the Birthday object to its constructor.
     * Finally, we used the Person object's printInfo() function to print its data.
     */

    /*
     * In general, composition serves to keep each individual class relatively simple, straightforward,
     * and focused on performing one task. It also enables each sub-object to be self-contained,
     * allowing for reusability (we can use the Birthday class within various other classes).
     */

    return 0;
}
