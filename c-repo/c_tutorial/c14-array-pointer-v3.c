// C11 standard
// created by cicek on 07.11.2018 20:28

#include <stdio.h>
#include <stdlib.h>

int main(){

    int x = 5;
    int y;
    int *p = NULL;
    p = &x;

    y = *p + 2; /* y is assigned 7 */
    y += *p;     /* y is assigned 12 */
    *p = y;       /* x is assigned 12 */
    (*p)++;      /* x is incremented to 13 */

    printf("p is pointing to the value %d\n", *p); // 13

    // Pointers and Arrays

    /*
     + is used to move forward to a memory location
     - is used to move backward to a memory location
     */

    int a[5] = {22, 33, 44, 55, 66};
    int *ptr = NULL;
    int i;

    ptr = &(a[0]); // a
    for (i = 0; i < 5; i++) {
        printf("%d %p\n", *(ptr + i), (ptr + i));
    }

    printf("\n\n%d\n", *(a+1)); // 33

    int b[5] = {22, 33, 44, 55, 66};
    int *ptrb = b;
    int res = *(ptrb + 2);
    printf("%d", res); // 44

    /*When a pointer is incremented, the memory address increases by the number of bytes being pointed to.
     * In the program above, the pointer increases by 4 when the increment operator is used (ptr++) because the pointer is pointing to an int.*/


}
