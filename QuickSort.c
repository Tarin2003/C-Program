#include<stdio.h>
void quicksort(int A[],int low,int high){
    int j;
      if(low<high)
       {
      j=partition(A,low,high);
     quicksort(A,low,j-1);
      quicksort(A,j+1,high);
     }
}
int partition(int A[],int low,int high){
    int i, j, pivot, temp;
    pivot = A[low];
    i = low, j = high ;

      while(i<j){
         while(A[i]<= pivot)
         {
           i++;
         }

         while(A[j]> pivot)
         {
            j--;
         }

         if(i<j){
            temp = A[i];
            A[i] = A[j];
            A[j] = temp;
         }
      }

      temp = A[low];
      A[low] = A[j];
      A[j] = temp;

      return j;

   }

int main(){
   int i, n;

   printf("How many numbers : ");
   scanf("%d",&n);
    int A[n];
    printf("Array element :\n");

   for(i=0;i<n;i++)
   {
     scanf("%d",&A[i]);
   }


   quicksort(A,0,n-1);

   printf("Order of Sorted elements:\n");
   for(i=0;i<n;i++)
      printf("%d\t",A[i]);

   return 0;
}


