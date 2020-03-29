// C11 standard
// created by cicek on 09.11.2018 21:59

#include <stdio.h>
#include <stdlib.h>

int main() {

    // The free Function
    //
    // The free() function is a memory management function that is called to release memory.
    // By freeing memory, you make more available for use later in your program.

    int *ptr;
    ptr = malloc(10*sizeof(*ptr));  /* a block of 10 ints */
    if (ptr != NULL)
        *(ptr+2) = 50;  /* assign 50 to third int */
    printf("%d\n", *(ptr+2));  /* 50 */

    free(ptr);

    printf("%d\n", *(ptr+2));  /* 50 */ // but free now

    /*
If you malloc(), the variable will be stored on the heap, not on the stack.
     There can't be a stack overflow, but in the worst case you'll run out of RAM and your computer will be frozen in an infinite loop of page faults
     */

    // Why am I still able to access the values assigned in ptr after using free() on my system?
    // Freeing memory doesn't equal erasing it. The area you free'd is indeed available to the OS but, while the OS doesn't use it for something else, its contents keep unchanged.

    return 0;
}
