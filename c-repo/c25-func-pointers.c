// C11 standard
// created by cicek on 08.11.2018 00:46

#include <stdio.h>
#include <stdlib.h>

void say_hello(int num_times) {
    int k;
    for (k = 0; k < num_times; k++)
        printf("Hello\n");
}

int main() {

    // function pointers
/* Since pointers can point to an address in any memory location, they can also point to the start of executable code.
Pointers to functions, or function pointers, point to executable code for a function in memory. Function pointers can be stored in an array or passed as arguments to other functions */

    // return_type (*func_name)(parameters)

    // The parentheses around (*func_name) are important. Without them, the compiler will think the function is returning a pointer.

    /*
After declaring the function pointer, you must assign it to a function.
The following short program declares a function, declares a function pointer, assigns the function pointer to the function, and then calls the function through the pointer:

     */

    void (*funptr)(int);  /* function pointer */
    funptr = say_hello;  /* pointer assignment */
    funptr(3);  /* function call */

/*
A function name points to the start of executable code, just as an array name points to its first element.
Therefore, although statements such as funptr = &say_hello and (*funptr)(3) are correct,
it isn't necessary to include the address operator & and the indirection operator * in the function assignment and function call.
 */

/*
The single sentence that made all make sense for me:
"A function name points to the start of executable code"
That is: a function name is itself a pointer.
So declaring a function pointer is exactly declaring a new name - with the great advantage that it's a variable, with all its functionalities.
 */

// Try to write own C library. Function pointers are used when implementing entrypoints or callback functions for libs (dll), services, pools, event handling, tasks, interfaces, etc.

    return 0;
}
