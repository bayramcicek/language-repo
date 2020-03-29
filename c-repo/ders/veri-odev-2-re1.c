// C11 standard
// created by cicek on 07.12.2018 12:11

// Bayram Çiçek 160401002 VeriYapıları

#include <stdio.h>
#include <stdlib.h>

struct stack {
    struct node **array;
    int capacity;
    int topControl; // -1

};

struct node {

    struct node *right;
    struct node *left;

    int content;
};

struct binary_s_tree {
    struct node *root;
};



void non_recursive_preorder(int *dizi, int eleman_sayisi){

    struct binary_s_tree * myTree = NULL;
    struct binary_s_tree ** tree = &myTree;

    *tree = (struct binary_s_tree *) malloc(sizeof(struct binary_s_tree));

    if (*tree == NULL) { // bellek kontrolü
        printf("yer ayrılamadı\n");
        exit(1);
    }

    (*tree)->root = NULL;
    int i;

    for (i=0; i<eleman_sayisi; i++){ // 2li arama ağacı oluşturulması

        struct node *dugum = (struct node*) malloc(sizeof(struct node));

        if (dugum == NULL) { // heap kontrolü
            printf("Heap'te yer yok! \n");
            exit(1);
        }

        dugum->content = *(dizi+i);
        dugum->left = NULL;
        dugum->right = NULL;

        struct node *nodeAA = NULL; /*initialize value*/
        struct node *dugumBB = NULL; /*initialize value*/

        nodeAA=(*tree)->root;

        while(nodeAA != NULL) {

            dugumBB = nodeAA;

            if(*(dizi+i) < nodeAA->content)
                nodeAA = (nodeAA->left);

            else if(*(dizi+i) > nodeAA->content)
                nodeAA = nodeAA->right;

            else continue;
        }

        if( (*tree)->root == NULL ) {
            (*tree)->root = dugum;
            continue;
        }

        if( *(dizi+i) < dugumBB->content ) {
            dugumBB->left = dugum;
        }
        else
            dugumBB->right = dugum;

    } // for

    /*preorder fonksiyon*/
    struct node *kokNode;
    struct node *temp;
    kokNode = (*tree)->root;

    if (kokNode == NULL){
        return;
    }

    int *resultArray = (int*) malloc(eleman_sayisi*sizeof(int));
    struct stack *myStack= (struct stack*) malloc(sizeof(struct stack));

    myStack->capacity = eleman_sayisi;
    myStack->topControl = -1;
    myStack->array = (struct node**) malloc(eleman_sayisi*sizeof(struct node*));

    if (myStack->topControl == myStack->capacity-1){
        return;
    }

    myStack->array[++myStack->topControl] = kokNode;
    i=0;

    while(myStack->topControl != -1){ // while
        temp = myStack->array[myStack->topControl--];
        resultArray[i++] = temp->content;

        if(temp->right){
            if(myStack->topControl == myStack->capacity-1){
                return;
            }
            myStack->array[++myStack->topControl] = temp->right;
        }

        if(temp->left){
            if(myStack->topControl == myStack->capacity-1){
                return;
            }

            myStack->array[++myStack->topControl] = temp->left;
        }
    } // while

    // çıktı
    printf("non recursice preorder: \n");
    for(int e=0; e<eleman_sayisi; e++){
        printf("%3d", resultArray[e]);
    }
}

/* main */
int main() {

    int array[10] = {80, 8, 30, 90, 5, 3, 15, 7, 22, 85};

    non_recursive_preorder(array, 10); // beklenen çıktı: 80  8  5  3  7 30 15 22 90 85

    /*output:
     *
     * 80  8  5  3  7 30 15 22 90 85
     *
     * */

}