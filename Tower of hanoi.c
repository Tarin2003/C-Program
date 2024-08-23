#include<stdio.h>
void hanoi(int n,char A,char B,char C)
{
    if (n == 1)
    {

        printf("\nmove dish 1 form pile %c to %c", A, C);
        return;
    }
        hanoi(n - 1, A, C, B);
       printf("\nmove dish %d form pile %c to %c", n,A, C);
        hanoi(n - 1, B, A, C);
    }

int main()
{
    int n;
    printf("Enter the number of disk : ");
    scanf("%d",&n);
    hanoi(n,'A','B','C');
    return 0;
}
