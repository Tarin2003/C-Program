#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};
struct node *front = 0;
struct node *rear = 0;
void enqueue(int x)
{
    struct node *newnode;
    newnode = (struct node*)malloc(sizeof(struct node));

    newnode->data = x;
    newnode->next = 0;
    if(front == 0 && rear == 0)
    {
        front = rear = newnode;
    }

    else{
        rear->next = newnode;
        rear = newnode;
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
void dequeue()
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
                   enqueue(x);
                   display();
                   break;
            case 2:dequeue();
                   display();
                   break;

            case 3:exit(0);
            default:
                printf("\nInvalid choice");
        }
    }

    return 0;

}


