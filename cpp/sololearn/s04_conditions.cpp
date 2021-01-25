// C11 standard
// created by cicek on Jan 25, 2021 9:33 PM

#include <iostream>
#include <string>

using namespace std;


int main(int argc, char **argv) {

    // Including the curly braces anyway is a good practice, as they clarify the code and make it easier to read.

    // The init step is executed first, and does not repeat.
    for (int i = 0; i < 30; i += 10) { // It's possible to change the increment statement.
        cout << "test: " << i << endl;
    }

    int a = 0;
    do {
        cout << "do\n";
        a++;
    } while (a < 5); // Don't forget the semicolon after the while statement.

    /* in multiple conditions The switch statement is a more elegant solution in this scenario. */

    int age = 23;
    switch (age) {
        case 18:
            cout << "you can elect prime minister";
            break;

        case 23:
            cout << "1234\n";

        case 45:
            cout << "test\n";

        default:
            cout << "default\n";
    }
    /*leaving out a break statement results in the execution of all of the
     * statements in the following cases, even those that don't match the expression.*/
    // This type of behavior is called fall-through.

    /*As the switch statement's final case, the default case requires no break statement.
     The break statement can also be used to break out of a loop.*/

    return 0;
}
