// C11 standard
// created by cicek on 09.11.2018 18:36

#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int h;
    int w;
    int l;
} box;

int main() {

    /*
Array of Structures

An array can store elements of any data type, including structures.
After declaring an array of structures, an element is accessible with the index number.
The dot operator is then used to access members of the element, as in the program:
     */

    box boxes[2] = {{2, 6, 8}, {4, 6, 6}};
    int k, volume;

    for (k = 0; k < 2; k++) {
        volume = boxes[k].h*boxes[k].w*boxes[k].l;
        printf("box %d volume %d\n", k, volume);
    }

    // Arrays of structures are used for data structures such as linked lists, binary trees, and more.

    return 0;
}
