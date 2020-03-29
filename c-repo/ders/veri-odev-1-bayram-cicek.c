// C11 standard
// created by cicek on 09.11.2018 22:43
// Bayram Çiçek 160401002

#include <stdio.h>
#include <stdlib.h>

struct node {
    int key;
    struct node *left;
    struct node *right;
    int height; // derinlik
};

int max(int a, int b){
    return a>b ? a:b;
}

int height(struct node *node){
    if(node==NULL) return 0;
    return node->height;
}

struct node *LeftRotate(struct node *x){

    struct node *y = x->right;
    x->right=y->left;
    y->left=x;
    
    (x)->height = max(height((x)->left), height((x)->right))+1;
    y->height = max(height(y->left), height(y->right))+1;
    
    return y;
} // sag sag


struct node *RightRotate(struct node *n){
    struct node *temp=n->left;
    n->left=temp->right;
    temp->right=n;

    n->height=max(height(n->left),height(n->right))+1;
    temp->height=max(height(temp->left),height(temp->right))+1;

    return temp;
}

struct node *RightLeftRotation(struct node *n){
    n->right=RightRotate(n->right);
    return LeftRotate(n);
}

struct node *LeftRightRotation(struct node *n){
    n->left=LeftRotate(n->left);
    return RightRotate(n);
}

struct node*  NodeOlustur(int deger){
    struct node *temp=(struct node*) malloc(sizeof(struct node));
    temp->key=deger;
    temp->left=NULL;
    temp->right=NULL;
    temp->height=1;
    return temp;
}

struct node* GetMinNode(struct node *root){
    struct node *temp=root;
    while(temp->left!=NULL)
        temp=temp->left;
    return temp;
}

int Balance(struct node *n){
    if (n == NULL)
        return 0;
    return height(n->left) - height(n->right);
}

void Rinsert(struct node **root,int value){

    if(*root==NULL){
        (*root)=(NodeOlustur(value));
    }else if(value<((*root))->key){
        Rinsert(&(*root)->left,value);
    }else if(value>((*root))->key){
        Rinsert(&(*root)->right,value);
    }

    (*root)->height=max(height((*root)->left),height((*root)->right))+1;
    int balance = Balance(*root);
    if(balance>1 && value<(*root)->left->key) // sol sol
    {
        (*root)= RightRotate((*root));
    }
    if(balance>1 && value>(*root)->left->key){ // sol sag
        (*root)= LeftRightRotation((*root));
    }
    if(balance<-1 && value<(*root)->right->key){ // sag sag
        (*root)= RightLeftRotation((*root));
    }
    if(balance<-1 && value>(*root)->right->key){ // sag sol
        (*root)= LeftRotate((*root));
    }
}
void Yazdir(struct node *root){
    if(root!=NULL){
        Yazdir(root->left);
        printf("\n %d",root->key);
        Yazdir(root->right);
    }else{
        return;
    }
}

void DeleteNode(struct node **root,int value){
    if(*root==NULL){
        return;
    }
    if(value<(*root)->key){
        DeleteNode(&(*root)->left,value);
    }
    else if(value>(*root)->key){
        DeleteNode(&(*root)->right,value);
    }else{
        if((*root)->key==value){

            if((*root)->left==NULL && (*root)->right==NULL){
                free(*root);
                (*root)=NULL;
                return ;
            }else if((*root)->left==NULL && (*root)->right!=NULL){
                struct node *temp=(*root)->right;
                free((*root));
                (*root)=NULL;
                return ;
            }else if((*root)->left!=NULL && (*root)->right==NULL){
                struct node *temp=(*root)->left;
                free((*root));
                (*root)=NULL;
                return ;
            }else if((*root)->left!=NULL && (*root)->right!=NULL){
                struct node *temp=(*root)->right;
                struct node *temp2=(*root)->right;
                while(temp->left!=NULL)
                    temp=temp->left;
                temp->left=(*root)->left;
                free((*root));
                (*root)=NULL;
                return ;
            }
            (*root)->height=max(height((*root)->left),height((*root)->right))+1;
            int balance = Balance(*root);

            if(balance>1 && value<(*root)->left->key)
            {
                RightRotate((*root));
            }
            if(balance>1 && value>(*root)->left->key){
                LeftRightRotation((*root));
            }
            if(balance<-1 && value<(*root)->right->key){
                RightLeftRotation((*root));
            }
            if(balance<-1 && value>(*root)->right->key){

                LeftRotate((*root));
            }
        }
    }
    return ;
}

int ara(struct node *root,int value){
    if(root==NULL){
        return -1;
    }
    if(root->key==value){
        return 1;
    }
    if(value < root->left)
        ara(root->left,value);
    else
        ara(root->right,value);
}
int main(int argc, char** argv) {
    struct node *root=NULL;

//    root=insert(root,40);
//    root=insert(root,35);
//    root=insert(root,38);
//    root=insert(root,60);
//    root=insert(root,80);
//    root=insert(root,50);
//    root=insert(root,21);

    Rinsert(&root,12);
    Rinsert(&root,567);
    Rinsert(&root,9);
    Rinsert(&root,89);
    Rinsert(&root,94756);

    DeleteNode(&root,11);

    Yazdir(root);

    /* output:
 9
 12
 89
 567
 94756
     */
    return 0;
}