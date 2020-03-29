// C11 standard
// created by cicek on 07.11.2018 02:22
//

#include <stdio.h>
#include <stdlib.h> // "malloc" kullanmak için include edilmeli.


struct n{
    int x;
    struct n *next;
};
typedef struct n node; // daha sonra kullanmak için. node girildiðinde artýk düðüm kastedilecek


int main() {
    node * root;
    root = (node *)malloc(sizeof(node)); //bir tane node un hafýzada kapladýðý kadar yeri ayýr, bu alan bir node olarak kullanýlacak ve bunu da þu anda root gösterecek.
    root -> x = 10; // þu anda root un göstermiþ olduðu kutunun data kýsmýna 10 koyacak
    root -> next =  (node *)malloc(sizeof(node)); //hafýzada yeni bir kutu oluþturacak ve oluþturduðu bu kutuyu root un next ine koyacak.
    root -> next -> x = 20; // root un gösterdiði kutunun next inin gösterdiði kutunun data kýsmý yani x kýsmýna 20 koyacak.
    root -> next -> next = (node *)malloc(sizeof(node)); // root un next inin next ine yeni bir kutu koyacak.
    root -> next -> next -> x = 30; // root un next inin next inin x deðeri 30 olacak.
    node * iter;
    iter = root; // root un gösterdiði yeri iter de gösterecek.
    printf("%d", iter -> x); // iterin þu anda gösterdiði yerdeki x deðerini ekrana basacak.
    iter = iter -> next; // link-list te iter in gösterdiði kutudan bir sonraki kutuya geçecek.
    printf("\n%d", iter -> x); // iter in gösterdiði kutudan bir sonraki geçtiði kutunun x deðerini ekrana basacak.


    return 0;
}