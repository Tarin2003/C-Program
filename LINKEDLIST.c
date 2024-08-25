#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

void printList(struct Node *n)
{
    printf("Before insertion :\n");
    while (n!= NULL) {
        printf("%d\t", n->data);
        n = n->next;
    }

    printf("\n");
}
void Insert(struct Node *n)
{
   printf("After insertion\n");
    while (n!= NULL) {
        printf("%d\t", n->data);
        n = n->next;
    }

    printf("\n");
}

int main()
{
     struct Node *first = NULL ;
     struct Node *second = NULL;
     struct Node *third = NULL ;
     struct Node *newnode ;

    first = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third  = (struct Node*)malloc(sizeof(struct Node));
    newnode= (struct Node*)malloc(sizeof(struct Node));

   first->data = 1;
   first->next = second;
   second->data = 2;
   second->next = third;
   third->data = 3;
   third->next = NULL;
    printList(first);

    newnode->data = 4;
    newnode->next = first;
     first = newnode;
    Insert(first);

   return  0;
}
