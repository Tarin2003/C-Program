#include<stdio.h>
void mergeSort(int a[], int low, int high )
{
    if(low<high){
    int m = (low+high)/2;

    mergeSort(a, low, m);
    mergeSort(a, m+1, high);
    merge(a, low, m, high);
   }
}
void merge(int A[],int l,int mid,int h)
{
    int temp[20];
    int i, j,k;
     i=l;
    j = mid +1;
    k = l;
    while(i<=mid && j<=h)
    {
        if(A[i]<=A[j])
        {
             temp[k]= A[i];
            i++;

        }
        else{
            temp[k]= A[j];
            j++;
        }
         k++;
    }
        if(i>mid)
        {
            while(j<=h)
            {
                temp[k]=A[i];
                j++;
                k++;
            }
        }
            else
            {
                while(i<=mid)
                {
                temp[k] = A[i];
                i++;
                k++;
            }
            }


        for(k=l; k<=h; k++)
        {
            A[k]= temp[k];

        }

    }


int main()
{
    int n,i;
    printf("How many numbers : ");
    scanf("%d",&n);
    int A[n];
    printf("Array elements :\n");
     for(i=0;i<n;i++)
     {
        scanf("%d",&A[i]);
     }
     int l = 0, h = n-1;

       mergeSort(A,l,h);
      printf("\nSorted elements :\n");

     for( i=0;i<n;i++)
       {
        printf("%d\t",A[i]);
        }
      return 0;
}
