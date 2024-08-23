#include <stdio.h>
#include<stdlib.h>
int i,n,pos,element;
int a[10];
void create()
{
    printf("Enter the size of the array elements: ");
    scanf("%d",&n);
    printf("Enter the elements for the array :\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
}

void display()
{
    printf("The array elements are: \n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
}

void insert()
{

          printf("Enter the position for the new element:");
            scanf("%d",&pos);
            printf("\nEnter the element to be inserted:   ");
            scanf("%d", &element);

            for(i=n-1; i>=pos ; i--)
            {
                a[i+1] = a[i];
            }
            a[pos] = element;
            n = n+1;
            display();

}

void delete()
{

    printf("Enter the position of the element to be deleted:");
    scanf("%d",&pos);
    element = a[pos];

            printf("\nDeleted element is : %d \n", element);
            for( i = pos; i< n-1; i++)
            {
                a[i] = a[i+1];
            }
            n = n-1;
            display();

}
void main()
{
  int choice;
    while(1)
       {
        printf("\n\n....Menu.....");
        printf("\n1. Create");
        printf("\n2. Display");
        printf("\n3. Insert");
        printf("\n4. Delete");
        printf("\n5. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);
            switch(choice)
                        {
                          case 1: create();
                                   break;
                          case 2: display();
                                  break;
                          case 3: insert();
                                  break;
                          case 4: delete();
                                  break;
                          case 5: exit(0);
                                  break;
                         default:
                                printf("\nPlease enter a valid choice: ");
                        }
        }
        return 0;
}
