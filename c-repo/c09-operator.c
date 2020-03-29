// C11 standard
// created by cicek on 03.10.2018 17:34
//

#include <stdio.h>
#include <stdlib.h>

int main(){

    int i1 = 10;
    int i2 = 3;
    int quotient=0, remainder=0;
    float f1 = 4.2;
    float f2 = 2.5;
    float result;

    quotient = i1 / i2; // 3
    remainder = i1 % i2; // 1
    result = f1 / f2; // 1.680000

//    Modulus division cannot be performed on floats or doubles
    printf("%d\n%d\n%f\n", quotient, remainder, result);

//    The *, /, and % are performed first in order from left to right and then + and -, also in order from left to right.

    float average;
    int total = 23;
    int count = 4;

    average = (float) total / count;
    printf("%f\n", average);
/* average = 5.750000 */

    average = total / (float) count;
    printf("%f\n", average);
/* average = 5.750000 */

    average = total / count;
    printf("%f\n", average);
/* average = 5.000000 */

//    Explicit type conversion, even when the compiler may do automatic type conversion, is considered good programming style

    int wer=0;
    wer += 3 * 2;  // 6
    printf("%d\n",wer);

    int x, y, z;

    z = 3;
    x = z--;  /* assign 3 to x, then decrement z to 2 */
    printf("x=%d \n", x);

    y = 3;
    x = ++y;  /* increment y to 4, then assign 4 to x */

    printf("x=%d \n", x);

    printf("y=%d \n", y);


    return 0;
}
