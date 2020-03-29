// C11 standard
// created by cicek on 07.11.2018 21:11

#include <stdio.h>
#include <stdlib.h>

int add_up (int *a, int num_elements) {
    int total = 0;
    int k;

    for (k = 0; k < num_elements; k++) {
        total += a[k];
    }

    return (total);
}

int main(){

    int orders[5] = {10, 20, 30, 40, 50};

    printf("Total orders is %d\n", add_up(orders, 5));
    printf("\n%d", (&(orders[0]))[4]); // 50
    printf("\n%d", *(orders+4)); // 50
    printf("\n%d", *((&orders[0])+4)); // 50
    printf("\n%d", orders[4]); // 50


}
