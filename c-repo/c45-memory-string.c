// C11 standard
// created by cicek on 10.11.2018 00:39

#include <stdio.h>
#include <stdlib.h>
#include <memory.h>

int main() {

    // Allocating Memory for Strings
    //
    // When allocating memory for a string pointer, you may want to use string length rather than the sizeof operator for calculating bytes.

    char str20[20];
    char *str = NULL;

    strcpy(str20, "12345");
    printf("str20 size: %ld\n", sizeof(str20));
    printf("str20 length: %ld\n", strlen(str20));
    str = malloc(strlen(str20)+1); /* make room for \0 */
    strcpy(str, str20);
    printf("%s", str);

    /*

    This approach is better memory management because you aren’t allocating more space than is needed to a pointer.
    When using strlen to determine the number of bytes needed for a string, be sure to include one extra byte for the NULL character '\0'.
    A char is always one byte, so there is no need to multiply the memory requirements by sizeof(char).
     */

    int *a = (int*)malloc(10 * sizeof(int));
    for (int i = 0; i < 10; ++i) {
        *(a+i) = i;
        printf("%d: %d\n", i, a[i]);
    }


    return 0;
}
