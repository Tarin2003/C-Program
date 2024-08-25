#include<stdio.h>
int main()
{
    int x=5,y=10;
    int *ptr1,*ptr2;
    int *ptr ;
    ptr =&x;
    printf("%d\n",x);
    printf("%d\n",&x);
    printf("%d\n",ptr);
    printf("%d\n",*ptr);
     ptr = &y;
    printf("%d\n",*ptr);
    ptr1 = &x;
    ptr2 = &y;
    printf("Sum : %d\n",(*ptr1 +*ptr2));



}
