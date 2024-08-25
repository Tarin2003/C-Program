#include <stdio.h>

struct student{
    char *name[50];
    int id, age, batch;
};
void studentInformation(struct student *stu)
{
    printf("Name : %s\n",stu->name);
    printf("Id : %d\n",stu->id);
    printf("Batch : %d\n",stu->batch);
}

int main()
{
        struct student student1,student2;
        strcpy(student1.name,"Sadia Tarin");
        student1.id = 130;
        student1.batch =21;
        strcpy(student2.name,"Tarin");
        student2.id = 13;
        student2.batch =21;
        studentInformation(&student1);
        studentInformation(&student2);

return 0;

}

