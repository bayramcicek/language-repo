// C11 standard
// created by cicek on 07.11.2018 21:14

#include <stdio.h>
#include <stdlib.h>

int* get_evens() {
    static int nums[5];
    int k;
    int even = 0;

    for (k = 0; k < 5; k++) {
        nums[k] = (even += 2);
    }

    return (&nums[0]);
//    return (nums);
}

int main(){

    int *a;
    int k;

    a = get_evens(); /* get first 5 even numbers */
    for (k = 0; k < 5; k++){
        printf("%d\n", a[k]);
        printf("%d\n", *(a+k));
        printf("%d\n", *(&a[0]+k));
        printf("%d\n", (&a[0])[k]);
    }

    return 0;
}
