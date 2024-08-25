#include <stdio.h>
struct book
{
    char title[20];
    char author[21];
    char subject[10];
        int id,price;
};
void studentInformation(struct book b)
{
printf("Title = %s\n",b.title);
    printf("Author = %s\n",b.author);
    printf("Subject = %s\n",b.subject);
       printf("ID = %d\n",b.id);
        printf("ID = %d\n",b.price);
}

int main()
{
    struct book b1={"CSE","Sadia Tarin Ummehani","SPL",130};
    struct book b2={"CSE","Tarin","DS",111};

        printf("Title = %s\n",b1.title);
    printf("Author = %s\n",b1.author);
    printf("Subject = %s\n",b1.subject);
        printf("ID = %d\n",b1.id);
printf("Title = %s\n",b2.title);
    printf("Author = %s\n",b2.author);
    printf("Subject = %s\n",b2.subject);
        printf("ID = %d\n",b2.id);

       studentInformation(b1);
       studentInformation(b2);

}
