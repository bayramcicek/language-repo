// C11 standard
// created by cicek on 07.11.2018 20:56

#include <stdio.h>
#include <stdlib.h>

void swap (int *num1, int *num2) {
    int temp;

    temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}

int main(){

    int x = 25;
    int y = 100;

    printf("x is %d, y is %d\n", x, y); // x is 25, y is 100
    swap(&x, &y);
    printf("x is %d, y is %d\n", x, y); // x is 100, y is 25

}
