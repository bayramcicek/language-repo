// C11 standard
// created by cicek on Jan 04, 2021 10:32 PM

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// bst
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

void random_generate(struct ikili_arama_agaci *agac, int number_of_node) {
    srand(time(NULL));
    for (int i = 0; i < number_of_node; i++) {
        int generate = rand() % 10000000;
//        printf("%4d ", generate);
        ekle(agac, generate);
    }
}

int search(struct ikili_arama_agaci *agac, int number) {
    if (agac == NULL || agac->kok == NULL) {
        printf("ağaç boş\n");
    }

    struct dugum *temp = agac->kok;

    while (temp != NULL) {

        if (temp->anahtar == number) {
            printf("bulundu\n");
            return 1;
        }

        if (number < temp->anahtar) {
            temp = temp->sol_link;
        } else {
            temp = temp->sag_link;
        }
    }

    printf("bulunamadı\n");

}

// avl
struct node_avl {
    int key;
    struct node_avl *left;
    struct node_avl *right;
    int height; // derinlik
};

void preOrder_yardimci(struct node_avl *node) {
    if (node != NULL) {
        printf("%d (%2d) ", node->key, node->height);
        preOrder_yardimci(node->left);
        preOrder_yardimci(node->right);
    }
}

void preOrder(struct node_avl *node) {
    preOrder_yardimci(node);
    printf("\n");
}

int max(int a, int b) {
    return a > b ? a : b;
}

struct node_avl *newNode(int key) {
    struct node_avl *node = (struct node_avl *) malloc(sizeof(struct node_avl));
    node->key = key;
    node->left = node->right = NULL;
    node->height = 1;
    return node;
}

int height(struct node_avl *node) {  // düğümün yüksekliği
    if (node == NULL) return 0;
    return node->height;
}

int getBalance(struct node_avl *node) {  // yükseklik farkı
    if (node == NULL) return 0;  // eğer agaç dengeli ise balance -> -1, 0, veya 1 olur
    return height(node->left) - height(node->right);
}

struct node_avl *rightRotate(struct node_avl *y) {
    struct node_avl *x = y->left, *T = x->right;
    x->right = y;
    y->left = T;

    y->height = max(height(y->left), height(y->right)) + 1;
    x->height = max(height(x->left), height(x->right)) + 1;

    return x;  // yukarı çıkan düğümü geri gönderiyoruz
} // sol sol

struct node_avl *leftRotate(struct node_avl *x) {
    struct node_avl *y = x->right, *T = y->left;
    y->left = x;
    x->right = T;

    x->height = max(height(x->left), height(x->right)) + 1;
    y->height = max(height(y->left), height(y->right)) + 1;

    return y;  // yukarı çıkan düğümü geri gönderiyoruz
} // sag sag

struct node_avl *insert_avl(struct node_avl *root, int key) {
    int balance;  // root -> ağacın kökü
    if (root == NULL) return newNode(key);

    // sağ veya sola ekle
    if (key < root->key) root->left = insert_avl(root->left, key);
    else root->right = insert_avl(root->right, key);

    root->height = max(height(root->left), height(root->right)) + 1;

    balance = getBalance(root);

    if (balance > 1 && key < root->left->key) // sol sol
        return rightRotate(root);
    if (balance < -1 && key > root->right->key) // sag sag
        return leftRotate(root);
    if (balance > 1 && key > root->left->key) {  // sol sag
        root->left = leftRotate(root->left);
        return rightRotate(root);
    }
    if (balance < -1 && key < root->right->key) {  // sag sol
        root->right = rightRotate(root->right);
        return leftRotate(root);
    }
    return root;  // yukarıdaki if else çalışması için
}

void avl_random_generate(struct node_avl **node, int number_of_node) {
    srand(time(NULL));
    for (int i = 0; i < number_of_node; i++) {
        int generate = rand() % 10000000;
//        printf("%4d ", generate);
        *node = insert_avl(*node, generate);
    }
}

int search_avl(struct node_avl *node, int number) {
    struct node_avl *temp = node;

    while (temp != NULL) {

        if (temp->key == number) {
            printf("bulundu\n");
            return 1;
        }

        if (number < temp->key) {
            temp = temp->left;
        } else {
            temp = temp->right;
        }
    }
    printf("bulunamadı\n");
}

int main(int argc, char **argv) {

    /* binary search tree */
//    struct ikili_arama_agaci *agac = NULL;
//    ikili_arama_agaci_olustur(&agac);
//
//    random_generate(agac, 600000);
//    ekle(agac, 10);
////    preorder(agac);
//
//    clock_t t;
//    t = clock();
//
//    search(agac, 10);  // 0.000025 sec
//
//    t = clock() - t;
//    double time_taken = ((double)t)/CLOCKS_PER_SEC; // in seconds
//    printf("took %f second \n", time_taken);


    /* avl */
    struct node_avl *root = NULL;
    root = insert_avl(root, 10);
    avl_random_generate(&root, 600000);
//    preOrder(root);

    clock_t t;
    t = clock();

    search_avl(root, 10);  //  0.000027

    t = clock() - t;
    double time_taken = ((double)t)/CLOCKS_PER_SEC; // in seconds
    printf("took %f second \n", time_taken);

    return 0;
}
