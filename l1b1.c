#include<stdio.h>

int Factorial(int n1)
{
   if(n1==1)
        return 1;
   else
    return n1*Factorial(n1-1);
}
int main()
{
    int n;
    scanf("%d",&n);
    int result = Factorial(n) ;
    printf("Result = %d ",result);
    return 0;
}
