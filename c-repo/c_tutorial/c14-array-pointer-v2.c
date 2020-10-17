// C11 standard
// created by cicek on 07.11.2018 17:37

#include <stdio.h>
#include <stdlib.h>

int main(){

    int j = 63;
    int *mp = NULL;
    mp = &j;

    printf("The address of j is %x\n", &j); // %x --> 71d84bd8
    printf("p contains address %p\n", mp);
    printf("The value of j is %d\n", j);
    printf("p is pointing to the value %d\n", *mp);

    /* 	Unsigned hexadecimal integer %x*/

   /*
    *
There are several things to notice about this program:
Pointers should be initialized to NULL until they are assigned a valid location.
Pointers can be assigned the address of a variable using the ampersand & sign.
To see what a pointer is pointing to, use the * again, as in *p. In this case the * is called the indirection or dereference operator.
The process is called dereferencing.
    */

//    Some algorithms use a pointer to a pointer. This type of variable declaration uses **, and can be assigned the address of another pointer, as in:

    int x = 63;
    int *p = NULL;
    int **ptr = NULL;
    p = &x;
    ptr = &p;

    printf("x   --> %p\n", &x);
    printf("p   --> %p\n", p);
    printf("ptr --> %p\n", *ptr);
    printf("ptr --> %d\n", **ptr);

    int ggg = 45;
/*    int *pggg = NULL;
    pggg = &ggg;      */

 /*   int *pggg = &ggg; */




}
