#include<stdio.h>
int main()
{
    int mark;
    printf("Enter Marks ");
    scanf("%d",&mark);
    if(mark>100 || mark<0)
        printf("Invalid Mark");
     else if(mark>=80 && mark<=100)
        printf("A+");
     else if(mark>=75 && mark<=79)
        printf("A");
     else if(mark>=70 && mark<=74)
        printf("A-");
     else if(mark>=65 && mark<=69)
        printf("B+");
     else if(mark>=60 && mark<=64)
        printf("B");
     else if(mark>=55 && mark<=59)
        printf("B-");
     else if(mark>=50 && mark<=54)
        printf("C+");
     else if(mark>=45 && mark<=49)
        printf("C");
     else if(mark>=40 && mark<=44)
        printf("D");
        else
        {
            printf("F\n");
            printf("I\n");
            printf("W\n");
        }


    return 0 ;


}





