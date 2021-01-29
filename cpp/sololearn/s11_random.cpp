// C11 standard
// created by cicek on Jan 29, 2021 6:27 PM

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
/*
 * In the C++ standard library, you can access a pseudo random number
 * generator function that's called rand(). When used, we are required to include the header <cstdlib>
 */

int main(int argc, char **argv) {

//    for (int x = 1; x <= 10; x++) {
//        cout << rand() << endl;
//    }

    // Use the modulo (%) operator to generate random numbers within a specific range.
//    for (int x = 1; x <= 10; x++) {
//        // numbers within a range of 1 to 6.
//        cout << 1 + (rand() % 6) << endl; // [1, 6]
//    }
    /*
     * However, the rand() function will only return a pseudo random number.
     * This means that each time the code is run, it generates the same numbers.
     */

    // The srand() function is used to generate truly random numbers.
    /*This function allows to specify a seed value as its parameter,
     * which is used for the rand() function's algorithm
     */
//    srand(23);
    // Changing the seed value changes the return of rand(). However, the same argument will result in the same output.

//    for (int x = 1; x <= 10; x++) {
//        cout << 1 + (rand() % 6) << endl;
//    }

    /*
     * A solution to generate truly random numbers, is to use the current time as a seed value for the srand() function.
    This example makes use of the time() function to get the number of seconds on your system time,
     and randomly seed the rand() function (we need to include the <ctime> header for it):
     */

    srand(time(nullptr));
    for (int x = 1; x <= 10; x++) {
        cout << 1 + (rand() % 6) << endl;
    }

    /*
     * time(0) will return the current second count, prompting the srand() function
     * to set a different seed for the rand() function each time the program runs.
     * Using this seed value will create a different output each time we run the program.
     */



    return 0;
}
