// C11 standard
// created by cicek on Feb 07, 2021 3:47 PM

#include <iostream>
#include <string>

using namespace std;

/*
 * Problems that occur during program execution are called exceptions.
In C++ exceptions are responses to anomalies that arise while the program is running,
 such as an attempt to divide by zero.
 */

// Exceptions are used to handle error in the program.

int main(int argc, char **argv) {

    /*
     * C++ exception handling is built upon three keywords: try, catch, and throw.
throw is used to throw an exception when a problem shows up.
     */

    try {
        int motherAge = 29;
        int sonAge = 36;
        if (sonAge > motherAge) {
            throw 99;
        }
    }
    catch (int x) {
        cout << "Wrong age values - Error " << x;
    }

    /*
     * The try block throws the exception, and the catch block then handles it.
The error code 99, which is an integer, appears in the throw statement, so it results in an exception of type int.
     */

    return 0;
}
