// C11 standard
// created by cicek on Nov 07, 2020 5:32 PM

#include <stdio.h>
#include <stdlib.h>

// heapte tutulur.
struct hucre {
    int icerik; // 4byte
    // sonraki liste elemanına işaret eder. (adres tutar)
    struct hucre *sonraki;  // 4byte
};

// örnek
struct id {
    char *ad;
    char *soyad;
    char *kimlik_no;
    struct id *sonraki; // sonraki liste elemanına işaret eder. (adres tutar)
};

// biz sadece ilk düğümün adresini (liste_basi) stack 'te tutuyoruz.

int main(int argc, char **argv) {

    struct hucre *ptr;
    ptr = (struct hucre *) malloc(sizeof(struct hucre)); // hucre 8 byte tutuyor.

    ptr->icerik = 100;
    ptr->sonraki = NULL;

    struct id *ptrq;
    ptrq = (struct id *) malloc(sizeof(struct id));
    printf("%lu\n", sizeof(ptrq));
    printf("%p\n", ptrq);

//    printf("%lu\n", sizeof(ptrq->ad));
//    printf("%lu\n", sizeof(ptrq->soyad));
//    printf("%lu\n", sizeof(ptrq->kimlik_no));
//    printf("%lu\n", sizeof(ptrq->sonraki));
    printf("%lu\n", sizeof(ptr->icerik)); // 4
    printf("%lu\n", sizeof(ptr->sonraki)); // 8
    printf("%lu\n", sizeof(struct hucre)); // 16

    return 0;
}
