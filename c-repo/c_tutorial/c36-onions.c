// C11 standard
// created by cicek on 09.11.2018 18:46

#include <stdio.h>
#include <stdlib.h>
#include <memory.h>

union val {
    int int_num;
    float fl_num;
    char str[20];
};

int main() {

    /*
Unions

A union allows to store different data types in the same memory location.
It is like a structure because it has members. However, a union variable uses the same memory location for all its member's and only one member at a time can occupy the memory location.

A union declaration uses the keyword union, a union tag, and curly braces { } with a list of members.

Union members can be of any data type, including basic types, strings, arrays, pointers, and structures.
     */

    // Unions are used for memory management. The largest member data type is used to determine the size of the memory to share and then all members use this one location. This process also helps limit memory fragmentation.

    union val test;

    test.int_num = 123;
    test.fl_num = 98.76;
    strcpy(test.str, "hello");

    printf("%d\n", test.int_num);
    printf("%f\n", test.fl_num);
    printf("%s\n", test.str);

    printf("%p\n", &test.int_num);
    printf("%p\n", &test.fl_num);
    printf("%p\n", &test.str);

    /*
0x7ffd15086a10
0x7ffd15086a10
0x7ffd15086a10
     */

    return 0;
}
