#include <stdio.h>
struct student{
char name[20];
    int id, age, batch;

    char section[10];
	float gpa;
};


int main()
{
        FILE *file;
        int i,n ;
        struct student std;
        struct student *ptr;
        ptr = &std;
        file = fopen("stu.txt","a");
        if(file==NULL)
        {
           printf("File does not exist");

        }
        else
        {
            printf("File is opened\n");
        }
        scanf("%d",&n);

    for (i = 0; i<n; i++){
        printf("Enter Student ID : ");
   scanf("%d",&ptr->id);
   printf("Enter Student Name : ");
   scanf("%s",ptr->name);
   printf("Enter Student Age : ");
   scanf("%d",&ptr->age);
   printf("Enter Student Batch : ");
   scanf("%d",&ptr->batch);
   printf("Enter Student Section : ");
    scanf("%s",ptr->section);
    printf("Enter Student GPA : ");
	scanf("%f",&ptr->gpa);
	fprintf(file,"%d\t\t%s\t\t%d\t\t%d\t\t%s\t\t%.2f\n",ptr->id,ptr->name,ptr->age,ptr->batch,ptr->section,ptr->gpa);

    }
    fclose(file);

return 0;

}
