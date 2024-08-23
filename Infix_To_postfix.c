#include<stdio.h>

//defining stack
char stack[100];
int top = -1;
void push(char x)
{
    stack[++top] = x;
}
char pop()
{

     return stack[top--];


}

int priority(char x)
{

    if(x == '+' || x == '-')
       return 1;
    if(x == '*' || x == '/')
       return 2;

     else
        return 0;
}
int main()
{
char exp[100];
char  x;
//user enters the infix expression that needs to be converted
   printf("Enter the infix expression : ");
    gets(exp);
   printf("\n");
   printf("\nPostfix Expression : ");
    int i = 0;
    push('#');
  while(exp[i] != '\0') {
      if(isalnum(exp[i]))
      {
          printf("%c ",exp[i]);
      }

      else if(exp[i] == '(')
      {
          push(exp[i]); //checking for a right parenthesis else if(e == ')'
      }

      else if(exp[i] == ')')
      {


         while((x = pop())!= '(')
                printf("%c ",x);//x=+



      }
      else
      {
         while(priority(stack[top]) >= priority(exp[i]))
          {
             printf("%c ",pop());
          }

            push(exp[i]);
       }

  i++;
}
      while( stack[top] != '#')
      {
         printf("%c ",pop());
      }

return 0;
}

