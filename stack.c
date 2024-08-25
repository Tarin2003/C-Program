#include<stdio.h>
void push (int a[],int top)
{
    for (int i=top;i>=0;i--){
    {
        printf("%d\n",a[i]);
    }
    if(top == -1)
    {
        printf("Stack is empty");
    }
    }
}


int main()
{
    int a[]={10,20,30};
    push(a,2);
}
