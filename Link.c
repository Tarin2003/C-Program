#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};
struct Node *head = 0;
void display()
{

    if(head == 0  )
    {
        printf("Queue is empty\n");

    }
    else{
        struct Node *temp = head;
        while(temp->next!= 0)
        {
            printf("%d\t",temp->data);
            temp = temp->next;
        }
         printf("%d\t",temp->data);

    }
}
void insert(int value)
{
   struct Node *newNode;
    struct Node *temp;
   newNode = (struct Node*)malloc(sizeof(struct Node));
   newNode->data = value;
   if(head == 0)
   {
      newNode->next = 0;
      head = newNode;
   }
   else
   {

          newNode->next = head;
          head = newNode ;
   }
}
void Pop()
{
   struct Node *dummyhead;
   dummyhead =  (struct Node*)malloc(sizeof(struct Node));
   dummyhead->next = head;
   struct Node *temp=dummyhead;
   while(temp->next!=NULL)
   {
       if
       temp->next = temp->next->next;
   }

}
void Remove()
{
   if(head == 0)
	printf("\n\nList is Empty!!!");
   else
   {
      struct Node *temp = head;
      if(head->next == 0)
      {
	 head = 0;
	 free(temp);
      }
      else
      {
	head = temp->next;
	free(temp);

      }
   }
}
int main()
{

int ch,x;
   while(1)
    {
        printf("\n\n----MAIN MENU----\n");
        printf("\n1. Enqueue(insert)");
        printf("\n2. Dequeue (Delete)");

        printf("\n3. Exit (End the Execution)");
        printf("\nEnter Your Choice: ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:printf("Enter item : ");
                   scanf("%d",&x);
                   insert(x);
                   display();
                   break;
            case 2:Remove();
                   display();
                   break;

            case 3:exit(0);
            default:
                printf("\nInvalid choice");
        }
    }

  return 0;
}
