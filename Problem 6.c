#include<stdio.h>
int main()
{
    int n;
   printf("How many numbers : ");
   scanf("%d",&n);
   int array[n],*ptr;
   int i,sum=0;
   printf("Enter array elements :\n");
   for(i=0;i<n;i++)
      scanf("%d",&array[i]);
      ptr = array;
    for(i=0;i<n;i++)
   {
      sum = sum + *ptr;
      ptr++;
   }

   printf("The sum of array elements : %d",sum);
   getch();

}
