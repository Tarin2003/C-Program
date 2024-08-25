#include <stdio.h>
#include <stdio.h>
void EvenAndOdd(int a, int n)
{
    if(a > n)
       return;
    printf("\n%d", a);
    EvenAndOdd(a+2, n);
}

int main()
{
    int n;
    printf("Input the range : ");
    scanf("%d", &n);

    printf("All even numbers from 1 to %d are : ", n);
    EvenAndOdd(2, n);
    printf("\n");
    printf("All odd numbers from 1 to %d are : ", n);
    EvenAndOdd(1, n);

    return 0;
}

