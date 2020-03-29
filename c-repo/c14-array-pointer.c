// C11 standard
// created by cicek on 07.11.2018 17:03

#include <stdio.h>
#include <stdlib.h>

void test(int k) {
    printf("The address of k is %ls\n", &k);
}

int main(){

    float myArray[5] = {1,2,3};
    printf("%f\n\n", myArray[2]);

    //////////////////////////////////

//    int num;
//    scanf("%d", &num);
//    printf("%d\n", num);

    printf("int: %lu \n",sizeof(int)); // 4 byte
    printf("float: %lu \n", sizeof(float)); // 4
    printf("double: %lu \n", sizeof(double)); // 8
    printf("char: %lu \n", sizeof(char)); // 1

    /*
     * sizeof => size in bytes, and
       CHAR_BIT => number of bits in byte
     */

    int i = 0;

    printf("The address of i is %ls\n", &i);
    test(i);

    printf("The address of i is %ls\n", &i);
    test(i);

    /*In the printf statement, %x is the hex format specifier.*/

    /*  pointer_type *identifier   */
    
}
