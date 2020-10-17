// C11 standard
// created by cicek on 07.11.2018 23:47

#include <stdio.h>
#include <stdlib.h>

int main() {

    // build a string from other data types

//    char info[100];
//    char dept[ ] = "HR";
//    int emp = 75;
//    sprintf(info, "The %s dept has %d employees.", dept, emp);
//    printf("%s\n", info); // The HR dept has 75 employees.

    char infoo[ ] = "Snoqualmie WA 13190";
    char city[50];
    char state[50];
    int population;
    sscanf(infoo, "%s %s %d", city, state, &population);
    printf("%d people live in %s, %s.", population, city, state);

    return 0;
}
