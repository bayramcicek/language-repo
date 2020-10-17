// C11 standard
// created by cicek on 07.11.2018 23:39

#include <stdio.h>
#include <stdlib.h>

int main() {

    char city[40];
    printf("Enter your favorite city: ");
    fgets(city, 50, stdin);

//    fputs(city, stdout);
//    printf(" is a fun city.");

    printf("%s is a fun city.\n", city);



    return 0;
}
