#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *pre;
    struct node *next;
};
struct node *front = 0;
struct node *rear = 0;

void InsertRear(int x)
{
    struct node *newnode;
    newnode = (struct node*)malloc(sizeof(struct node));

    newnode->data = x;
    newnode->pre = 0;
    newnode->next = 0;
    if(front == 0 && rear == 0)
    {
        front = rear = newnode;
    }

    else{
        rear->next = newnode;
        newnode->pre = rear;
        rear = newnode;
    }

}

void InsertFront(int x)
{
    struct node *newnode;
    newnode = (struct node*)malloc(sizeof(struct node));

    newnode->data = x;
    newnode->pre = 0;
    newnode->next = 0;
    if(front == 0 && rear == 0)
    {
        front = rear = newnode;
    }

    else{
        newnode->next = front;
        front->pre = newnode;
        front = newnode;
    }

}

void Display()
{
    struct node *temp;
    if(front == 0  )
    {
        printf("Queue is empty\n");

    }
    else{
        printf("Display the element : ");
        temp = front;
        while(temp->next!= 0)
        {
            printf("%d  ",temp->data);
            temp = temp->next;
        }
         printf("%d  ",temp->data);

    }
}
void DeleteFront()
{
    struct node *temp;
    temp = front;
    if(front == 0 )
    {
        printf("Queue is empty\n");

    }
    else{
        printf("delete element : %d\n",front->data);
        front = front->next;
        front->pre = 0;
    }

}

void DeleteRear()
{
    struct node *temp,*ptr;
    temp = front;
    if(front == 0 )
    {
        printf("Queue is empty\n");

    }
    else if(front == rear)
    {
        printf("delete element : %d\n",rear->data);
        front = rear = 0;
    }
    else{
        printf("delete element : %d\n",rear->data);
        rear = rear->pre;
        rear->next = 0;

    }

}


int main()
{

int ch,x;
   while(1)
    {
        printf("\n\n----MAIN MENU----\n");
        printf("\n1. Insert-Rear");
        printf("\n2. Insert - Front");
        printf("\n3. Delete - Front");
        printf("\n4. Delete - Rear");
        printf("\n5. Exit (End the Execution)");
        printf("\nEnter Your Choice: ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:printf("Enter item : ");
                   scanf("%d",&x);
                   InsertRear(x);
                   Display();
                   break;
            case 2:printf("Enter item : ");
                   scanf("%d",&x);
                   InsertFront(x);
                   Display();
                   break;
            case 3:DeleteFront();
                   Display();
                   break;
            case 4:DeleteRear();
                   Display();
                   break;
            case 5:exit(0);
            default:
                printf("\nInvalid choice");
        }
    }

    return 0;
}
