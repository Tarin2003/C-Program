#include<stdio.h>
struct book
{
    char name[20];
    int price;
};
int main()
{
    typedef struct book Book;
    typedef char leter;
    leter ch = 'a';
    Book b ={"Amar Jibonkotha",130};
    strcpy(b.name,"aa");
    b.price = 130;
    printf("Name : %s\n",b.name);
    printf("price : %d\n",b.price);
    printf("%c",ch);
}

