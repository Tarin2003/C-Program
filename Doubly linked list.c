#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *pre;
    struct Node *next;
};
struct Node *head = 0,*trail,*newNode,*temp;
void Creat()
{
  newNode = (struct Node*)malloc(sizeof(struct Node));
   printf("Enter item : ");
    scanf("%d",&newNode->data);
    newNode->pre = 0;
    newNode->next = 0;
    if(head==0)
    {
        head = temp=trail = newNode;
    }
    else{
        temp->next = newNode;
        newNode->pre = temp;
        temp = newNode;
        trail = newNode;
    }
}

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

void insertFirst()
{

    newNode = (struct Node*)malloc(sizeof(struct Node));
     printf("Enter item : ");
    scanf("%d",&newNode->data);
    newNode->pre = 0;
    newNode->next = 0;
    head->pre = newNode;
    newNode->next = head;
    head = newNode;
}

void insertLast()
{

    newNode = (struct Node*)malloc(sizeof(struct Node));
     printf("Enter item : ");
    scanf("%d",&newNode->data);
    newNode->pre = 0;
    newNode->next = 0;
    trail->next = newNode;
    newNode->pre = trail;

    trail = newNode;
}

void DeleteFirst()
{
    if(head==0)
    {
        printf("List is empty");

    }
    else{
        temp = head;
        head = head->next;
        head->pre = 0;
    }
}

void insert()
   {
       int position,i=1;
       printf("Enter position : ");
        scanf("%d",&position);


     struct Node *temp =head;

   newNode = (struct Node*)malloc(sizeof(struct Node));
   if(position==1)
   {
       insertFirst();
   }
   else{
     printf("Enter item : ");
    scanf("%d",&newNode->data);

     for(int i = 1; i < position-1; i++) {
      if(temp != NULL) {
        temp = temp->next;
      }
    }

         if(temp != NULL) {
      newNode->next = temp->next;
      newNode->pre = temp;
      temp->next = newNode;

       }
   }
   }






void DeleteLirst()
{
    if(trail==0)
    {
        printf("List is empty");

    }
    else{

        trail = trail->pre;
        trail->next = 0;
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
            case 1:Creat();
                  PrintList();
                   break;

            case 2 : insertFirst();
                     PrintList();
                     break;
            case 3 : insertLast();
                     PrintList();
                     break;
             case 4 : insert();
                     PrintList();
                     break;
             case 5 : DeleteFirst();
                     PrintList();
                     break;
             case  6:DeleteLirst();
                     PrintList();
                     break;
            case 7:exit(0);
            default:
                printf("\nInvalid choice");
        }
    }

  return 0;
}


