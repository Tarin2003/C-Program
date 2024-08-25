#include<stdio.h>
#include<stdlib.h>
int stack[3], top = -1,i,j;
int Max = 3-1;
int item;
int flag = 0;
void Push()
{
    printf("Enter a element to be pushed: ");
    scanf("%d", &item);
    if (top==Max){
        printf("Stack is Overflow\n");
    }
   else{
        top++;
        stack[top]=item;
    }

}
void Pop()
{
    if(top== -1){
        printf("Stack is Underflow\n");
    }
    else{
        printf("Popped element is %d\n",stack[top]);
        top--;
    }


}
void Palindrome()

{
    for(i=0,j=top;i<=top,j>=0;i++,j--)

    {

       if(stack[i]!=stack[j]){
       flag = 1;
       break;
       }

    }
    if(flag==1)
    {
        printf("Stack contents are not palindrome\n");
    }
    else {
        printf("Stack contents are palindrome\n");
    }

}
void display()
{
    printf("The stack contents are :\n");
    if(top== -1){
        printf("Stack is Empty\n");
    }
    else{
        for(i=0;i<=top;i++){
            printf("%d\t",stack[i]);
        }
    }

}
int main()
{
    int ch;
   while(1)
    {
        printf("\n\n----MAIN MENU----\n");
        printf("\n1. PUSH (Insert) in the Stack");
        printf("\n2. POP (Delete) from the Stack");
        printf("\n3. PALINDROME check using Stack");
        printf("\n4. Exit (End the Execution)");
        printf("\nEnter Your Choice: ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:Push();
                   display();
                   break;
            case 2:Pop();
                   display();
                   break;
            case 3:Palindrome();
                   break;
            case 4:exit(0);
            default:
                printf("\nInvalid choice");
        }
    }

    return 0;

}
