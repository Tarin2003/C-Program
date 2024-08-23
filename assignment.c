#include <stdio.h>
int main()
{
    char s[20];
    printf("Enter a string : ");
    gets(s);
    int i,vowel,consonat;
    i = vowel= consonat = 0;
      for(i=0;s[i];i++)
        {

            (s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'
               ||s[i]=='U')?vowel++ :consonat++;
        }

          printf("Vowel = %d\n",vowel);
          printf("Consonat = %d\n",consonat);

   return 0;
}
