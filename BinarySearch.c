#include<stdio.h>
int main()
{
    int n,item;
    printf("How many numbers : ");
    scanf("%d",&n);
    int array[n];

    printf("Array elements :\n");
    for(int i =0;i<n; i++)
    {
        scanf("%d",&array[i]);
    }

    printf("Array elements are : ");
    for(int i =0;i<n; i++)
    {
        printf("%d ",array[i]);
    }

    printf("\nSearch item : ");
    scanf("%d",&item);
    int left = 0, right = n-1, middle;

    while(left<= right)
    {
        middle = (left + right)/2;
        if(array[middle]== item)
        {
            printf("Item found at index : %d\n", middle);
               return 0;
        }
        else if(array[middle]<item)
        {
            left = middle + 1;
        }
        else if(array[middle]>item){
            right = middle -1;
        }

    }
       printf("Item not found\n");

       return 0;
}
