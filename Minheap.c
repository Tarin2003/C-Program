#include<stdio.h>
int size = 0;

void heapify(int arr[], int size, int i)
{
   if(size ==1)
   {
       printf("single element in the heap");
   }
   int smallest = i;
   int left = 2*i + 1;
   int right = 2*i + 2;

   if (left < size && arr[left] <arr[smallest])
         smallest = left;

   if (right < size && arr[right] < arr[smallest])
       smallest = right;

    if (smallest != i)
   {
      int temp = arr[i];
      arr[i]= arr[smallest];
      arr[smallest] = temp;
      heapify(arr, size, smallest);
   }
}
void insert(int arr[], int newnode)
{
    if(size == 0)
    {
        arr[0]=newnode;
        size = size + 1;
    }
    else{
        arr[size]= newnode;
        size = size+1;
        for(int i = size/2 -1; i>=0;i--)
        {
            heapify(arr,size,i);
        }
    }
}
void deleteroot(int arr[],int num)
{
    int i;
    for(i=0; i<size; i++)
    {
        if(num==arr[i])
            break;
    }
    int temp = arr[i];
    arr[i]= arr[size-1];
    arr[size-1]=temp;
    size = size-1;
    for(int i = size/2 -1; i>=0;i--)
        {
            heapify(arr,size,i);
        }
}
void PrintArray(int arr[],int size)
{
    for(int i=0;i<size;++i)
        printf("%d ",arr[i]);
    printf("\n");
}
int main()
{
    int arr[10];
    insert(arr,40);
    insert(arr,50);
    insert(arr,5);

    printf("Min-heap  ");
    PrintArray(arr,size);
    deleteroot(arr,50);
    printf("After deleting the element : ");
    PrintArray(arr,size);
}

