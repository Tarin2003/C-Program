#include<stdio.h>
int main()
{
    int num1,num2,n1,n2,large,small,rem,gcd,lcm;
    printf("Enter 2 numbers : ");
    scanf("%d %d",&num1,&num2);
    if(num1>num2)
    {
        large = num1;
        small = num2;
    }
    else{
        large = num2;
        small = num1;
    }
     n1 = large;
     n2 = small;
    while(n2 != 0)
    {
           rem = n1%n2;
           n1 = n2;
           n2 = rem;
    }
            gcd = n1;

    printf("GCD of %d and %d = %d\n",large,small,gcd);
    lcm = (num1*num2)/gcd;
    printf("GCD of %d and %d = %d\n",num1,num2,lcm);


}
