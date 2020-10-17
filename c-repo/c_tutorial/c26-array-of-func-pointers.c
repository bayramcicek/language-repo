// C11 standard
// created by cicek on 08.11.2018 01:00

#include <stdio.h>
#include <stdlib.h>

int add(int x, int y) {
    return(x + y);
}

int subtract(int x, int y) {
    return(x - y);
}

int multiply(int x, int y) {
    return(x * y);
}

int divide(int x, int y) {
    if (y != 0)
        return (x / y);
    else
        return 0;
}

int main() {

    /*
     * Array of Function Pointers

An array of function pointers can replace a switch or an if statement for choosing an action, as in the following program:
     */

    int x, y, choice, result;
    int (*op[4])(int, int);

    op[0] = add;
    op[1] = subtract;
    op[2] = multiply;
    op[3] = divide;
    printf("Enter two integers: ");
    scanf("%d%d", &x, &y);
    printf("Enter 0 to add, 1 to subtract, 2 to multiply, or 3 to divide: ");
    scanf("%d", &choice);
    result = op[choice](x, y);
    printf("%d", result);

/*
The statement int (*op[4])(int, int); declares the array of function pointers.
Each array element must have the same parameters and return type.
In this case, the functions assigned to the array have two int parameters and return an int.
The statement result = op[choice](x, y); executes the appropriate function based on the user's choice.
The previously entered integers are the arguments passed to the function.
*/
    return 0;
}
