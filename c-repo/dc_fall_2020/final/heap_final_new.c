/* 
 * File:   main.c
 * Author: BM
 *
 * Created on 08 Aralık 2014 Pazartesi, 14:59
 */

#include <stdio.h>
#include <stdlib.h>

/* Derste heap veri yapısının dizilerle gerçekleştirimini görmüştük. Heap veri yapısının aşağıda
tanımlanan değiştirilmiş ikili ağaç düğümleriyle gerçekleştirildiğini kabul edelim. dugum veri
yapısındaki parent değişkeni ilgili düğümün parentine ilişkin işaretcidir (bir düğümden parentine
erişimi sağlamak amacıyla eklenmiştir). heap veri yapısındaki en_son_eklenen değişkeni ise veri
yapısına en son eklenen düğüme ait işaretiyi göstermektedir. Buna göre tanımlaması aşağıda
verilen ve heap’e ekleme yapan fonksiyonu yazınız? (30 puan)*/

struct dugum {
    int anahtar;
    struct dugum *parent, *sol_link, *sag_link;
};

struct heap {
    // heap 'i kok olarak göstereceğiz demiştik.
    struct dugum *kok;
    struct dugum *en_son_eklenen;
};

void heap_agaci_olustur(struct heap **heap) {
    *heap = (struct heap *) malloc(sizeof(struct heap));
    if (*heap == NULL) {
        printf("Heapte gerekli yer ayrilamadi... exit ...\n");
        exit(1);
    }
    (*heap)->kok = (*heap)->en_son_eklenen = NULL;
}

void buble_up(struct heap *heap, int index) {
    int parent, temp_key;
    parent = (index - 1) / 2;

    while (parent >= 0 && heap->kok[parent].anahtar < heap->kok[index].anahtar) {
        temp_key = heap->kok[parent].anahtar;
        heap->kok[parent].anahtar = heap->kok[index].anahtar;
        heap->kok[index].anahtar = temp_key;
        index = parent;
        parent = (index - 1) / 2;

    }
}

// heap’e ekleme yapan fonksiyonu yazınız?
void heap_insert(struct heap *heap, int key) {
    struct dugum *new_node = (struct dugum *) malloc(sizeof(struct dugum));
    if (new_node == NULL) {
        printf("heapte yer ayrilamadi..cikiliyor..\n");
        exit(1);
    }
    new_node->anahtar = key; // new_node'u oluştur.
    new_node->sol_link = new_node->sag_link = NULL;

    if (heap->kok == NULL) { // ağaç boş ise new_node'u kok'e bağla.
        new_node->parent = NULL;
        heap->kok = heap->en_son_eklenen = new_node;
    } else { // heap ağacında en az 1 node var.
        if (heap->kok->sol_link == NULL) { // kok'un solu boşsa direkt ekle.
            new_node->parent = heap->kok;
            heap->kok->sol_link = heap->en_son_eklenen = new_node;
        } else if (heap->kok->sag_link == NULL) { // kok'un sağı boşsa direkt ekle.
            new_node->parent = heap->kok;
            heap->kok->sag_link = heap->en_son_eklenen = new_node;
        } else { // demek ki kok'un sağ ve sol çocukları mevcut. öyleyse;
            struct dugum *dugum_derinlik = (heap->en_son_eklenen);
            // uyguladığım algoritmada ağaç derinliği lazım olacak.
            int derinlik = 0;
            /*eğer en_son_eklenen düğüm ağacın en sağında ise en_sag, derinlik ile
             * eşit olması gerek*/
            int en_sag = 0;

            // derinlik ve en_sag değişkenini hesapla.
            while (dugum_derinlik != heap->kok) {
                if (dugum_derinlik == dugum_derinlik->parent->sag_link) { en_sag++; }
                dugum_derinlik = dugum_derinlik->parent;
                derinlik++;
            }

            /* eğer (derinlik == en_sag) ise demek ki en_son_eklenen düğüm ağacın en sağında;
             * öyleyse new_node, heap ağacı yapısından dolayı ağacın en soluna eklenir. */
            if (derinlik == en_sag) {
                struct dugum *temp = heap->kok;
                for (int i = 0; i < derinlik; ++i) {
                    temp = temp->sol_link;
                }
                new_node->parent = temp;
                temp->sol_link = new_node;
                heap->en_son_eklenen = new_node;
            } else if (heap->en_son_eklenen == heap->en_son_eklenen->parent->sol_link) {
                /* eğer en_son_eklenen düğüm, parent'ının solunda ise o zaman
                 * new_node'u parent'ın sağına ekle */
                new_node->parent = heap->en_son_eklenen->parent;
                heap->en_son_eklenen->parent->sag_link = new_node;
                heap->en_son_eklenen = new_node;
            } else {
                /* burada ise new_node, ağacın yapraklarından birinin soluna eklenecek demektir. */
                /* kendim keşfederek bulduğum algoritma şöyle çalışıyor:
                 *
                 * 1) i=2 al.
                 * 2) en_son_eklenen düğümden i kadar kademe parent'a git.
                 *      o parent'ın sağına git.
                 * 3) (kademe sayısı - 2) kadar sola git.
                 * 4) eğer o anki düğümün sol_link'i NULL ise heap ağaç yapısına göre
                 *      eklencek düğümün yeri burasıdır ve adım 6 'ya git.
                 * 5) eğer sol_link, NULL değil ise i'yi 1 arttır
                 *      (i<=derinlik sayısını aşmayana dek.) ve 2. adıma git.
                 * 6) düğüm bu yere bağlanır. */

                struct dugum *temp_dugum = (heap->en_son_eklenen);

                for (int i = 2; i <= derinlik; ++i) {
                    for (int j = 0; j < i; ++j) { // i kadar üst parent'a git.
                        temp_dugum = temp_dugum->parent;
                    }
                    // 1 defa sağa git.
                    temp_dugum = temp_dugum->sag_link;

                    // (i-2) kadar sola git.
                    for (int j = 0; j < (i - 2); ++j) {
                        temp_dugum = temp_dugum->sol_link;
                    }

                    // eğer sol_link==NULL ise new_node'un eklenecek yeri bulundu demektir.
                    if (temp_dugum->sol_link == NULL) {
                        new_node->parent = temp_dugum;
                        temp_dugum->sol_link = new_node;
                        heap->en_son_eklenen = new_node;
                        break;
                    }
                    /* new_node'un eklenecek yeri bulunamadı ise sonraki i ile denenir.
                     * en kötü ihtimalle i==derinlik olunca eklenecek yer bulunur. */
                    temp_dugum = (heap->en_son_eklenen);
                } // for
            } // else
        } // else
    } // else

    // en son ise buble_up uygula.
    struct dugum *buble_up = heap->en_son_eklenen;
    int temp_key;
    while ((buble_up->parent != NULL) && (buble_up->anahtar > buble_up->parent->anahtar)) {
        temp_key = buble_up->parent->anahtar;
        buble_up->parent->anahtar = buble_up->anahtar;
        buble_up->anahtar = temp_key;
        buble_up = buble_up->parent;
    } // while
} // fonksiyon

int main(int argc, char **argv) {
    struct heap *heap_bt = NULL;
    heap_agaci_olustur(&heap_bt);

    heap_insert(heap_bt, 100);
    heap_insert(heap_bt, 950);
    heap_insert(heap_bt, 90);
    heap_insert(heap_bt, 85);
    heap_insert(heap_bt, 81);
//    heap_insert(heap_bt, 80);
//    heap_insert(heap_bt, 75);
//    heap_insert(heap_bt, 70);
//    heap_insert(heap_bt, 65);
//    heap_insert(heap_bt, 60);
//    heap_insert(heap_bt, 55);
//    heap_insert(heap_bt, 50);
//    heap_insert(heap_bt, 45);
//    heap_insert(heap_bt, 40);
//    heap_insert(heap_bt, 35);
//    heap_insert(heap_bt, 30);
//    heap_insert(heap_bt, 25);
//    heap_insert(heap_bt, 200);
    printf("dügüm: %d\n", heap_bt->kok->anahtar);
    printf("dügüm: %d\n", heap_bt->kok->sol_link->anahtar);
    printf("dügüm: %d\n", heap_bt->kok->sag_link->anahtar);
    printf("dügüm: %d\n", heap_bt->kok->sol_link->sol_link->anahtar);
    printf("dügüm: %d\n", heap_bt->kok->sol_link->sag_link->anahtar);
//    printf("dügüm: %d\n", heap_bt->kok->sag_link->sol_link->anahtar);
//    printf("dügüm: %d\n", heap_bt->kok->sag_link->sag_link->anahtar);
//    printf("dügüm: %d\n", heap_bt->kok->sol_link->sol_link->sol_link->anahtar);
//    printf("dügüm: %d\n", heap_bt->kok->sol_link->sol_link->sag_link->anahtar);
//    printf("dügüm: %d\n", heap_bt->kok->sol_link->sag_link->sol_link->anahtar);
//    printf("dügüm: %d\n", heap_bt->kok->sol_link->sag_link->sag_link->anahtar);
//    printf("dügüm: %d\n", heap_bt->kok->sag_link->sol_link->sol_link->anahtar);
//    printf("dügüm: %d\n", heap_bt->kok->sag_link->sol_link->sag_link->anahtar);
//    printf("dügüm: %d\n", heap_bt->kok->sag_link->sag_link->sol_link->anahtar);
//    printf("dügüm: %d\n", heap_bt->kok->sag_link->sag_link->sag_link->anahtar);
//    printf("dügüm: %d\n", heap_bt->kok->sol_link->sol_link->sol_link->sol_link->anahtar);
//    printf("dügüm: %d\n", heap_bt->kok->sol_link->sol_link->sol_link->sag_link->anahtar);
//    printf("dügüm: %d\n", heap_bt->kok->sol_link->sol_link->sag_link->sol_link->anahtar);


    printf("en_son_eklenen: %d\n", heap_bt->en_son_eklenen->anahtar);


    return (EXIT_SUCCESS);
}

