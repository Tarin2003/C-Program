#include<stdio.h>
struct St
{
    char name[20];
    int id;
    char varsity[20];

};
int main()
{
 struct St b1,b2,*ptr1,*ptr2;
    ptr1 = &b1;
    ptr2 = &b2;
    gets(ptr1 -> name);
    gets(ptr1 ->varsity);
    scanf("%d",&ptr1 -> id);
    printf("Name %s\n",ptr1->name);

    printf("Varsity %s\n",ptr1-> varsity);
    printf("ID %d",ptr1 -> id);


}
