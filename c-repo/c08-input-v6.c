// C11 standard
// created by cicek on 03.10.2018 00:33
//

#include <stdio.h>
#include <stdlib.h>

int main(){

//    Escape sequences begin with a backslash \:
//    \n new line
//    \t horizontal tab
//    \\ backslash
//    \b backspace
//    \' single quote
//    \" double quote

    printf("hello\bman\n"); // hellman

//    d decimal
//    c character
//    s string
//    f float
//    e scientific notation
//    x hexadecimal

//    %[-][width].[precision]conversion character

    printf("Color: %s, Number: %d, float: %5.2f \n", "red", 42, 3.14159);
/* Color: red, Number: 42, float:  3.14  */

    printf("Pi = %3.2f \n", 3.14159);
/* Pi = 3.14 */

    printf("Pi = hi%10.5f \n", 3.14159);
/* Pi = hi   3.14159 */

    printf("Pi = %-10.5fhi \n", 3.14159);
/* Pi = 3.14159   hi */

    printf("There are %d %s in the tree.\n", 22, "apples");
/* There are 22 apples in the tree. */

    printf("%%"); // %

/*
 * There are also some other format specifiers in c which is not mentioned here.

%u: unsigned integer format specifier
%ld: long int format specifier
%p: to print pointer value
%g(%G) float or double use %f or %e as required
%o: int unsigned octal value
%x(%X) : int unsigned hexadecimal value.

Note:
The only difference between %u and %d is if we use negative integers %d gives negative value.
Whereas %u gives large positive value.
we can also use %u to print pointer if we want the address in decimal
 *
 * */


    printf("\nPi = %010.5f", 3.14159); // 0003.14159

    return 0;
}