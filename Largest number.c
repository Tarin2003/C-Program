#include<stdio.h>
int main()
{
    int num1,num2,num3;
    printf("Input the values of three numbers : ");
    scanf("%d %d %d",&num1,&num2,&num3);
    if((num1>num2)&&(num1>num3))
        printf("The 1st number is the largest among three\n");
     else if((num2>num3)&&(num2>num1))
        printf("The 2nd number is the largest among three\n");
    else if((num3>num1)&&(num3>num2))
        printf("The 3rd number is the largest among three\n");
    return 0;
}
