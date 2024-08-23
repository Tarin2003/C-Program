#include <stdio.h>
void PrintArray(int array[], int n)
{

  for (int i = 0; i < n; i++) {
    printf("%d\t", array[i]);
  }
  printf("\n");
}

void InsertionSort(int array[],int n) {
  for (int step = 1; step <n ; step++) {
    int key = array[step];
    int j = step - 1;

    while (key < array[j] && j >= 0) {
      array[j + 1] = array[j];
      --j;
    }
    array[j + 1] = key;
  }
  PrintArray(array,n);

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
     InsertionSort(array,n);
     return 0;

}
