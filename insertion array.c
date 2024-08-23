#include<stdio.h>
void Insert(int arr[], int n,int item,int k)
{
    if(n>=k)
    {
        arr[k] = item;
        n = n+1;
    }
    printf("\nAfter Insertion: ");
    for (int i = 0; i <= n; i++)
        printf("%d  ",arr[i]);
}
int main()
{
    int arr[20] = {12, 16, 20, 40, 50, 70};
    int n = 6;
    int k = n;
    int i, item = 26;

    printf("Before Insertion: ");
    for (i = 0; i < n; i++){
        printf("%d  ", arr[i]);
    }

    Insert(arr,n,item,k);

    return 0;
}
