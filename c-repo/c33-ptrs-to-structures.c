// C11 standard
// created by cicek on 09.11.2018 00:02

#include <stdio.h>
#include <stdlib.h>

struct student{
    char name[50];
    int number;
    int age;
}st2; // mean: struct student st2;

// Struct pointer as a function parameter
void showStudentData(struct student *st) {
    printf("\nStudent:\n");
    printf("Name: %s\n", st->name);
    printf("Number: %d\n", st->number);
    printf("Age: %d\n", st->age);
}

int main() {

    // Pointers to Structures

    struct student st1 = {"Krishna", 5, 21};
    showStudentData(&st1);
    showStudentData(&st2);



    return 0;
}
