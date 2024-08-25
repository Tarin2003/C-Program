#include<stdio.h>
struct student
{
    char name[20];
    int id;
    int section;
};
void studentInformation(struct student stu)
{
    printf("Name : %s\n",stu.name);
    printf("Id : %d\n",stu.id);
    printf("Batch : %d\n",stu.section);
}

int main()
{
    struct student student1 = {"};;
    struct student student2;
    student2.id = 130;
    switch(student2.id)
    {
        case 130 : printf("%d",student2.id);
                  break;
        case 111 :printf("%d",student2.id);
    }
    int i;
    for(i=0;i<2;i++)
    {
        printf("Student-%d information\n",i+1);
        printf("name :");
        fflush(stdin);
        gets(student1[i].name);
        printf("ID :\n");
        scanf("%d",&student1[i].id);
        printf("Section :\n");
        scanf("%d",&student1[i].section);
    }
    for(i=0;i<2;i++)
        studentInformation(student1[i]);


    return 0;
}
