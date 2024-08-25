#include <stdio.h>
struct bookdetail
{
    char title[40];
    char author[40];
    char subject[40];
        int id,price;
};
void BookDetails(struct bookdetail b)
 {

        printf("Book Details :\n");
   printf("Title = %s\n",b.title);
    printf("Author = %s\n",b.author);
    printf("Subject = %s\n",b.subject);
       printf("ID = %d\n",b.id);
        printf("Price = %d\n",b.price);
        printf("\n");

}
int main()
{
    int n;
    printf("n : ");
    scanf("%d",&n);
    struct bookdetail b[n];
    int i;
    for(i=0;i<n;i++)
    {
        printf("Book Details %d :\n",i+1);
        printf("Title : ");
        fflush(stdin);
        gets(b[i].title);
        printf("Author : ");
        gets(b[i].author);
        printf("Subject : ");
        gets(b[i].subject);
        printf("ID : ");
        scanf("%d",&b[i].id);
        printf("Price : ");
        scanf("%d",&b[i].price);
       printf("\n");
    }
     printf("\n");
     for(i=0;i<n;i++)
        {
        BookDetails(b[i]);

        }
        getch();
}

