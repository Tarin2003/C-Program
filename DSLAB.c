#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};
int capacity = 3;
int size = 0;
struct Node *top=0,*newNode,*temp;

void Push(int item)
{
  if(size>=capacity)
  {
      printf("Stack overflow\n");
  }
  else{
    newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = item;
    newNode->next = top;
     top = newNode;
     size++;
  }
}

void Display()
{
    temp = top;
    printf("The stack contents data are : ");
    if(top==0)
    {
        printf("Stack is empty\n");
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

void Pop()
{
    if(top==0)
    {
        printf("Stack is empty\n");

    }
    else{
       printf("Delete element : %d\n",top->data);

       top = top->next;
    }
    size--;
}
int main()
{

int ch,x;
   while(1)
    {
        printf("\n\n----MAIN MENU----\n");
        printf("\n1. Push(Insertion)");
        printf("\n2. Display");
        printf("\n3. Pop (Deletion)");

        printf("\n4. Exit (End the Execution)");
        printf("\nEnter Your Choice: ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1 : printf("Enter a element to be pushed : ");
                     scanf("%d",&x);
                     Push(x);
                     break;
             case 2 : Display();
                      break;
             case 3 : Pop();
                      Display();
                      break;
              case 4: exit(0);
            default:
                printf("\nInvalid choice");
        }
    }

  return 0;
}
