#include<stdio.h>
#include <stdlib.h>
int size = 0;

void heapify(int arr[], int size, int i)
{
   if(size ==1)
   {
       printf("single element in the heap");
   }
   int largest = i;
   int left = 2*i + 1;
   int right = 2*i + 2;

   if (left < size && arr[left] >arr[largest])
         largest = left;

   if (right < size && arr[right] > arr[largest])
       largest = right;

    if (largest != i)
   {
      int temp = arr[i];
      arr[i]= arr[largest];
      arr[largest] = temp;
      heapify(arr, size, largest);
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

   int ch,x;
   while(1)
    {
        printf("\n----MAIN MENU----\n");
        printf("\n1. Insert element");
         printf("\n2. print Array");
        printf("\n3. Delete element ");

        printf("\n4. Exit (End the Execution)");
        printf("\nEnter Your Choice: ");
        scanf("%d",&ch);
        switch(ch)
        {

            case 1:printf("Enter item : ");
                   scanf("%d",&x);

                    insert(arr,x);
                    break;

            case 2 :
                  printf("Max-heap  : ");
                  PrintArray(arr,size);

                   break;

            case 3:printf("Enter item : ");
                   scanf("%d",&x);
                  deleteroot(arr,x);
                  printf("After deleting the element : ");
                   PrintArray(arr,size);
                   break;


            case 4:exit(0);
            default:
                printf("\nInvalid choice");
        }
    }

    return 0;

}
