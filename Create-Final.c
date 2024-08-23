#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *pre;
    struct Node *next;
};
struct Node *head = 0,*newNode,*temp;
void CreateList()
{
  newNode = (struct Node*)malloc(sizeof(struct Node));
   printf("Enter item : ");
    scanf("%d",&newNode->data);
    newNode->pre = 0;
    newNode->next = 0;
    if(head==0)
    {
        head = temp = newNode;
    }
    else{
        temp->next = newNode;
        newNode->pre = temp;
        temp = newNode;
    }
}

void TraverseList()
{
    struct Node *temp = head;
    printf("Data in the list : ");
    if(head == NULL)
    {
        printf("List is empty\n");
    }
    else{
    while(temp->next != NULL)
      {
	 printf("%d ",temp->data);
	 temp = temp->next;
      }
      printf("%d ",temp->data);
   }
}

   int main()
{
int ch,x;
   while(1)
    {
        printf("\n\n----MAIN MENU----\n");
        printf("\n1. Create Linked List");
        printf("\n2. Traverse Linked List");

        printf("\n3. Exit (End the Execution)");
        printf("\nEnter Your Choice: ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:CreateList();
                   break;
            case 2 : TraverseList();
                     break;
            case 3:exit(0);
            default:
                printf("\nInvalid choice");
        }
    }

  return 0;
}

