// C11 standard
// created by cicek on 09.11.2018 22:30

#include <stdio.h>
#include <stdlib.h>

int main() {

    // The realloc Function
    // realloc leaves the original content in memory and expands the block to allow for more storage.
    // The realloc() function expands a current block to include additional memory.

    int *ptr;
    ptr = malloc(10*sizeof(*ptr));  /* a block of 10 ints */
    if (ptr != NULL) {
        *(ptr+2) = 50;  /* assign 50 to third int */
    }
    ptr = realloc(ptr, 100*sizeof(*ptr)); /* 100 ints */
    *(ptr+30) = 75;
    printf("%d %d", *(ptr+2), *(ptr+30));

    // alloc function doesn't assign zeros to the allocated memory

    // C philosophy is quite close to the Unix one: you should know what you're doing. If you do unexpected things, you'll get unexpected results. So, when you develop in C, always think it through

    return 0;
}
