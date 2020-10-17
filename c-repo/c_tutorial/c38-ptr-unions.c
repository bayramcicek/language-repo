// C11 standard
// created by cicek on 09.11.2018 20:34

#include <stdio.h>
#include <stdlib.h>

union val {
    int int_num;
    float fl_num;
    char str[20];
};

int main() {

    union val info;
    union val *ptr = NULL;
    ptr = &info;
    ptr->int_num = 10;
    printf("info.int_num is %d", info.int_num);

    return 0;
}
