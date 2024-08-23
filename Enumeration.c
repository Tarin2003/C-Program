#include<stdio.h>
enum day_of_week
{
    Sun,Mon,Tue,Wed,Thu,Fri,Sat
};
int main()
{
    enum day_of_week day1,day2;
    day1 = Tue;
    day2 = Wed;
    printf("Day = %d\n",day2);
    int diff = day2 - day1;

    printf("Difference : %d\n",diff);
    return 0;
}
