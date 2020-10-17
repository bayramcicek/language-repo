// C11 standard
// created by cicek on Oct 17, 2020 11:21 AM

#include <stdio.h>
#include <stdlib.h>

// http://www.cplusplus.com/reference/cstdio/printf/

void bir_boyutlu_dizi_olustur(int **fun_dizi, int eleman_sayisi) {
    *fun_dizi = (int *) malloc(sizeof(int) * eleman_sayisi);
    for (int i = 0; i < eleman_sayisi; ++i) {
        *(*fun_dizi + i) = rand() % 100;
    }
}

// 1 boyutlu array dinamik
int main() {

    int *dizi;
    int eleman_sayisi = 6;

    // sizeof(int) -> C'de int her zaman 4byte değildir.
    dizi = (int *) malloc(sizeof(int) * eleman_sayisi);

    for (int i = 0; i < eleman_sayisi; ++i) {
        *(dizi + i) = rand() % 100;
    }

    for (int x = 0; x < eleman_sayisi; ++x) {
        printf("%d: %d\n", x, dizi[x]);
    }
/*  0: 83
    1: 86
    2: 77
    3: 15
    4: 93
    5: 35   */

    // fonksiyon içerisinde
    int *fun_dizi;
    int fun_eleman_sayisi = 5;

    bir_boyutlu_dizi_olustur(&fun_dizi, fun_eleman_sayisi);
    printf("fun dizi:\n");
    for (int x = 0; x < fun_eleman_sayisi; ++x) {
        printf("%d: %d\n", x, fun_dizi[x]);
    }

    /*  fun dizi:
        0: 86
        1: 92
        2: 49
        3: 21
        4: 62   */

    return 0;
}
