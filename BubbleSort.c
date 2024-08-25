#include <stdio.h>
void PrintArray(int array[], int n)
{

  for (int i = 0; i < n; i++) {
    printf("%d\t", array[i]);
  }
  printf("\n");
}
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
     printf("Before sorted elements in the array :\n");
     PrintArray(array,n);

     for(i=0;i<n;i++){

    for(j= 0; j<n-i; j++){//bubble sort
       if(array[j]>array[j+1]){
        temp = array[j];
        array[j] = array[j+1];
        array[j+1] = temp;
    }
   }
 }
    printf("\nAfter sorted elements in the array :\n");
     PrintArray(array,n);
     return 0;
}
