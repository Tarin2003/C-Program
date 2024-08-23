#include<stdio.h>
int stack[3];
int top = -1,i,j;
int Max = 3-1;
int item;
int flag = 0;
void Push()
{

       for(i=0;i<=Max;i++){
        scanf("%d",&item);
       }

        for(i=0;i<=Max;i++){
        stack[i]=item;
        top++;
        }

     Pop();

}
void Pop()
{

    for(i=0,j=top;i<=top,j>=0;i++,j--)

    {

       if(stack[i]==stack[j]){
          flag = 0;
        top--;

       }


    }
    if(flag==0)
    {
        printf("It is  a palindrome\n");
    }
    else {
        printf("It is  not a palindrome\n");
    }


}




int main()
{
    int ch;
   Push();
}
