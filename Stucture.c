#include <stdio.h>

struct student{

     char name[13];
     char department[5];
    int id ,age,batch;
    char section[20];
    float gpa;
};
void studentInformation(struct student stu)
{
    printf("Name : %s\n",stu.name);
    printf("Department : %s\n",stu.department);
    printf("ID : %d\n",stu.id);
     printf("Age : %d\n",stu.age);
    printf("Batch : %d\n",stu.batch);
     printf("Section : %s\n",stu.section);
    printf("GPA : %.2f\n",stu.gpa);
    printf("\n");
}
int main()
{
    struct student student1 = {"Sadia Tarin","CSE",130,19,21,"CSE-21-D-B",4.00};
    struct student student2 = {"Fawjia","CSE",118,21,21,"CSE-21-D-B",3.70};
      studentInformation(student1);
      studentInformation(student2);

getch();

}







