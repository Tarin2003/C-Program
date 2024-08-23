#include<stdio.h>
int main()
{
    int row,col,n;
    printf("Sample Input 1 :\n");
    scanf("%d",&n);
    printf("Sample Output 1 :\n");
    for(row=1;row<=n;row++)
    {
       //printing spaces
        for(col=1;col<=n-row;col++)

            printf(" ");

// printing stars
        for(col=1;col<=2*row-1;col++)
            printf("*");
        printf("\n");

    }
    return 0;
}
