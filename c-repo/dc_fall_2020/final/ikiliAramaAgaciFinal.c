#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */

#define SENTINEL -100000000

struct dugum {
    int anahtar;
    struct dugum *sol_link;
    struct dugum *sag_link;
};

struct ikili_arama_agaci {
    struct dugum *kok;
};

void ikili_arama_agaci_olustur(struct ikili_arama_agaci **agac) {
    *agac = (struct ikili_arama_agaci *) malloc(sizeof(struct ikili_arama_agaci));
    if (*agac == NULL) {
        printf("Heapte gerekli yer ayrilamadi... exit ...\n");
        exit(1);
    }
    (*agac)->kok = NULL;
}

int ikili_agac_bosmu(struct ikili_arama_agaci *agac) {
    if (agac->kok == NULL) return 1;
    else return 0;
}

struct dugum *dugum_olustur(int icerik) {
    struct dugum *d = (struct dugum *) malloc(sizeof(struct dugum));
    if (d == NULL) {
        printf("Heapte gerekli yer ayrilamadi... exit ...\n");
        exit(1);
    }
    d->anahtar = icerik; //(*d).icerik=icerik;
    d->sol_link = d->sag_link = NULL;
    return d;
}

void ekle(struct ikili_arama_agaci *agac, int icerik) {
    struct dugum *dugum;
    struct dugum *d;
    struct dugum *geri;

    d = agac->kok;
    while (d != NULL) { // geri, eklenecek düğümün parent'ı
        geri = d;
        if (icerik < d->anahtar) d = d->sol_link;
        else if (icerik > d->anahtar) d = d->sag_link;
        else return;
    } // bu bittiğinde d -> NULL olur
    dugum = dugum_olustur(icerik);
    if (agac->kok == NULL) { // kök yok, oluştur.
        agac->kok = dugum;
        return;
    }
    // en az 1 eleman var
    if (icerik < geri->anahtar) geri->sol_link = dugum;
    else geri->sag_link = dugum;

}

void inorder_yardimci(struct dugum *kok) {
    if (kok == NULL) return;
    inorder_yardimci(kok->sol_link);
    printf("%4d ", kok->anahtar);
    inorder_yardimci(kok->sag_link);
}

void inorder(struct ikili_arama_agaci *agac) {
    if (agac == NULL) return;
    inorder_yardimci(agac->kok);
    printf("\n");
}

void preorder_yardimci(struct dugum *kok) {

    if (kok == NULL) return;
    printf("%4d ", kok->anahtar);
    preorder_yardimci(kok->sol_link);
    preorder_yardimci(kok->sag_link);
}

void preorder(struct ikili_arama_agaci *agac) {
    if (agac == NULL) return;
    preorder_yardimci(agac->kok);
    printf("\n");
}

void postorder_yardimci(struct dugum *kok) {
    if (kok == NULL) return;
    postorder_yardimci(kok->sol_link);
    postorder_yardimci(kok->sag_link);
    printf("%4d ", kok->anahtar);
}

void postorder(struct ikili_arama_agaci *agac) {
    if (agac == NULL) return;
    postorder_yardimci(agac->kok);
    printf("\n");
}

int dugum_sayisi(struct dugum *kok) {
    if (kok == NULL) return 0;
    return 1 + dugum_sayisi(kok->sol_link) + dugum_sayisi(kok->sag_link);
}

int yaprak_sayisi(struct dugum *kok) {
    if (kok == NULL) return 0;
    if (kok->sol_link == NULL && kok->sag_link == NULL) return 1;
    else return yaprak_sayisi(kok->sol_link) + yaprak_sayisi(kok->sag_link);
}

void sil(struct ikili_arama_agaci *agac, int silinen) {

    struct dugum *d = agac->kok;
    struct dugum *parent = NULL;
    struct dugum *d1, *d2;
    int sol;
    while (d != NULL) {
        if (silinen < d->anahtar) {
            parent = d;
            d = d->sol_link;
            sol = 1;
        } else if (silinen > d->anahtar) {
            parent = d;
            d = d->sag_link;
            sol = 0;
        } else break;
    }
    if (d == NULL) return; // silinecek düğüm ağaçta yoksa
    if (d->sol_link == NULL) { // silinen dugumun solu bos
        if (parent == NULL) agac->kok = d->sag_link; // solu boş olan rootu siliyorsun
        else { // silinen düğüm root değil ama solu boş
            if (sol == 1) parent->sol_link = d->sag_link;
            else parent->sag_link = d->sag_link;
        }
    } else if (d->sag_link == NULL) {  // silinen dugumun sagi bos
        if (parent == NULL) agac->kok = d->sol_link;
        else {
            if (sol == 1) parent->sol_link = d->sol_link;
            else parent->sag_link = d->sol_link;
        }
    } else { // silinen dugumun hem sagi hem de solu dolu
        // silinencek dugumun solunun en sagina git
        // en sagdaki dugum silinen dugumun konumunu alir
        d1 = d->sol_link;
        d2 = NULL;
        while (d1->sag_link != NULL) {
            d2 = d1;
            d1 = d1->sag_link;
        }
        if (d2 != NULL) {
            d2->sag_link = d1->sol_link;
            d1->sol_link = d->sol_link;
        }
        d1->sag_link = d->sag_link;
        if (parent == NULL) agac->kok = d1; // agacin koku degisti
        else {
            if (sol == 1) parent->sol_link = d1;
            else parent->sag_link = d1;
        }
    }

//    else { // silinen dugumun hem sagi hem de solu dolu
//        // silinencek dugumun saginin en soluna git
//        // en soldaki dugum silinen dugumun konumunu alir
//        d1 = d->sag;
//        d2 = NULL;
//        while (d1->sol != NULL) {
//            d2 = d1;
//            d1 = d1->sol;
//        }
//        if (d2 != NULL) {
//            d2->sol = d1->sag;
//            d1->sag = d->sag;
//        }
//        d1->sol = d->sol;
//        if (parent == NULL) agac->kok = d1; // agacin koku degisti
//        else {
//            if (sol == 1) parent->sol = d1;
//            else parent->sag = d1;
//        }
//    }
    free(d);
}

void yoket(struct dugum **kok) {
    if (*kok != NULL) {
        yoket(&(*kok)->sol_link);
        yoket(&(*kok)->sag_link);
        free(*kok);
        *kok = NULL;
    }
}

int foo(struct dugum *kok) { // ic dugum sayisi
    if (kok == NULL) return 0;
    else if (kok->sol_link != NULL || kok->sag_link != NULL)
        return 1 + foo(kok->sol_link) + foo(kok->sag_link);
    else return 0;
}

int foo_ne(struct dugum *kok1, struct dugum *kok2) {
    if (kok1 == NULL && kok2 == NULL) return 1;
    if (!kok1 || !kok2) return 0;
    return foo_ne(kok1->sol_link, kok2->sol_link) &&
           foo_ne(kok1->sag_link, kok2->sag_link);
}

int en_kisa_yol_uzunlugu(struct dugum *root) {
    int sol, sag, kucuk, buyuk;
    if (root == NULL) return 0;
    //  if (root->sol==NULL && root->sag==NULL) return 1;
    sol = en_kisa_yol_uzunlugu(root->sol_link);
    sag = en_kisa_yol_uzunlugu(root->sag_link);
    if (sol < sag) {
        kucuk = sol;
        buyuk = sag;
    } else {
        kucuk = sag;
        buyuk = sol;
    }
    if (root->sol_link != NULL && root->sag_link != NULL) return kucuk + 1;
    return buyuk + 1;
}

int ikili_agac_dengeli_mi(struct dugum *kok) {
    int sol_yukseklik, sag_yukseklik;
    static int kontrol, kok_tut;

    // o anki düğüm bos ise
    if (kok == NULL) return 0;

    // demek ki en az 1 düğüm var.
    if (kontrol != -1) {  // kökün içeriğini tut
        kok_tut = kok->anahtar;
        kontrol = -1;  // bu koşula sadece 1 defa girdik
    }

    // düğümün solu ve sağı boş ise
    if (kok->sol_link == NULL && kok->sag_link == NULL) return 1;

    sol_yukseklik = ikili_agac_dengeli_mi(kok->sol_link);
    sag_yukseklik = ikili_agac_dengeli_mi(kok->sag_link);

    if (sol_yukseklik == -1 ||
        sag_yukseklik == -1 ||
        abs(sol_yukseklik - sag_yukseklik) > 1) {
        return 0;  // en az 1 düğümün yüksekliği dengesiz ise çık
    } else {
        /* eğer bu değişkenler eşit ise köke kadar tüm düğümler dengelidir.
         * öyleyse ağaç dengelidir. */
        if (kok->anahtar == kok_tut) return 1;

        // hangi yükseklik büyükse onu döndür.
        if (sol_yukseklik > sag_yukseklik) return sol_yukseklik + 1;
        else return sag_yukseklik + 1;
    }
}


/*Buna göre iklili bir ağaçta tek çocuğa sahip olan düğümlerin sayısını bulan ve
 * tanımlaması aşağıdaki gibi olan fonksiyonu yazınız?*/
int tek_cocuklu_dugum_sayisi(struct dugum *kok) {
    if (kok == NULL) return 0;

    // o anki düğümün sadece sol çocuğu varsa.
    if (kok->sol_link != NULL && kok->sag_link == NULL) {
        return 1 + tek_cocuklu_dugum_sayisi(kok->sol_link);
    } else if (kok->sag_link != NULL && kok->sol_link == NULL) {  // o anki düğümün sadece sağ çocuğu varsa.
        return 1 + tek_cocuklu_dugum_sayisi(kok->sag_link);
    } else {  // işlemleri recursive olarak yap ve sonucu geri gönder.
        return tek_cocuklu_dugum_sayisi(kok->sol_link) + tek_cocuklu_dugum_sayisi(kok->sag_link);
    }
}

int main(int argc, char **argv) {
    struct ikili_arama_agaci *agac;
    ikili_arama_agaci_olustur(&agac);

    ekle(agac, 50);
    ekle(agac, 40);
    ekle(agac, 60);
    ekle(agac, 70);
    ekle(agac, 65);
    ekle(agac, 66);
    ekle(agac, 41);
    ekle(agac, 39);
//    preorder(agac);
    int a = tek_cocuklu_dugum_sayisi(agac->kok);
    printf("res: %d", a);

//    int dengelimi = ikili_agac_dengeli_mi(agac->kok);
//    printf("dengeli mi: %d\n", dengelimi);

//  printf("Ic dugum sayisi: %4d\n",foo(agac->kok));
//   printf("En kisa yol uzunlugu: %d\n",en_kisa_yol_uzunlugu(agac->kok));

    return (EXIT_SUCCESS);
}
