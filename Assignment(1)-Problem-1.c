#include<stdio.h>
int main()
{
    int year;
    printf("sample Input 1:\n");
    scanf("%d",&year);
    printf("Sample Output 1:\n");
    if (year%400==0 || (year%4==0 && year%100!=0))
    {
    printf("Leap Year\n",year);

    }

        else
        printf("Not Leap Year\n",year);

    return 0;

}

