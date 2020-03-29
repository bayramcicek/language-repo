// C11 standard
// created by cicek on 08.04.2019 11:36

#include <stdio.h>
#include <stdlib.h>

void f();
void g();
void h();

int x = 2;
int main() {
    x++;
    f();
    g();
    printf("%d \n", x);


    return 0;
}

void f(){
//    int x = 3;
    x++;
    h();
//    printf("%d \n", x);
}

void g(){
    int x = 4;
    h();
//    printf("%d \n", x);
}

void h(){
    printf("%d \n", x);
}
