// C11 standard
// created by cicek on 08.11.2018 01:31

#include <stdio.h>
#include <stdlib.h>

void* square (const void *num) {
    int result;
    result = (*(int *)num) * (*(int *)num);
    return result;
}

int main() {

    /*
Functions Using void Pointers

Void pointers are often used for function declarations.
For example:
void * square (const void *);

Using a void * return type allows for any return type.
Similarly, parameters that are void * accept any argument type.
If you want to use the data passed in by the parameter without changing it, you declare it const.

You can leave out the parameter name to further insulate the declaration from its implementation.
Declaring a function this way allows the definition to be customized as needed without having to change the declaration.

     */

    int x, sq_int;
    x = 6;
    sq_int = (int)square(&x);
    printf("%d squared is %d\n", x, sq_int);

    /*
This square function has been written to multiply ints, which is why the num void pointer is cast to an int.
If the implementation were to be changed to allow square() to multiply floats, then only the definition need be changed without having to make changes to the declaration.*/

// Pointers are especially good to use if the data that you would otherwise copy is very large. This improves the runtime.
    return 0;
}
