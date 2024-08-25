#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};


struct node* createlinkedlist(int a[],int n)
{
    struct node *head=NULL,*temp=NULL,*current=NULL;
    temp = (struct node*)malloc(sizeof(struct node));
    for(int i =0;i<n;i++){
    temp->data = a[i];

    if(head ==NULL)
    {
        head = temp;
        current =temp;
    }
    else{
        current->next = temp;
        current = current->next;
    }
    }
    return head;
}

int main()
{
int a[]={5,10,15};
struct node *head;
 head = createlinkedlist(a,2);
  printf("Before insertion :\n");
    while (head->next!= NULL) {
        printf("%d\t", head->data);
        head = head->next;
    }

    printf("\n");

 return 0;
}
