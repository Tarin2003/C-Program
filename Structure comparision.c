#include <stdio.h>

struct student
{

     char name[20];
    int id;
};
    int main()
    {
        struct student s1 = {"Sadia",130};
        struct student s2 = {"Tarin",130};
        printf("Size = %d\n",sizeof(s1));
         if(s1.name==s2.name && s1.id==s2.id)

             printf("s1 equal s2\n");
             else
             printf("s2 not equal s2");


        return 0;
    }
