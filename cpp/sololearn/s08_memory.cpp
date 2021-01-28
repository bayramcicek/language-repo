// C11 standard
// created by cicek on Jan 28, 2021 7:26 PM

#include <iostream>

using namespace std;

int main(int argc, char **argv) {

    /*To be successful as a C++ programmer, it's essential to have a good understanding of how dynamic memory works.
    In a C++ program, memory is divided into two parts:
    The stack: All of your local variables take up memory from the stack.
    The heap: Unused program memory that can be used when the program runs to dynamically allocate the memory.*/

    // We have dynamically allocated memory for an integer, and assigned it a value of 5.
    int *p = new int; // request memory
    // This allocates the memory size necessary for storing an integer on the heap, and returns that address.
    cout << p << endl;

    *p = 71; // store value
    cout << *p << endl;

    /*The pointer p is stored in the stack as a local variable, and holds the heap's allocated address as its value.
     * The value of 5 is stored at that address in the heap.*/

    /*For local variables on the stack, managing memory is carried out automatically.
    On the heap, it's necessary to manually handle the dynamically allocated memory, and use
     the delete operator to free up the memory when it's no longer needed.*/

    // free up the memory
    delete p;  // This statement releases the memory pointed to by pointer.
    // now p is a dangling pointer

    /*Forgetting to free up memory that has been allocated with the new keyword will result in memory leaks,
     * because that memory will stay allocated until the program shuts down.*/

    /*The delete operator frees up the memory allocated for the variable,
     * but does not delete the pointer itself, as the pointer is stored on the stack.*/

    // Pointers that are left pointing to non-existent memory locations are called dangling pointers.

    p = new int; // reuse for a new address

    /*The NULL pointer is a constant with a value of zero that is
     * defined in several of the standard libraries, including iostream.
    It's a good practice to assign NULL to a pointer variable when you declare it,
     in case you do not have exact address to be assigned. A pointer assigned NULL is called a null pointer.
     For example: int *ptr = NULL;*/

    int *ptr = NULL; // Pointer initialized with null
    ptr = new int[20]; // Request memory
    delete[] ptr; // Delete array pointed to by p

    /*Dynamic memory allocation is useful in many situations, such as when your program depends on input.
     * As an example, when your program needs to read an image file, it doesn't know in advance
     * the size of the image file and the memory necessary to store the image.*/

    // new: allocates space dynamically on the heap
    // delete: de-allocates memory on the heap

    return 0;
}
