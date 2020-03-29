// C11 standard
// created by cicek on 07.11.2018 23:07

#include <stdio.h>
#include <stdlib.h>

int main(){

//    char first_name[25];
//    int age;
//    printf("Enter your first name and age: \n");
//    scanf("%s %d", first_name, &age);
//    printf("name: %s age: %d", first_name, age);

    /*
A safer alternative to gets() is fgets(), which reads up to a specified number of characters.
This approach helps prevent a buffer overflow, which happens when the string array isn't big enough for the typed text
     */

    char full_name[50];
    printf("Enter your full name: ");
    fgets(full_name, 50, stdin);
    printf("%s\n", full_name);
    printf("fgets() reads only n-1 characters from stdin because there must be room for '\\0'.");

    return 0;
}
