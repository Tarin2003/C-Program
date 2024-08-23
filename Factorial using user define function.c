#include <stdio.h>

void Factorial(int num)
{
    int fact=1;
    int i;
  for(i=1;i<=num;i++)
    {
       fact = fact*i;
    }
   printf("The Factorial of %d is : %d",num,fact);
}
int main()
{
    int i,n;
    printf("Enter any number : ");
    scanf("%d",&n);
    Factorial(n);
    return 0;
}

