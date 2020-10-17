// C11 standard
// created by cicek on 09.11.2018 20:41

#include <stdio.h>
#include <stdlib.h>

union type {
    int i_val;
    float f_val;
    char ch_val;
};

int main() {

    // Array of Unions

    union type arr[3];
    arr[0].i_val = 42;
    arr[1].f_val = 3.14;
    arr[2].ch_val = 'x';
    printf("1st element is %d, 2nd is %f, and the 3rd is %c", arr[0].i_val, arr[1].f_val, arr[2].ch_val);



    return 0;
}
