#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};
struct node *front = 0;
struct node *rear = 0;
void insertRear(int x)
{
    struct node *newnode;
    newnode = (struct node*)malloc(sizeof(struct node));

    newnode->data = x;
    newnode->next = 0;
    if(front == 0)
    {
        front = rear = newnode;
    }

    else{
        rear->next = newnode;
        rear = newnode;
    }

    }

void insertFront(int x)
{
    struct node *newnode;
    newnode = (struct node*)malloc(sizeof(struct node));

    newnode->data = x;
    newnode->next = 0;
    if(front == 0)
    {
        front = rear = newnode;
    }

    else{
        newnode->next = front;
        front = newnode;
    }

    }

void display()
{
    struct node *temp;
    if(front == 0  )
    {
        printf("Queue is empty\n");

    }
    else{
        temp = front;
        while(temp->next!= 0)
        {
            printf("%d\t",temp->data);
            temp = temp->next;
        }
         printf("%d\t",temp->data);

    }
}
void deleteFront()
{
    struct node *temp;
    temp = front;
    if(front == 0 )
    {
        printf("Queue is empty\n");

    }
    else{

        front = front->next;


    }

}

void deleteRear()
{
    struct node *temp,*ptr;
    temp = front;
    if(front == 0 )
    {
        printf("Queue is empty\n");

    }
    else if(front == rear)

    {

        front = rear = 0;
    }
    else{
        while(temp->next != rear)
        {
            temp = temp->next;
        }


       rear=temp;
      rear->next=0;




    }




}

int main()
{

int ch,x;
   while(1)
    {
        printf("\n\n----MAIN MENU----\n");
        printf("\n1. insert-rear");
        printf("\n2. insert - front");
        printf("\n3. delete - front");
        printf("\n4. delete - rear");
        printf("\n3. Exit (End the Execution)");
        printf("\nEnter Your Choice: ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:printf("Enter item : ");
                   scanf("%d",&x);
                   insertRear(x);
                   display();
                   break;
            case 2:printf("Enter item : ");
                   scanf("%d",&x);
                   insertFront(x);
                   display();
                   break;
            case 3:deleteFront();
                   display();
                   break;
            case 4:deleteRear();
                   display();
                   break;
            case 5:exit(0);
            default:
                printf("\nInvalid choice");
        }
    }

    return 0;

}
