#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node* next;
};
struct node *front = 0;
struct node *rear = 0;
void insertRear(int x) //Insert elements in Queue
{
	struct node* newnode;
	newnode = (struct node*)malloc(sizeof(struct node));
	newnode->data = x;
	newnode->next = 0;
	if(rear==0)
	{
		front = rear = newnode;
		rear->next = front;
	}
	else
	{
		rear->next = newnode;
		rear = newnode;
		newnode->next = front;
	}


}

void insertFront(int x)
{
    struct node *newnode;
    newnode = (struct node*)malloc(sizeof(struct node));

    newnode->data = x;

    if(front == 0 && rear==0)
    {
        front = rear = newnode;

         rear->next = front;

    }

    else{
        newnode->next = front;

        front = newnode;
        rear->next = front;

    }

    }

void deleteFront() // Delete an element from Queue
{
	struct node* t;
	t = front;
	if(front==0 && rear==0)
		printf("\nQueue is Empty");
	else if(front == rear){
         printf("delete element : %d\n",front->data);
		front = rear = 0;
		free(t);
	}
	else{
	     printf("delete element : %d\n",front->data);
		front = front->next;
		rear->next = front;
		free(t);
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
        while(temp->next != rear)
        {
            temp = temp->next;
        }
       printf("delete element : %d\n",rear->data);
       rear=temp;
      rear->next=front;




    }




}

void display()
{
    struct node *temp;
    if(front == 0 && rear==0 )
    {
        printf("Queue is empty\n");

    }
    else{
        temp = front;
        while(temp->next!= front)
        {
            printf("%d\t",temp->data);
            temp = temp->next;
        }
        printf("%d",temp->data);
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
