#include<stdio.h>
#include<ctype.h>
char stack[20];
int top = -1;

void push(char elem)
{

        stack[++top]= elem;

}
char pop()
{



        return (stack[top--]);


}
int priority(char x)
{

    if(x == '+' || x == '-')
        return 1;
    if(x == '*' || x == '/')
        return 2;
    if(x == '^')
        return 3;
        else
        {
            return 0;
        }
}
int main()
{
    char infix[50],postfix[50],ch,elem;
    int i=0,k=0;
    printf("Enter Infix Expression : ");
    scanf("%s",infix);
    push('#');
    while( (ch=infix[i++]) != '\0')
    {
        if( ch == '(')
            push(ch);
        else
            if(isalnum(ch))
            postfix[k++]=ch;
            else
                if( ch == ')')
                {
                    while( stack[top] != '(')
                        postfix[k++]=pop();
                    elem=pop(); /* Remove ( */
                }
                else
                {       /* Operator */
                    while( priority(stack[top]) >= priority(ch) )
                        postfix[k++]=pop();
                    push(ch);
                }
    }
    while( stack[top] != '#')     /* Pop from stack till empty */
        postfix[k++]=pop();
    postfix[k]='\0';          /* Make postfix as valid string */
    printf("\nPostfix Expression =  %s\n",postfix);
}
