// C11 standard
// created by cicek on Jan 29, 2021 7:34 PM

#include <iostream>
#include <string>

using namespace std;

int factorial(int a) {
    if (a == 1) return 1;
    else {
        return a * factorial(a-1);
    }
}

int main(int argc, char **argv) {

    /*
     * To avoid having the recursion run indefinitely, you must include a termination condition.
     * Another name for the exit condition is the base case.
     * Keep in mind that a base case is necessary for real recursion.
     * Without it, the recursion will keep running forever.
     */

    int result = factorial(5);
    cout << result << endl;

    return 0;
}
