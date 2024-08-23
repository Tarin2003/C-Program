#include <stdio.h>
int main()
{
    char s[20];

    printf("Enter a string : ");
    gets(s);
    int i,vowel,consonant,space,other;
    i = vowel=space=consonant= other= 0;
      for(i=0;s[i];i++)
        {

            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'
               ||s[i]=='U')
                {
               vowel++;
        }


          else if((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z'))
            {
            consonant++;
          }
            else if(s[i]== ' '){
                space ++;
            }
                else{
                    other++;
                }

        }

          printf("Number of Vowel = %d\n",vowel);
          printf("Number of Consonant = %d\n",consonant);
          printf("Number of Space = %d\n",space);
          printf("Other=%d\n",other);


   return 0;
}



