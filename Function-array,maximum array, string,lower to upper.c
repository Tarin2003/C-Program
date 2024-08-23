#include <stdio.h>

void ArrayPrint(int b[])
{
    int i;
    printf("Array element : ");
    for(i=0;i<3;i++)
    {
        printf("%d\t",b[i]);

    }
    printf("\nArray element Reverse :\t");
    for(i=3-1;i>=0;i--)
        printf("%d\t",b[i]);

}
    void Max(int b[])
    {
        int i;
        int max = b[0];
        for(i=1;i<3;i++)
        {
          if (max<b[i])
                max = b[i];
        }
        printf("\nmaximum : %d",max);
    }
    void StringPrint(char str[])
    {
        printf("\n%s",str);
        strrev(str);
        printf("\nString revers : %s",str);
    }
    void LowerToUpper(char b)
    {
        printf("\nlower = %c\nLower to upper = %c",b,b-32);
    }

int main()
{
    int a[]={10,20,30};
    ArrayPrint(a);
    Max(a);
    char s []="Hello word";
    StringPrint(s);
    char lower= 'a';
    LowerToUpper(lower);
}
