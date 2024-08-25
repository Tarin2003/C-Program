#include<stdio.h>
int main()
{
    int even[5] = {0, 2, 4, 6, 8};
   int odd[5]= {1, 3, 5, 7, 9};
    int c[10],i,index=0;
    printf("\n  Even-> ");

    for(i=0;i<5;i++){

    printf(" %d", even[i]);

}

printf("\n  Odd -> ");

    for(i=0;i<5;i++){

    printf(" %d", odd[i]);

}
    for(i=0;i<5;i++){

    c[index++] = even[i];
    }
        for(i=0;i<5;i++){

    c[index++] = odd[i];
        }

printf("\nConcat->");
       for(i=0;i<10;i++)
       {

       printf(" %d", c[i]);
       }
    return 0;
}


