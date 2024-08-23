#include <stdio.h>
#include<conio.h>
char str[100], pat[50], rep[50], ans[100];
int i, j, c, m, k, flag=0;
void StringMatch()
{
   i = m = c = j = 0;
   while(str[c]!= '\0')
   {
     if(str[m] == pat[i])
      {
          i++;
          m++;
          c = m;
        if(pat[i] == '\0')
        {

           flag = 1;

        for(k = 0; rep[k] != '\0'; k++)
        {
           ans[j] = rep[k];
           j++;
        }


        }
     }
 else
     {
     ans[j] = str[c];
         j++;
         c++;
        m = c;
        i = 0;
    }
 }

} //end stringmatch()
void main()
{

   printf("Enter a main string : ");
    gets(str);
    printf("\nEnter a pattern string : ");

    gets(pat);
    printf("\nEnter a replace string : ");
     gets(rep);

      StringMatch();
        if(flag == 1){
     printf("\nPattern string found\n");
     printf("\nThe resultant string is : %s\n",ans);

    }
  else{
    printf("\nPattern string not found\n");
    printf("\nThe resultant string is : %s\n" , str);
     }
 getch();
}
