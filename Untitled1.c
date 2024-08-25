#include<stdio.h>
int n;
int main()
{
    int n ,i,j,temp;
    printf("How many numbers : ");
    scanf("%d",&n);
    int array[n] ;
    printf("Array elements :\n");
     for(i=0;i<n;i++)
     {
        scanf("%d",&array[i]);
     }
     for (int i = n-1; i >= 0; i--) {
    printf("%d\t", array[i]);
  }


}
