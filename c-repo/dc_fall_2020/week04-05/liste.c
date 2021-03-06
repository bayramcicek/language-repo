/* 
 * File:   main.c
 * Author: BM
 *
 * Created on 01 Ekim 2014 Çarşamba, 12:59
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */

struct dugum {
    int icerik;
    struct dugum *sonraki;
};

struct dugum *hucre_olustur(int icerik) {
    struct dugum *a;
    a = (struct dugum *) malloc(sizeof(struct dugum));
    if (a == NULL) {
        printf("Heap alaninda yer ayrilamadi ...\n");
        exit(1);
    }
    a->icerik = icerik;
    a->sonraki = NULL;
    return a;
}

void liste_basina_ekle(int icerik, struct dugum **liste_basi) {
    struct dugum *a = hucre_olustur(icerik);
    a->sonraki = *liste_basi;
    *liste_basi = a;
}

void liste_sonuna_ekle(int icerik, struct dugum **liste_basi) {
    struct dugum *a = hucre_olustur(icerik);
    if (*liste_basi == NULL) {
        a->sonraki = *liste_basi;
        *liste_basi = a;
    } else {
        struct dugum *x = *liste_basi;
        while (x->sonraki != NULL) {
            x = x->sonraki;
        }
        x->sonraki = a;
    }
}

void liste_yaz(struct dugum *liste_basi) {
    while (liste_basi != NULL) {
        printf("%4d ", liste_basi->icerik);
        liste_basi = liste_basi->sonraki;
    }
    printf("\n");
}

void liste_yaz_recursive(struct dugum *liste_basi) {
    if (liste_basi != NULL) {
        printf("%4d ", liste_basi->icerik);
        liste_yaz_recursive(liste_basi->sonraki);
    } else {
        printf("\n");
    }
}

void tersten_liste_yaz_recursive(struct dugum *liste_basi) {

    if (liste_basi != NULL) {
        tersten_liste_yaz_recursive(liste_basi->sonraki);
        printf("%4d ", liste_basi->icerik);
    }

}

void liste_yok_et(struct dugum **liste_basi) {
    struct dugum *simdiki;
    while (*liste_basi != NULL) {
        simdiki = (*liste_basi);
        *liste_basi = (*liste_basi)->sonraki;
        free(simdiki);
//        free(*liste_basi);
//        *liste_basi = (*liste_basi)->sonraki;
    }
}

void ilk_ve_son_dugumleri_sil(struct dugum **liste_basi) {
    if (*liste_basi == NULL) {
        printf("<Liste bos>");
    } else if ((*liste_basi)->sonraki == NULL) {
        printf("<Liste tek elemanli>");
        struct dugum *temp = (*liste_basi);
        *liste_basi = NULL;
        free(temp);
    } else { // en az 2 elemanli
        struct dugum *ilk_node;

        // ilk dugumu sil
        ilk_node = (*liste_basi);
        *liste_basi = (*liste_basi)->sonraki;
        free(ilk_node);

        // 2 elemanli ise, kalan tek elemani sil
        if ((*liste_basi)->sonraki == NULL) {
            struct dugum *temp = (*liste_basi);
            *liste_basi = NULL;
            free(temp);
        } else { // en az 3+ elemanli
            struct dugum *sondan_bir_onceki;
            struct dugum *son_node;

            son_node = (*liste_basi);

            while ((son_node->sonraki) != NULL) {
                sondan_bir_onceki = son_node;
                son_node = son_node->sonraki;
            }

            // son dugumu sil
            sondan_bir_onceki->sonraki = NULL;
            free(son_node);
        }
    }
}

void liste_sirali_ekle(int icerik, struct dugum **liste_basi) {
    struct dugum *a, *b, *eklenen;
    b = *liste_basi;
    while (b != NULL && b->icerik <= icerik) {
        if (b->icerik == icerik) return;
        a = b;
        b = b->sonraki;
    }
    eklenen = hucre_olustur(icerik);
    if (b == *liste_basi) {
        eklenen->sonraki = *liste_basi;
        *liste_basi = eklenen;
    } else {
        a->sonraki = eklenen;
        eklenen->sonraki = b;

    }
}

void liste_eleman_sil(int silinen, struct dugum **liste_basi) {
    struct dugum *temp = *liste_basi;
    struct dugum *once;

    while (temp != NULL && temp->icerik != silinen) {
        once = temp;
        temp = temp->sonraki;
    }
    if (temp == NULL) return;
    else {
        if (temp == *liste_basi) *liste_basi = (*liste_basi)->sonraki;
        else once->sonraki = temp->sonraki;
        free(temp);
    }

}

// insertion sort
void liste_sirala(struct dugum **liste_basi) {
    struct dugum *a, *b, *c, *d;

    if (*liste_basi == NULL || (*liste_basi)->sonraki == NULL) return;

    d = (*liste_basi)->sonraki;
    (*liste_basi)->sonraki = NULL;

    // d -> eklenecek yeni düğim var mı.
    while (d != NULL) {
        c = d;
        d = d->sonraki;
        b = *liste_basi;
        // sıralanmış listenin içinde gez
        while (b != NULL && b->icerik < c->icerik) {
            a = b;
            b = b->sonraki;
        }
        // sıralanmış listenin başı
        if (b == *liste_basi) {
            c->sonraki = *liste_basi;
            *liste_basi = c;
            // sıralanmış listenin ortasına veya sonuna
        } else {
            a->sonraki = c;
            c->sonraki = b;
        }
    }
}

void liste_ters_cevir(struct dugum **liste_basi) {

    struct dugum *a, *b;

    a = NULL;
    while ((*liste_basi) != NULL) {
        b = *liste_basi;
        (*liste_basi) = (*liste_basi)->sonraki;
        b->sonraki = a;
        a = b;
    }
    *liste_basi = a;
}

int ardisik_mi(struct dugum *liste_basi, int anahtar1, int anahtar2) {
    struct dugum *onceki;
    onceki = NULL;
    while (liste_basi != NULL) {
        if (liste_basi->icerik == anahtar1) break;
        onceki = liste_basi;
        liste_basi = liste_basi->sonraki;
    }
    if (liste_basi != NULL && (onceki != NULL && onceki->icerik == anahtar2 ||
                               liste_basi->sonraki != NULL && liste_basi->sonraki->icerik == anahtar2))
        return 1;
    return 0;
}

// ödev - iteratif olarak yaz
void liste_tersten_yaz(struct dugum *liste_basi) {

    // liste boşsa çık
    if (liste_basi == NULL) exit(1);

    struct dugum *temp = liste_basi;
    int uzunluk = 0;

    // liste uzunluğunu bul
    while (temp != NULL) {
        temp = temp->sonraki;
        uzunluk++;
    }

    int elemanlar[uzunluk];
    int i = 0;

    // listeye elemanları ata
    while (liste_basi != NULL) {
        elemanlar[i] = liste_basi->icerik;
        liste_basi = liste_basi->sonraki;
        i++;
    }

    // tersten yaz
    printf("ters liste: \n");
    for (int j = uzunluk - 1; j >= 0; --j) {
        printf("%4d ", elemanlar[j]);
    }
}

int main(int argc, char **argv) {

    struct dugum *liste1 = NULL;

    liste_basina_ekle(20, &liste1);
    liste_basina_ekle(30, &liste1);
    liste_basina_ekle(200, &liste1);
//
    liste_sonuna_ekle(40, &liste1);
    liste_sonuna_ekle(80, &liste1);
    liste_sonuna_ekle(500, &liste1);

    liste_yaz(liste1);

////    liste_yaz_recursive(liste1);
////    tersten_liste_yaz_recursive(liste1);
//    liste_tersten_yaz(liste1);
//
//    printf("\n");
////    printf("%d\n", ardisik_mi(liste1, 30, 20));
////    liste_yok_et(&liste1);
//    liste_sirala(&liste1);
//    liste_yaz(liste1);
//
//    liste_eleman_sil(80, &liste1);
//    liste_yaz(liste1);
//
//    liste_yok_et(&liste1);
    ilk_ve_son_dugumleri_sil(&liste1);
    printf("\n----- \n");
    liste_yaz(liste1);
    printf("*******\n");

    // 3'ü de aynıdır.
    if (liste1 == NULL) printf("liste bos!!!\n");
    if (liste1 == 0) printf("liste bos!!!\n");
    if (!liste1) printf("liste bos!!!\n");


    return (EXIT_SUCCESS);
}