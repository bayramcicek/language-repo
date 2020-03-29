// C11 standard
// created by cicek on 07.11.2018 14:38

#include <stdio.h>
#include <stdlib.h>

int global1 = 0;
static int sata1 = 23;

void sayHello(){
    static int stat = 0;
    int asd = 11;
    printf("stat is %d, %d %d %d\n", stat, sata1, global1, asd);
    stat++;
    sata1++;
    global1++;
}

int main(){

    int x, y, num;

    for(x = 1, y = 10; x<y; x++, y--){
        printf("hello x=%d y=%d\n", x, y);
    }

    int local1, local2;

    local1 = 5;
    local2 = 10;
    global1 = local1 + local2;
    printf("%d \n", global1);  /* 15 */
    global1 = 122;
    printf("%d \n", global1);  /* 15 */

//hello x=1 y=10
//hello x=2 y=9
//hello x=3 y=8
//hello x=4 y=7
//hello x=5 y=6

    sata1 = 34;
    for(int init =0; init<5; init++){
        sayHello();
    }

}

