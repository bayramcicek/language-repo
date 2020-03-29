// C11 standard
// created by cicek on 07.11.2018 21:34

#include <stdio.h>
#include <stdlib.h>

void printMe(int n){

    if(n == 0) return;

    printf("%d\n", n);
    printMe(n - 1);

}

// https://stackoverflow.com/questions/37538/how-do-i-determine-the-size-of-my-array-in-c#37539

int main(){

    printMe(10);

    int as[56];

    int c = (int) (sizeof(as)/ sizeof(as[0]));

    printf("sizeof(as): %ld\n", sizeof(as));
    printf("sizeof(as[0]): %ld\n", sizeof(as[0]));
    printf("as length: %d\n", c);

    int help = 5;
    int* he = &help;
    *he *= 3;
    printf("%d\n", help); // 15





    return 0;
}
