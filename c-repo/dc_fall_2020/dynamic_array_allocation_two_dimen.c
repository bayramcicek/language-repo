// C11 standard
// created by cicek on Oct 17, 2020 1:05 PM

#include <stdio.h>
#include <stdlib.h>

void iki_boyutlu_dizi_olustur(int ***fun_dizi, int satir, int sutun) {
    *fun_dizi = (int **) malloc(sizeof(int *) * satir);
    for (int i = 0; i < satir; ++i) {
        *(*fun_dizi + i) = (int *) malloc(sizeof(int) * sutun);
        for (int j = 0; j < sutun; ++j) {
            *(*(*fun_dizi + i) + j) = rand() % 100;
        }
    }

    for (int i = 0; i < satir; ++i) {
        printf("\n");
        for (int j = 0; j < sutun; ++j) {
            printf("%d\t", *(*(*fun_dizi + i) + j));
        }
    }
}

int main(int argc, char **argv) {

    int **dizi;
    int satir_sayisi = 5;
    int sutun_sayisi = 4;

    dizi = (int **) malloc(sizeof(int *) * satir_sayisi);

    for (int i = 0; i < satir_sayisi; ++i) {
        *(dizi + i) = (int *) malloc(sizeof(int) * sutun_sayisi);
        printf("\n");
        for (int j = 0; j < sutun_sayisi; ++j) {
            *(*(dizi + i) + j) = rand() % 100;
            printf("%d\t", *(*(dizi + i) + j));
        }
    }

    int **fun_dizi;
    int fun_satir_sayisi = 5;
    int fun_sutun_sayisi = 4;

    iki_boyutlu_dizi_olustur(&fun_dizi, fun_satir_sayisi, fun_sutun_sayisi);


    return 0;
}
