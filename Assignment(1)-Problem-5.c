#include<stdio.h>
int main()
{
    int a[10][10],b[10][10],c[10][10],d[10][10], NumberOfRows, NumberOfCols,i,j;

    printf("Enter the number of rows and columns of the first matrix\n");
    scanf("%d %d",&NumberOfRows,&NumberOfCols);


        printf("Enter the 4 elements of the first matrix\n");
        for(i=0;i<NumberOfRows;i++){
            for(j = 0;j < NumberOfCols;j++){
                scanf("%d",&a[i][j]);
            }


        }

        printf("Enter the 4 elements of the second matrix\n");
        for(i=0;i<NumberOfRows;i++){
            for(j = 0;j < NumberOfCols;j++){
                scanf("%d",&b[i][j]);
            }


        }
        //printing first matrix
        printf("The first matrix is:\n");
        for (i = 0; i <NumberOfRows ; i++)
    {
        for (j = 0; j < NumberOfCols; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    // printing second  matrix
    printf("\nThe second matrix is:\n");
      for (i = 0; i <NumberOfRows ; i++)
    {
        for (j = 0; j < NumberOfCols; j++)
        {
            printf("%d\t", b[i][j]);
        }
        printf("\n");
    }

        printf("The sum of the two entered matrices is:\n");
        for(i=0;i<NumberOfRows;i++){
            for(j = 0;j < NumberOfCols;j++){
                c[i][j]=a[i][j] + b[i][j];
            }
        }
        //printing addition
        for(i=0;i<NumberOfRows;i++){
            for(j = 0;j < NumberOfCols;j++){
                printf("%d\t",c[i][j]);
            }
            printf("\n");
        }


        printf("\nThe difference(subtraction) of the two entered matrices is:\n");
        for(i=0;i<NumberOfRows;i++){
            for(j = 0;j < NumberOfCols;j++){
                d[i][j]=a[i][j] - b[i][j];
            }
        }

        //printing subtraction

        for(i=0;i<NumberOfRows;i++){
            for(j = 0;j < NumberOfCols;j++){
                printf("%d\t",d[i][j]);
            }
            printf("\n");
        }



    return 0;
}

