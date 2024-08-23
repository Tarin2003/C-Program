#include<stdio.h>
int sum(int a, int b) // a & b are the PARAMETERS
{
    return a + b;
}

int main()
{
    int num1 = 20, num2 = 10, result;

    result = sum(num1, num2); // num1 & num2 as ARGUMENTS

    printf("The summation of the two numbers is : %d\n", result);
    return 0;
}



