// C11 standard
// created by cicek on 02.10.2018 23:23
//

#include <stdio.h>
#include <stdlib.h>

int main(){

    char c_list[5];

    printf("print something: ");
    fgets(c_list, 5, stdin);
    printf("you printed: %s\n", c_list);
    printf("list is: %s\n", c_list);

//    print something: asdfg
//    you printed: asdf
//    list is: asdf

//    print something: 12345678906767656
//    you printed: 1234
//    list is: 1234

    char my_list[3];

    printf("\nenter: \n");
    scanf("%s", my_list);
//    printf("my_list: %s\n", &my_list[0]);
    printf("my_list: %.3s\n", &my_list[0]);


//    when --> printf("my_list: %s\n", &my_list[0]);
//    print something: asdfqqrr
//    you printed: asdf
//    list is: asdf
//
//    enter:
//    my_list: qqrr

//    when --> printf("my_list: %.3s\n", &my_list[0]);
//    print something: asdfqqrr
//    you printed: asdf
//    list is: asdf
//
//    enter:
//    my_list: qqr

//    print something: 12
//    you printed: 12
//
//    list is: 12
//
//
//    enter:
//    ere
//    my_list: ere

    return 0;
}
