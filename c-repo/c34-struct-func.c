// C11 standard
// created by cicek on 09.11.2018 18:31

#include <stdio.h>
#include <stdlib.h>
#include <memory.h>

typedef struct {
    int id;
    char title[40];
    float hours;
} course;

void update_course(course *class) {
    strcpy(class->title, "C++ Fundamentals");
    class->id = 111;
    class->hours = 12.30;
}

void display_course(course class) {
    printf("%d\t%s\t%3.2f\n", class.id, class.title, class.hours);
}


int main() {

    // Structures as Function Parameters
    //
    // A function can have structure parameters that accept arguments by value when a copy of the structure variable is all that is needed.
    // For a function to change the actual values in a struct variable, pointer parameters are required.

    course cs2;
    update_course(&cs2);
    display_course(cs2);

    return 0;
}
