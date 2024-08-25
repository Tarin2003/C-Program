#include<stdio.h>
#include<string.h>
union test
{
    int x,y;
    char a[20];
    char b[20];
};
int main()
{
    union test t1;
    strcpy(t1.a,"C Program");
    strcpy(t1.b,"SPL");
    printf("Name : %s\n",t1.a) ;
    printf("Name : %s\n",t1.b);
    union test t2;
    strcpy(t2.a,"CP");
    strcpy(t2.b,"DS");
    printf("Name : %s\n",t2.a) ;
    printf("Name : %s\n",t2.b);

    t1.x = 10;
    t1.y = 20;
    printf("X = %d\n",t1.x);
    printf("Y = %d\n",t1.y);
    t1.x = 10;
    printf("X = %d\n",t1.x);
    printf("Y = %d\n",t1.y);
    printf("Size = %d",sizeof(t1));
    return 0;
}
