#include<stdio.h>
int main()
{
    int number;
    printf("Enter any number: ");
    scanf("%d",&number);
    if(number%2!=0){
            printf(" Given number %d is odd number\n",number);
    }
    else{
            printf("Given number %d is even number\n",number);
    }
    return 0;
}
