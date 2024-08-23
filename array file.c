#include <stdio.h>


int main()
{
        FILE *file;
    char name[20];
    int id[n], age[n], batch[n];

    char section[n];
	float gpa[n];
        int i,n ;
        file = fopen("st.txt","a");
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
   scanf("%d",&id[i]);
   printf("Enter Student Name : ");
   scanf("%s",name[i]);
   printf("Enter Student Age : ");
   scanf("%d",&age[i]);
   printf("Enter Student Batch : ");
   scanf("%d",&batch[i]);
   printf("Enter Student Section : ");
    scanf("%s",&section[i]);
    printf("Enter Student GPA : ");
	scanf("%f",&gpa[i]);
	fprintf(file,"%d\t\t%s\t\t%d\t\t%d\t\t%c\t\t%.2f\n",id[i],name[i],age[i],batch[i],section[i],gpa[i]);

    }
    fclose(file);

return 0;

}
