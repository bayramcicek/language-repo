// C11 standard
// created by cicek on 08.11.2018 00:07

#include <stdio.h>
#include <stdlib.h>

int main() {

    // Converting a String to a Number

    char input[10];
    char* ptr;
    long num;

    printf("Enter a number: ");
    scanf("%s", input);
    num = strtol(input, &ptr, 10);
    printf("%ld\n", num);

    return 0;
}
