#include<stdio.h>
void Factorial(int *num)
{
    if(*num%2==0)
    {
        printf("%d is Even",*num);
    }
    else
    printf("%d is Odd",*num);
}
int main()
{
    int fact,num;
    printf("Enter any number : ");
    scanf("%d",&num);
    Factorial(&num);

}
