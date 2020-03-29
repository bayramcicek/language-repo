// C11 standard
// created by cicek on 02.10.2018 23:51
//

#include <stdio.h>
#include <stdlib.h>

int main(){

//    char a = getchar();
//
//    printf("You entered: ");
//    putchar(a); // putchar() Outputs a single character.

//    hey!
//    You entered: h

// The puts() function is used to display output as a string.

/*
    char b[100];

    printf("something: ");
    fgets(b, 100, stdin);

    printf("You entered: ");
    puts(b);


//    something: merhaba
//    You entered: merhaba

*/

    char greeting[6] = {'H', 'e', 'l', 'l', 'o', '\0'};
    printf("Greeting message: %s\n", greeting ); // Hello

//    scanf() stops reading as soon as it encounters a space,
//    so text such as "Hello World" is two separate inputs for scanf().

    char list[10];
    printf("print a letter: ");
    scanf("%s", list);
    printf("string: %s\n", list);
//   output:
//   print a letter: merhaba sonbahar!
//   string: merhaba

// https://www.tutorialspoint.com/cprogramming/c_strings.htm

    return 0;
}