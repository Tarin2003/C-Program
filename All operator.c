#include<stdio.h>

int main()
{
    int a,b,c;
    printf("Enter first numbers: ");
    scanf("%d",&a);
    printf("Enter second numbers: ");
    scanf("%d",&b);
    printf("Sum = %d\n",a+b);
    printf("Subtraction = %d\n",a-b);
    printf("Multiplication = %d\n",a*b);
    printf("Division = %d\n",a/b);
    printf("Modulus = %d\n",a%b);
    printf("a==b = %d\n",a==b);// relational
    printf("a!=b = %d\n",a!=b);
    printf("a>b = %d\n",a>b);
    printf("a<b = %d\n",a<b);
    printf("a>=b = %d\n",a>=b);
    printf("a<=b = %d\n",a<=b);
    printf("(a<b)&&(a!=b) = %d\n",(a<b)&&(a!=b));// logical
    printf("(a<b)||(b<a) = %d\n",(a<b)||(b<a));
    printf("!(a==b) = %d\n",!(a==b));
    printf("a&b = %d\n",a&b);// bitwise
    printf("a|b = %d\n",a|b);
    printf("a^b = %d\n",a^b);
    printf("b<<1 = %d\n",b<<1);
    printf("b>>1 = %d\n",b>>1);
    a += b;
    printf("c = %d\n",a);
    a -= b;
    printf("c = %d\n",a);
    a *= b;
    printf("c = %d\n",a);
    a /= b;
    printf("c = %d\n",a);
    a %= b;
    printf("c = %d\n",a);// assignment

    return 0;
}
