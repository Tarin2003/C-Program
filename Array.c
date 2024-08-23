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

        file = fopen("std.txt","a");
        if(file==NULL)
        {
           printf("File does not exist");

        }
        else
        {
            printf("File is opened\n");
        }
        scanf("%d",&n);
        struct student stuarr[n];
        printf("Enter id,name,age,batch,section and gpa :: \n");

    for (i = 0; i<n; i++){
        printf("Enter Student ID : ");
   scanf("%d",&stuarr[i].id);
   printf("Enter Student Name : ");
   scanf("%s",stuarr[i].name);
   printf("Enter Student Age : ");
   scanf("%d",&stuarr[i].age);
   printf("Enter Student Batch : ");
   scanf("%d",&stuarr[i].batch);
   printf("Enter Student Section : ");
    scanf("%s",stuarr[i].section);
    printf("Enter Student GPA : ");
	scanf("%f",&stuarr[i].gpa);
	fprintf(file,"%d\t\t%s\t\t%d\t\t%d\t\t%s\t\t%.2f\n",stuarr[i].id,stuarr[i].name,stuarr[i].age,stuarr[i].batch,stuarr[i].section,stuarr[i].gpa);

    }
    fclose(file);

return 0;

}
