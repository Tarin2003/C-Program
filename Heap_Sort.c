#include<stdio.h>
int temp,i;
void Print(int arr[], int n)
{
   for( i =0;i<n; i++)
    printf("%d\t",arr[i]);

}

void heapify(int arr[], int size, int i)
{
   int largest = i;
   int left = 2*i + 1;
   int right = 2*i + 2;

   if (left < size && arr[left] >arr[largest])
         largest = left;

   if (right < size && arr[right] > arr[largest])
        largest = right;

    if (largest != i)
   {
      temp = arr[i];
      arr[i]= arr[largest];
      arr[largest] = temp;
      heapify(arr, size, largest);
   }
}

void heapSort(int arr[], int size)
{

    for (i = size / 2 - 1; i >= 0; i--)
    {
        heapify(arr, size, i);
    }
    for (i=size-1; i>=0; i--)
   {
     temp = arr[0];
     arr[0]= arr[i];
     arr[i] = temp;
     heapify(arr, i, 0);

   }
}
void main()
{
int n;
    printf("How many numbers : ");
    scanf("%d",&n);
    int arr[n];
    printf("Array elements :\n");
    for(i =0;i<n; i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("Before sorted elements :\n");

    Print(arr,n);

   heapSort(arr, n);

  printf("\n\nAfter sorted elements :\n");
    Print(arr,n);

}
