#include<stdio.h>
void Factorial(int num,int *fact)
{
    int i;
    *fact = 1;
    for(i=1;i<=num;i++)
    {
        *fact = *fact *i;
    }
    printf("Result = %d",*fact);
}
int main()
{
    int fact,num;
    printf("Enter any number : ");
    scanf("%d",&num);
    Factorial(num,&fact);

}
