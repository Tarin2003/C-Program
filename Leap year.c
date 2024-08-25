#include<stdio.h>
int main()
{
    int year;
    year = 2020;
    if (year%400==0)
            printf("Given year %d is leap year\n",year);
     if (year%4==0 && year%100!=0)
        printf("Given year %d is leap year\n",year);
    else
        printf("Given year %d is not leap year\n",year);

    return 0;
}
