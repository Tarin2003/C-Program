#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *pre;
    struct Node *next;
};
struct Node *head = 0,*trail,*newNode,*temp;

void PrintList()
{
    struct Node *temp = head;
    while(temp->next != NULL)
      {
	 printf("%d ",temp->data);
	 temp = temp->next;
      }
      printf("%d ",temp->data);
   }


   void insertFirst(int value)
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
            head=newNode;
   }
}


void insertLast(int data)
   {
       struct Node *newNode;

   newNode = (struct Node*)malloc(sizeof(struct Node));
       struct Node *prenode;
       struct Node*temp = head;
       newNode->data = data;
       while(temp->next !=0){
           temp = temp->next ;
           prenode = temp;

       }
       if(head==0)
       {

          head = newNode;
          newNode->next = 0;

       }
       else{
        prenode->next = newNode;
        newNode->next = 0;

       }
   }


void insert(int position,int value)
   {
     struct Node *temp =head;
     struct Node *newNode;
   newNode = (struct Node*)malloc(sizeof(struct Node));
     int counter =0;
     while(temp!=NULL)
     {
       counter++;
       if(counter == position)
       {
          newNode->data =value;
          newNode->next = temp->next;
          temp->next = newNode;
       }
       temp = temp->next;
     }

   }

   void deleteFirst()
   {
       struct Node*temp = head;
       if(head->next==0)
       {
           head =0;
       }
       else{
        head = head->next;
       }
   }


   void RemoveLast()
   {
       struct Node *prenode;
       struct Node*temp = head;
       while(temp->next !=0)
       {
           prenode = temp;
           temp = temp->next ;
       }
       if(temp==head)
       {
           head = 0;

       }
       else{
        prenode->next = 0;
       }
   }



int main()
{


int ch,x,pos;
   while(1)
    {
        printf("\n\n----MAIN MENU----\n");
        printf("\n1. Enqueue(insert-first)");
         printf("\n2. Enqueue(insert-Last)");
         printf("\n3. Enqueue(insert-any position)");
         printf("\n4. delete-first");
         printf("\n5. delete-last");
        printf("\n6. Exit (End the Execution)");
        printf("\nEnter Your Choice: ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:printf("Enter item : ");
                   scanf("%d",&x);
                   insertFirst(x);
                   PrintList();
                   break;
            case 2 : printf("Enter item : ");
                   scanf("%d",&x);
                   insertLast(x);
                   PrintList();
                   break;
            case 3:printf("Enter position : ");
                   scanf("%d",&pos);
                   printf("Enter item : ");
                   scanf("%d",&x);
                   insert(pos,x);
                   PrintList();
                   break;
            case 4 : deleteFirst();
                     PrintList();
                      break;
             case 5 : RemoveLast();
                     PrintList();
                        break;

             case 6:exit(0);
            default:
                printf("\nInvalid choice");
        }
    }

  return 0;
}
