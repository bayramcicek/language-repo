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
    char *kimlik_no;
    char *ad;
    char *soyad;
    struct id *sonraki; // sonraki liste elemanına işaret eder. (adres tutar)
};

// biz sadece ilk düğümün adresini (liste_basi) stack 'te tutuyoruz.

int main(int argc, char **argv) {

    struct hucre *ptr;
    ptr = (struct hucre *) malloc(sizeof(struct hucre)); // hucre 8 byte tutuyor.

    ptr->icerik = 100;
    ptr->sonraki = NULL;

    return 0;
}
