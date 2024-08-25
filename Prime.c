#include<stdio.h>
void PrimeNumber(int num1,int num2)
{  int i,j;
    int count = 0;

   for( i =num1; i<=num2; i++)
   {
       for(j = 2; j<i-1; j++)
       if(i%j==0)
       {
           count++;
           break;
       }

   if (!count){
    printf("%d ",i);

   }else{

   count = 0;
   }
   }

}
int main()
{

    int num1,num2;
    printf("Enter two numbers : ");
    scanf("%d %d",&num1,&num2);
    PrimeNumber(num1,num2);
    return 0;

}
