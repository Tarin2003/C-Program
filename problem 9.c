#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter number of student : ");
    scanf("%d",&n);
    char name[n];
    int mark;
    FILE *file;
    file = fopen("student1.o","a");

      for(i=0;i<n;i++)
      {
    printf("For Student%d\n",i+1);
    printf("Enter Name : ");
    scanf("%s",&name);
    printf("Enter Mark : ");
    scanf("%d",&mark);
    fprintf(file,"\nName : %s   Mark : %d\n",name,mark);
      }

    fclose(file);


    getch();
}

