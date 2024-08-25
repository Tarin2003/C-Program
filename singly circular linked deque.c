#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *pre;
    struct node *next;
};
struct node *front = 0;
struct node *rear = 0;

void insertRear(int x)
{
    struct node *newnode;
    newnode = (struct node*)malloc(sizeof(struct node));

    rear->next = newnode;
    newnode->pre = rear;

    rear = newNode;
    }

void insertFront(int x)
{
    struct node *newnode;
    newnode = (struct node*)malloc(sizeof(struct node));

    newnode->data = x;

    newnode->pre = 0;
    newnode->next = 0;
    front->pre = newnode;
    newnode->next = front;
    front = newnode;



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
        printf("delete element : %d\n",front->data);
        front = front->next;
        front->pre = 0;
        rear->next = front;
        front->pre = rear;


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
        printf("delete element : %d\n",rear->data);
        front = rear = 0;
    }
    else{
        printf("delete element : %d\n",rear->data);
        rear = rear->pre;
        rear->next = 0;
        rear->next = front;
        front->next = rear;




    }




}

int getFront() {
    if (front != NULL) {
        return front->data;
    }
    return -1;
}

int main()
{

int ch,x;
   while(1)
    {
        printf("\n\n----MAIN MENU----\n");
        printf("\n1. insert-Front");
        printf("\n2. insert - rear");
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

