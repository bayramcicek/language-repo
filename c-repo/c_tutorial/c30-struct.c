// C11 standard
// created by cicek on 08.11.2018 21:42

#include <stdio.h>
#include <stdlib.h>

int main() {

        // A structure is a user-defined data type that groups related variables of different data types.

    struct course {
        int id;
        float hours;
        char title[40];
    };
    // This struct statement defines a new data type named course that has three members.
    // Structure members can be of any data type, including basic types, strings, arrays, pointers, and even other structures

    /* declare two variables */
    struct course s1 =  {19, 9, "John"};


    // A struct variable is stored in a contiguous block of memory.
    // The sizeof operator must be used to get the number of bytes needed for a struct, just as with the basic data types.

    // If you want to initialize a structure using curly braces after declaration, you will also need to type cast, as in the statements:

    struct course s2;
    s2 = (struct course) {22, 10, "Batman"};

    struct course s4 = {.id = 123, .hours = 24, .title = "hello"};
    printf("struct: %f\n", s4.hours); // 24.000000
    printf("struct: %d\n", s4.id); // 123

    s4.hours = 12;
    printf("struct: %f\n", s4.hours); // 12.000000

    struct course a1 =  {19, 9, "Jason"};
    s4 = a1;
    printf("struct: %d\n", s4.id); // 19

    float as = 23.789;
    printf("%5.2f", as);

    return 0;
}
