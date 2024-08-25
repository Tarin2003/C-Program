#include <stdio.h>
int main()
{
    int a;
    printf("------MENU LIST-------\n");
    printf("\n1. Vegetable, Fish\n");

    printf("\n2. Vegetable, Chicken\n");
    printf("\n3. Vegetable, Egg\n");
    printf("\nEnter your choice : " );
    scanf("%d",&a);
    switch(a)
    {
    case 1:
        printf("\nVegetable, Fish\n");
        break;
    case 2:
        printf("\nVegetable, Chicken\n");
        break;
     case 3:
        printf("\nVegetable, Egg\n");
        break;
     default :
        printf("\nInvalid choice");

    }
}
