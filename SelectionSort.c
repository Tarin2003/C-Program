#include <stdio.h>
void PrintArray(int array[], int n)
{

  for (int i = 0; i < n; i++) {
    printf("%d\t", array[i]);
  }
  printf("\n");
}

void SelectionSort(int a[],int n) {
    int temp;
  for (int i = 0; i <n ; i++) {
    int min_value = i;

    for(int j = i+1; j<n; j++){
        if(a[j] < a[min_value])
        {
            min_value = j;
        }
    }
        temp = a[i];
        a[i] = a[min_value];
        a[min_value] = temp;


}
}

int main()
{
    int n ,i;
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
    printf("\nAfter sorted elements in the array :\n");
     SelectionSort(array,n);
     PrintArray(array,n);
     return 0;

}
