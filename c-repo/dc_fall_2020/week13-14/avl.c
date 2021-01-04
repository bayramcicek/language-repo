/* 
 * File:   main.c
 * Author: BM
 *
 * Created on 17 Kasım 2014 Pazartesi, 15:14
 */

#include <stdio.h>
#include <stdlib.h>

struct node {
    int key;
    struct node *left;
    struct node *right;
    int height; // derinlik
};

int max(int a, int b) {
    return a > b ? a : b;
}

struct node *newNode(int key) {
    struct node *node = (struct node *) malloc(sizeof(struct node));
    node->key = key;
    node->left = node->right = NULL;
    node->height = 1;
    return node;
}

int height(struct node *node) {  // düğümün yüksekliği
    if (node == NULL) return 0;
    return node->height;
}

struct node *rightRotate(struct node *y) {
    struct node *x = y->left, *T = x->right;
    x->right = y;
    y->left = T;

    y->height = max(height(y->left), height(y->right)) + 1;
    x->height = max(height(x->left), height(x->right)) + 1;

    return x;  // yukarı çıkan düğümü geri gönderiyoruz
} // sol sol

struct node *leftRotate(struct node *x) {
    struct node *y = x->right, *T = y->left;
    y->left = x;
    x->right = T;

    x->height = max(height(x->left), height(x->right)) + 1;
    y->height = max(height(y->left), height(y->right)) + 1;

    return y;  // yukarı çıkan düğümü geri gönderiyoruz
} // sag sag

int getBalance(struct node *node) {  // yükseklik farkı
    if (node == NULL) return 0;  // eğer agaç dengeli ise balance -> -1, 0, veya 1 olur
    return height(node->left) - height(node->right);
}

struct node *insert(struct node *root, int key) {
    int balance;  // root -> ağacın kökü
    if (root == NULL) return newNode(key);

    // sağ veya sola ekle
    if (key < root->key) root->left = insert(root->left, key);
    else root->right = insert(root->right, key);

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

void preOrder_yardimci(struct node *node) {
    if (node != NULL) {
        printf("%d (%2d) ", node->key, node->height);
        preOrder_yardimci(node->left);
        preOrder_yardimci(node->right);
    }
}

void preOrder(struct node *node) {
    preOrder_yardimci(node);
    printf("\n");
}

struct node *minValueNode(struct node *root) {
    struct node *current = root;
    if (current == NULL) return NULL;
    while (current->left) current = current->left;
    return current;
}

struct node *deleteNode(struct node *root, int key) {
    if (root == NULL) return root;
    if (key < root->key) root->left = deleteNode(root->left, key);
    else if (key > root->key) root->right = deleteNode(root->right, key);
    else {
        if (root->left == NULL || root->right == NULL) {
            struct node *temp = root->left ? root->left : root->right;
            if (temp == NULL) {
                temp = root;
                root = NULL;
            } else *root = *temp; // root->key=temp->key; root->rigt = temp->rigt; root->left=
            free(temp);
        } else {
            struct node *temp = minValueNode(root->right);
            root->key = temp->key;
            root->right = deleteNode(root->right, temp->key);
        }
    }

    if (root == NULL) return root;

    root->height = max(height(root->left), height(root->right)) + 1;
    int balance = getBalance(root);

    if (balance > 1 && getBalance(root->left) >= 0)
        return rightRotate(root);
    if (balance > 1 && getBalance(root->left) < 0) {
        root->left = leftRotate(root->left);
        return rightRotate(root);
    }
    if (balance < -1 && getBalance(root->right) <= 0)
        return leftRotate(root);
    if (balance < -1 && getBalance(root->right) > 0) {
        root->right = rightRotate(root->right);
        return leftRotate(root);
    }
    return root;
}

/* BST ve AVL kıyaslaması için random düğümler oluştur.
 * örn 10k tane düğüm, random ile ekleme yap
 * sonra 2sinde arama yap ve süreleri ölç.*/

int main(int argc, char **argv) {
    struct node *root = NULL;

    // burada &root olarak ta gönderebilirdik.
    root = insert(root, 40);
    root = insert(root, 35);
    root = insert(root, 38);
    root = insert(root, 60);
    root = insert(root, 80);
    root = insert(root, 50);
    root = insert(root, 20);
    root = insert(root, 55);
    root = insert(root, 44);
    root = insert(root, 90);
    root = insert(root, 58);
    preOrder(root);  // şekli postOrder veya preOrder basarsak çıkartabiliriz.
    //   root=deleteNode(root,50);
    //   root=deleteNode(root,30);
    //   root=deleteNode(root,20);
    //   root=deleteNode(root,55);

    printf("%d\n", root->right->left->right->key);  // 58
    printf("%d\n", root->key);  // 50
    printf("%d\n", root->left->left->right->key);  // 38

    return (EXIT_SUCCESS);
}

