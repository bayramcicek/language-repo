/* 
 * File:   main.c
 * Author: BM
 *
 * Created on 26 Kasım 2014 Çarşamba, 12:59
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct cell {  // liste dügümleri
    char *anahtar;
    struct cell *next;
};

struct table_node {
    int count;  // kayıt sayısı
    struct cell *header;  // liste başı
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

int lookup(char *anahtar, struct cell *l) {
    if (l == NULL) return 0;
    else if (!strcmp(anahtar, l->anahtar)) return 1;
    else return lookup(anahtar, l->next);
}

int insert(char *anahtar, struct cell **l) {  // listeye eleman ekleme aynısı
    if (*l == NULL) {  // liste başı
        *l = (struct cell *) malloc(sizeof(struct cell));
        (*l)->anahtar = (char *) malloc((strlen(anahtar) + 1) * sizeof(char));
        strcpy((*l)->anahtar, anahtar);
        (*l)->next = NULL;
        return 1;
        // strcmp -> karakterler aynı ise 0,
        // ilk param 2.ci param den önce ise alfabede -> -1, sonra gelir ise 1
    } else return insert(anahtar, &((*l)->next)); // aynı kelime eklenebilir hale getirildi.

}

void print_list(struct cell *l) {  // listenin headerı
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
        ((*hash_table)->tablo_basi + i)->count = 0;
        ((*hash_table)->tablo_basi + i)->header = NULL;
    }
}

void insert_hash_table(struct hash_tablosu *hash_table,
                       char *anahtar) {
    // 0 ile tablesize-1 arasında değer döndü
    int hash_index = hash(anahtar, hash_table->multiplier,
                          hash_table->tablo_uzunlugu);
    if (insert(anahtar, &((hash_table->tablo_basi + hash_index)->header)))
        (hash_table->tablo_basi + hash_index)->count++;
}

void print_hash_table(struct hash_tablosu *hash_table) {
    if (hash_table) {
        int index;
        printf("\n----- HASH TABLOSU -----\n");
        for (index = 0; index < hash_table->tablo_uzunlugu; index++) {
            printf("%5d : (%2d) ", index, (hash_table->tablo_basi + index)->count);
            //  printf("%5d : (%2d) ",index,hash_table->tablo_basi[index].count);
            print_list((hash_table->tablo_basi + index)->header);
            printf("\n");
        }
    } else printf("\n\nHash Tablosu Bos ...\n");
}

int delete_dugum_liste(struct cell **header, char *anahtar) {
    // normal düğüm silmek
    struct cell *simdiki, *onceki;
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
        (table->tablo_basi + hash_index)->count--;
}

void liste_yok_et(struct cell **liste_basi) {
    struct cell *onceki;
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
    struct cell *liste_basi;
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
    struct cell *header, *x;

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

/*
 * Buna göre, düğüm tanımlaması struct cell olan bağlı bir listedeki düğümleri hash tablosuna yerleştiren
 * ve tanımlaması aşağıda verilen fonksiyonu yazınız.
 *
   Not: Bu fonksiyonun kodlanmasında malloc fonksiyonu çağrımı yapmamanız gerekir.
   Sadece yapmanız gereken şey, (bağlı liste ile hash tablosundaki listelerin düğüm tanımlaması aynı olduğu için)
   bağlı listenin düğümlerini başlangıçta boş olan hash tablosuna yerleştirmenizdir.
   Fonksiyondan geriye dönüldüğünde liste, boş liste şeklini almalıdır.
 *
 * */

//// listeyi pointer ile hash tablosuna taşı
//void listeyi_hash_tablosuna_donusturme(struct hash_tablosu *htable, struct cell **liste_basi) {
//    struct cell **temp = liste_basi;
//
//    while (*temp != NULL) {  // gerçek listeyi değiştirir
//        printf(":%s ", (*temp)->anahtar);
//        *temp = (*temp)->next;
//    }
//}

//// listeyi pointer ile hash tablosuna taşı
//void listeyi_hash_tablosuna_donusturme(struct hash_tablosu *htable, struct cell **liste_basi) {
//    struct cell *temp = *liste_basi;
//
//    while (temp != NULL) {  // gerçek listeyi değiştirmeden dolaşır.
//        printf(":%s ", temp->anahtar);
//        temp = temp->next;
//    }
//}

// listeyi pointer ile hash tablosuna taşı
void listeyi_hash_tablosuna_donusturme(struct hash_tablosu *htable, struct cell **liste_basi) {

    /* listenin tüm elemanlarını dolaş.
     * (bu while bittiğinde liste tamamen boş kalır.) */
    while (*liste_basi != NULL) {
        struct cell *eklenecek_node = *liste_basi;

        // liste_basi sonraki düğümü göstersin.
        *liste_basi = (*liste_basi)->next;
        // eklenecek_node 'u listeden kopar.
        eklenecek_node->next = NULL;

        // hash_index 'i bul.
        int hash_index = hash(eklenecek_node->anahtar,
                              htable->multiplier,
                              htable->tablo_uzunlugu);

        // o anki header 'ı daha kolay göstermek için current_header 'a ata.
        struct cell **current_header = &((htable->tablo_basi + hash_index)->header);
        // printf("index %d: %s\n", hash_index, eklenecek_node->anahtar);

        /* eğer hash tablosundaki o anki bağlı liste boş ise
         * direkt liste düğümünü tabloya bağla. */
        if (*current_header == NULL) {
            *current_header = eklenecek_node;
            (htable->tablo_basi + hash_index)->count++;
        } else { // hash tablosundaki o anki index'inde en az 1+ eleman var.
            struct cell *temp_node = *current_header;

            // hash tablosundaki liste düğümlerini dolaş.
            while (temp_node != NULL) {
                /* eğer tablodaki anlık düğüm anahtarı ile
                 * eklenecek_node 'un anahtarı aynı ise işlem yapmadan döngüden çık.*/
                if (!(strcmp(temp_node->anahtar, eklenecek_node->anahtar))) {
                    break;
                }

                /* eğer tabloda o anki düğümün next 'i NULL ise
                 * listenin sonuna gelmiş oluruz. öyleyse;
                 * son düğümün next 'ine, eklenecek_node 'u bağla */
                if (temp_node->next == NULL) {
                    temp_node->next = eklenecek_node;
                    (htable->tablo_basi + hash_index)->count++;
                    // temp_node, eklenecek_node'u (yani son node) göstersin.
                    temp_node = eklenecek_node;
                }

                /* listenin sonuna kadar gitmek için tekrarla.
                 * temp_node == NULL ise döngüden çıkacak. */
                temp_node = temp_node->next;
            } // while
        } // else
    } // while
}

int main(int argc, char **argv) {
    struct hash_tablosu *htable = NULL;
    struct cell *list_header = NULL;

    // create list
    insert("milyoner", &list_header);
    insert("gsoc", &list_header);
    insert("libre", &list_header);
    insert("yazilim", &list_header);
    insert("araba", &list_header);
    insert("araba", &list_header);
    insert("bayram", &list_header);
    insert("araba", &list_header);
    insert("bitcoin", &list_header);
    insert("telegram", &list_header);
    print_list(list_header);

    // create empty hash_table
    initialize_hash_table(&htable, 3, 5);
    print_hash_table(htable);

    // add list to hash_table
    listeyi_hash_tablosuna_donusturme(htable, &list_header);
    print_hash_table(htable);

    // liste boş olmalı
    print_list(list_header);
    if (list_header == NULL)
        printf("\nListe boş");

    // destroy
    hash_table_yok_et(&htable);
    print_hash_table(htable);

    /* output:
     *
     *

     milyoner gsoc libre yazilim araba araba bayram araba bitcoin telegram
    ----- HASH TABLOSU -----
        0 : ( 0)
        1 : ( 0)
        2 : ( 0)
        3 : ( 0)
        4 : ( 0)

    ----- HASH TABLOSU -----
        0 : ( 1) bitcoin
        1 : ( 0)
        2 : ( 1) milyoner
        3 : ( 4) gsoc libre yazilim telegram
        4 : ( 2) araba bayram

    Liste boş

    Hash Tablosu Bos ...

    Process finished with exit code 0

     *
     * */

    return (EXIT_SUCCESS);
}

