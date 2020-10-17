// C11 standard
// created by cicek on 08.11.2018 22:21

#include <stdio.h>
#include <stdlib.h>

int main() {

    /*
The typedef keyword creates a type definition that simplifies code and makes a program easier to read.
typedef is commonly used with structures because it eliminates the need to use the keyword struct when declaring variables.
     */

    typedef struct {
        int id;
        char title[40];
        float hours;
    }CELL;

    CELL s1;
    CELL s2;


    return 0;
}
