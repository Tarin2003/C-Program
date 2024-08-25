#include<stdio.h>
void Linear_Search(int array[], int n, int item)
{
    int pos = -1;
    for(int i =0;i<n; i++)
    {
        if(item == array[i])
        {
              pos = i;
             break;
        }
    }
       if(pos != -1)
       {
           printf("Item found at index : %d\n",pos);
       }
       else{
        printf("Item is not found");
       }
}

int main()
{
    int n,item;
    printf("How many numbers : ");
    scanf("%d",&n);
    int array[n];
    printf("Array element :\n");
    for(int i =0;i<n; i++)
    {
        scanf("%d",&array[i]);
    }
    printf("Array elements are : ");
    for(int i =0;i<n; i++)
    {
        printf("%d ",array[i]);
    }
    printf("\nItem : ");
    scanf("%d",&item);
    Linear_Search(array, n, item);
}

