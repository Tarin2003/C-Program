#include <stdio.h>
#include <stdlib.h>

struct Node {
    char data[30];
    struct Node *next;
};
void printList(struct Node *n)
{
    while (n != NULL) {
        printf("%s ", n->data);
        n = n->next;
    }
    printf("\n");
}

int main()
{
     struct Node *first ;
     struct Node *second ;
     struct Node *third ;
    first = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third  = (struct Node*)malloc(sizeof(struct Node));

   printf("Data 1 : ");
   gets(first->data);
   first->next = second;
    printf("Data 2 : ");
   gets(second->data);
   second->next = third;
    printf("Data 3 : ");
   gets(third->data);
   third->next = NULL;
    printList(first);

    strcpy(first->data,"SPL"); // assign data in first node
    first->next = second; // Link first node with second

    strcpy(second->data,"DS");
    second->next = third;

    strcpy(third->data,"OOP");
    third->next = NULL;

    printList(first);

    return 0;
}
