#include<stdio.h>
int main()
{
   int num1=10,num2=1,d,c;
   switch(c=1)
   {
   case 1:
    {
        d = num1+num2;
        printf("%d + %d\n",num1,num2);
        printf("%d",d);
        break;
    }
    case 2:
    {
        d = num1-num2;
        printf("%d - %d\n",num1,num2);
        printf("%d",d);
        break;
    }
    case 3:
    {
        d = num1*num2;
        printf("%d * %d\n",num1,num2);
        printf("%d",d);
        break;
    }
      case 4:
    {
        d = num1/num2;
        printf("%d / %d\n",num1,num2);
        printf("%d",d);
        break;
    }
     case 5:
    {
        d = num1%num2;
        printf("%d %% %d\n",num1,num2);
        printf("%d",d);
        break;
    }
     default :
        printf("Invalid arithmetic expression");
   }
   return 0;


}


