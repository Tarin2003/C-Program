#include<stdio.h>
int main()
{
    int a[10],b[10],j,i,n;
    printf("How many numbers : ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter %d th element : ",i);
        scanf("%d",&a[i]);
    }
    printf("Even ->\t");

    for(i=0;i<n;i++){
    if(a[i]%2==0){
            b[i] = a[i];
        printf("%d\t",a[i]);

    }
    }
    printf("\nOdd ->\t");

     for(i=0;i<n;i++){
            if(a[i]%2!=0){
             b[i]=a[i];
            printf("%d\t",a[i]);

            }
       }
       printf("\nConcat ->\t");
       for(i=0;i<n;i++)
       {

       printf("%d\t",a[i]);
       }


  return 0;
}
