/* 
 * File:   main.c
 * Author: BM
 *
 * Created on 26 Kasım 2014 Çarşamba, 12:59
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct CELL {  // liste dügümleri
    char *anahtar;
    struct CELL *next;
};

struct table_node {
    int counter;  // kayıt sayısı
    struct CELL *header;  // liste başı
};

struct hash_tablosu {  // 4+4+4 = 12byte
    struct table_node *tablo_basi;
    int tablo_uzunlugu;
    // table size 'ın yarısından küçük en büyük asal sayı
    int multiplier;  // hash fonk. da kullanılıyor.
};

unsigned hash(char *anahtar, int multiplier, int table_size) {
    int i = 0;
    unsigned int value = 0;
    while (anahtar[i]) {
        // value 0 ile (tablesize-1) arasında
        value = (anahtar[i] + multiplier * value) % table_size;
        i++;
    }
    return value;
}

int lookup(char *anahtar, struct CELL *l) {
    if (l == NULL) return 0;
    else if (!strcmp(anahtar, l->anahtar)) return 1;
    else return lookup(anahtar, l->next);
}

int insert(char *anahtar, struct CELL **l) {  // listeye eleman ekleem aynısı
    if (*l == NULL) {  // liste başı
        *l = (struct CELL *) malloc(sizeof(struct CELL));
        (*l)->anahtar = (char *) malloc((strlen(anahtar) + 1) * sizeof(char));
        strcpy((*l)->anahtar, anahtar);
        (*l)->next = NULL;
        return 1;
        // strcmp -> karakterler aynı ise 0,
        // ilk param 2.ci param den önce ise alfabede -> -1, sonra gelir ise 1
    } else if (strcmp(anahtar, (*l)->anahtar))  // böylece aynı kelime eklenmeyecek.
        return insert(anahtar, &((*l)->next));
    else return 0;
}

void print_list(struct CELL *l) {  // listenin headerı
    if (l != NULL) {  // listenin headerı NULL değilse
        printf("%s ", l->anahtar);
        print_list(l->next);
    }
}

void initialize_hash_table(struct hash_tablosu **hash_table,
                           int multiplier, int table_size) {
    int i;
    *hash_table = (struct hash_tablosu *) malloc(sizeof(struct hash_tablosu));
    if (*hash_table == NULL) {
        printf(" Hash tablosu icin yer ayrilamnadi... Hata!!!");
        exit(1);
    }
    (*hash_table)->tablo_basi =
            (struct table_node *) malloc(table_size * sizeof(struct table_node));
    if ((*hash_table)->tablo_basi == NULL) {
        printf(" Hash tablosu icin yer ayrilamnadi... Hata!!!");
        exit(1);
    }
    (*hash_table)->tablo_uzunlugu = table_size;
    (*hash_table)->multiplier = multiplier;

    for (i = 0; i < table_size; i++) {
        ((*hash_table)->tablo_basi + i)->counter = 0;
        ((*hash_table)->tablo_basi + i)->header = NULL;
    }
}

void insert_hash_table(struct hash_tablosu *hash_table,
                       char *anahtar) {
    // 0 ile tablesize-1 arasında değer döndü
    int hash_index = hash(anahtar, hash_table->multiplier,
                          hash_table->tablo_uzunlugu);
    if (insert(anahtar, &((hash_table->tablo_basi + hash_index)->header)))
        (hash_table->tablo_basi + hash_index)->counter++;
}

void print_hash_table(struct hash_tablosu *hash_table) {
    if (hash_table) {
        int index;
        printf("----- HASH TABLOSU -----\n");
        for (index = 0; index < hash_table->tablo_uzunlugu; index++) {
            printf("%5d : (%2d) ", index, (hash_table->tablo_basi + index)->counter);
            //  printf("%5d : (%2d) ",index,hash_table->tablo_basi[index].counter);
            print_list((hash_table->tablo_basi + index)->header);
            printf("\n");
        }
    } else printf("Hash Tablosu Bos ...\n");
}

int delete_dugum_liste(struct CELL **header, char *anahtar) {
    // normal düğüm silmek
    struct CELL *simdiki, *onceki;
    simdiki = *header;
    while (simdiki && strcmp(simdiki->anahtar, anahtar)) {
        onceki = simdiki;
        simdiki = simdiki->next;
    }

    // simdiki NULL ise - yani dügüm sonuna gelmişiz - anahtar hash tablosunda yok
    if (!simdiki) return 0;
    if (simdiki == *header) { // liste başını silmek
        *header = (*header)->next;
    } else {
        onceki->next = simdiki->next;
    }
    free(simdiki->anahtar);
    free(simdiki);
    return 1;
}

void delete_hash_table(struct hash_tablosu *table, char *anahtar) {
    // eğer varsa hash index bul
    int hash_index = hash(anahtar, table->multiplier, table->tablo_uzunlugu);
    if (delete_dugum_liste(&((table->tablo_basi + hash_index)->header), anahtar))
        (table->tablo_basi + hash_index)->counter--;
}

void liste_yok_et(struct CELL **liste_basi) {
    struct CELL *onceki;
    while (*liste_basi) {
        onceki = *liste_basi;
        *liste_basi = (*liste_basi)->next;
        free(onceki->anahtar);
        free(onceki);
    }
}

void hash_table_yok_et(struct hash_tablosu **hash_table) {
    int index;
    if (*hash_table) {
        for (index = 0; index < (*hash_table)->tablo_uzunlugu; index++)
            liste_yok_et(&((*hash_table)->tablo_basi + index)->header);
        free((*hash_table)->tablo_basi);
        free(*hash_table);
    }
    *hash_table = NULL;  // C derleyicileri farklı davranabilir. o yüzden her zaman
    // null atamak iyi olur. C derleyicileri daha esnektir.
}

void hash_table_buyut(struct hash_tablosu **htable,
                      int multiplier, int tablo_uzunlugu) {
    int i;
    struct CELL *liste_basi;
    struct hash_tablosu *yeni_tablo;

    if (*htable) {  // eski tablo null olmamalı
        initialize_hash_table(&yeni_tablo, multiplier, tablo_uzunlugu);
        for (i = 0; i < (*htable)->tablo_uzunlugu; i++) {
            liste_basi = ((*htable)->tablo_basi + i)->header;
            while (liste_basi != NULL) {
                insert_hash_table(yeni_tablo, liste_basi->anahtar);
                liste_basi = liste_basi->next;
            }
        }  // tüm eskileri yeniye kopyaladık
        hash_table_yok_et(htable);  // eski tabloyu sil
        *htable = yeni_tablo;
        /*yeni alan oluşturup eski kayıtları kopyalamak iyi bi şey değil
         * var olan düğümleri yeni tabloya bağlamak daha iyi olacaktır. */
    }
}

void sil(struct hash_tablosu *htable, char *anahtar) {
    struct CELL *header, *x;

    header = (htable->tablo_basi + hash(anahtar, htable->multiplier, htable->tablo_uzunlugu))->header;
    x = header;
    while (x != NULL) {
        if (strcmp(x->anahtar, anahtar) == 0) {
            x = header;
            break;
        }
        x = x->next;
    }
    if (x == header) {
        while (header != NULL) {
            x = header;
            header = header->next;
            free(x->anahtar);
            free(x);
        }
        (htable->tablo_basi + hash(anahtar, htable->multiplier, htable->tablo_uzunlugu))->header = NULL;
    }
}

// ödev1
//hash_table_buyut fonk. iyileştir.

// ödev2
int aynimi(struct hash_tablosu *h1, struct hash_tablosu *h2) {
    // anahtarlar aynen varsa, tablo uzunlukları farklı olabilir
}

// ödev3
// verilen anahtar tabloda var mı

int main(int argc, char **argv) {
    struct hash_tablosu *htable = NULL;

    initialize_hash_table(&htable, 3, 5);
    print_hash_table(htable);
    /*
    0 : ( 0)
    1 : ( 0)
    2 : ( 0)
    3 : ( 0)
    4 : ( 0) */

//    insert_hash_table(htable, "kadayif");
//    insert_hash_table(htable, "kadayif");  // eklenmez
//    print_hash_table(htable);
//    /*
//    0 : ( 0)
//    1 : ( 0)
//    2 : ( 0)
//    3 : ( 0)
//    4 : ( 1) kadayif
//      */

//    insert_hash_table(htable, "balıkesir");
//    insert_hash_table(htable, "Istanbul");
//    insert_hash_table(htable, "adana");
//    print_hash_table(htable);
//    /* 2 : ( 2) Istanbul adana -> direkt liste sonuna ekler */
//
//    /*olmayan bişey silersen işlem yapmaz*/
//    delete_hash_table(htable, "Istanbul");
//    print_hash_table(htable); /* 2 : ( 1) adana  */

    insert_hash_table(htable, "Trabzonspor");
    insert_hash_table(htable, "kadayif");
    insert_hash_table(htable, "gundogdu");
    insert_hash_table(htable, "besiktas");
    insert_hash_table(htable, "baklava");
    insert_hash_table(htable, "dembaba");
    insert_hash_table(htable, "cardoza");

    print_hash_table(htable);

    /* tabloya eleman eklendikçe listelerin uzunluğu artıyor.
     * böylece ekleme ve silmeler daha fazla zaman alıyor
     * o zaman tablo buyutunu arttır -> ortalama liste boyutları azalır
     * ve ekleme çıkarma arama daha hızlı olur. */

    hash_table_buyut(&htable, 17, 19);
    print_hash_table(htable);

//    insert_hash_table(htable, "ankara"); // büyük küçük harf ascii değerleri farklıdır.
//    insert_hash_table(htable, "Ankara");
//    print_hash_table(htable);

    hash_table_yok_et(&htable);
    print_hash_table(htable);

//    sil(htable, "kadayif");
//    sil(htable, "Ankara");
//    print_hash_table(htable);
    return (EXIT_SUCCESS);
}

