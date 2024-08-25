#include<stdio.h>
void swap(int *ptr1,int *ptr2)
{
    int temp;
    temp = *ptr1;
    *ptr1= *ptr2;
    *ptr2 = temp;
    printf("X = %d ,Y = %d\n",*ptr1,*ptr2);
}
int main()
{
    int x,y;
    int *ptr1,*ptr2;
    scanf("%d %d",&x,&y);
    swap(&x,&y);
}
