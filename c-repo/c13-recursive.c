// C11 standard
// created by cicek on 07.11.2018 16:07

#include <stdio.h>
#include <stdlib.h>

int factorial (int num){
    if (num == 1){ /*base case*/
        return 1;
    }

    else{
        return (num * factorial(num -1));
    }

}

int main(){

    int a = 5;
    printf("%d\n ", factorial(5));


}
