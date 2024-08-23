#include<stdio.h>

int main()
{
    int a[20],i,n,j,temp;

    printf("How many numbers : ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter %d th element : ",i);
        scanf("%d",&a[i]);
    }
      printf("Before sorted element in the array are :\n");

       for(i=0;i<n;i++){
        printf("%d\t",a[i]);

    }
    for(i=0;i<n;i++){

    for(j= 0; j<n-i; j++){//bubble sort
       if(a[j]>a[j+1]){
        temp = a[j];
        a[j] = a[j+1];
        a[j+1] = temp;
    }
   }
 }
        printf("\nAfter sorted element in the array are :\n");
        for(i=0;i<n;i++)
        {
        printf("%d\t",a[i]);
        }


         return 0;
}
