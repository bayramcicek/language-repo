// C11 standard
// created by cicek on 09.11.2018 22:15

#include <stdio.h>
#include <stdlib.h>
#include <memory.h>

typedef struct {
    int num;
    char *info;
} record;

int main() {

    // The program below uses calloc to allocate memory for a structure and malloc to allocate memory for the string within the structure:

    record *recs;
    int num_recs = 2;
    int k;
    char str[] = "This is information";

    recs = (record*)calloc(num_recs, sizeof(record));
    if (recs != NULL) {
        for (k = 0; k < num_recs; k++) {
            (recs+k)->num = k;
            (recs+k)->info = malloc(sizeof(str));
            strcpy((recs+k)->info, str);
        }
    }

    for (k = 0; k < num_recs; k++) {
        printf("%d\t%s\n", (recs+k)->num, (recs+k)->info);
    }

    free(recs);

    // Dynamically allocated structures are the basis of linked lists and binary trees as well as other data structures.

    /*
    The only practical difference is that malloc says to the OS "I need n bytes of memory" and calloc says to the OS "I need n bytes of memory all set to zero".
    This means that after using malloc, all the data is random and after using calloc, all the data is zero.
     */

    return 0;
}
