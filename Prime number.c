#include<stdio.h>
void PrimeNumber(int num)
{  int count = 0;
   for(int i =2; i<num; i++)
   {
       if(num%i==0)
       {
           count++;
           break;
       }
   }
   if (count==0){
    printf("%d is a Prime number", num);
   }
    else
    printf("%d is a not prime number", num);
}

int main()
{

    int num;
    printf("Enter any number : ");
    scanf("%d",&num);
    PrimeNumber(num);
    return 0;
}
