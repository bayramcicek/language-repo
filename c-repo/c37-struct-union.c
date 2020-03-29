// C11 standard
// created by cicek on 09.11.2018 18:54

#include <stdio.h>
#include <stdlib.h>
#include <memory.h>

typedef struct {
    char make[20];
    int model_year;
    int id_type; /* 0 for id_num, 1 for VIN */
    union { /* <important> */
        int id_num;
        char VIN[20];
    } id; /* </important> */
} vehicle;

int main() {

    vehicle car1;
    strcpy(car1.make, "Ford");
    car1.model_year = 2017;
    car1.id_type = 0;
    car1.id.id_num = 123098; /*important*/

    /* display vehicle data */
    printf("Make: %s\n", car1.make);
    printf("Model Year: %d\n", car1.model_year);
    if (car1.id_type == 0)
        printf("ID: %d\n", car1.id.id_num);
    else
        printf("ID: %s\n", car1.id.VIN);

    // A union can also contain a structure.

    return 0;
}
