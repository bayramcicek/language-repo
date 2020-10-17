// C11 standard
// created by cicek on 08.11.2018 01:07

#include <stdio.h>
#include <stdlib.h>

int main() {

    // A void pointer is used to refer to any address type in memory and has a declaration that looks like:
    // void *ptr;

    int x = 33;
    float y = 12.4;
    char c = 'a';

    void *ptr;

    ptr = &x;
    printf("void ptr points to %d\n", *((int *)ptr));
    ptr = &y;
    printf("void ptr points to %f\n", *((float *)ptr));
    ptr = &c;
    printf("void ptr points to %c", *((char *)ptr));

    /*
     When dereferencing a void pointer, you must first type cast the pointer to the appropriate data type before dereferencing with *.
You cannot perform pointer arithmetic with void pointers.*/

    return 0;
}
