// C11 standard
// created by cicek on Jan 29, 2021 7:42 PM

#include <iostream>
#include <string>

using namespace std;

void printArray(int arr[], int size) {
    for (int x = 0; x < size; x++) {
        cout << arr[x];
    }
}

void myFunc(int *a) {
    *a = 100;
}

int main(int argc, char **argv) {

    int arr[] = {1, 2, 3, 4, 5};
    printArray(arr, 5);
    cout << "\n";

    /*
     * Function Arguments
There are two ways to pass arguments to a function as the function is being called.

By value: This method copies the argument's actual value into the function's formal parameter.
     Here, we can make changes to the parameter within the function without having any effect on the argument.

By reference: This method copies the argument's reference into the formal parameter.
     Within the function, the reference is used to access the actual argument used in the call.
     This means that any change made to the parameter affects the argument.
     */

    // By default, C++ uses call by value to pass arguments.
    /* pass by value: pass the copy of the variable as the argument
     * Because a copy of the argument is passed to the function, the original argument is not modified by the function.
     */

    /*
     * Pass-by-reference copies an argument's address into the formal parameter.
     * Inside the function, the address is used to access the actual argument used in the call.
     * This means that changes made to the parameter affect the argument.
To pass the value by reference, argument pointers are passed to the functions just like any other value.
     */

    int var = 20;
    myFunc(&var);

    cout << var << endl; // 100

    /*
     * summary:
     *
     * Passing by value: This method copies the actual value of an argument into the formal parameter of the function.
     * In this case, changes made to the parameter inside the function have no effect on the argument.

Passing by reference: This method copies the reference of an argument into the formal parameter. Inside the function,
     the reference is used to access the actual argument used in the call. So, changes made to the parameter also affect the argument.

     In general, passing by value is faster and more effective. Pass by reference when your function needs to modify
     the argument, or when you need to pass a data type, that uses a lot of memory and is expensive to copy.
     */


    return 0;
}
