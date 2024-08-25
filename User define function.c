#include<stdio.h>
void sum(int a, int b)
{
    printf("Summation = %d\n",a+b);
}
void sub(int a, int b)
{
printf("Subtraction = %d\n",a-b);
}
void max(int a, int b)
{
    (a>b)?printf("maximum number = %d\n",a):printf("maximum number = %d\n",b);
}
void letter(char d)
{
    (d=='a' || d=='e'||d=='i'||d=='o'||d=='u')?printf("%c is vowel",d):printf("%c is consonant",d);
}
int main()
{
    char e;
  printf("Enter any character : ");
    scanf("%c",&e);

    int num1,num2;
    printf("\nEnter two numbers : ");
    scanf("%d %d",&num1,&num2);
    sum(num1,num2);
    sub(num1,num2);
    max(num1,num2);

    letter(e);
    return 0;
}
