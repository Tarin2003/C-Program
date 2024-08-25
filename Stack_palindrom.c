#include <stdio.h>
#include <string.h>

int main(){
    char string1[20];
    int i, length;
    int flag = 0;

    printf("Enter a string:");
    scanf("%s", string1);

    length = strlen(string1);

    for(i=0;i < length ;i++){
        if(string1[i] != string1[length-i-1]){
            flag = 1;
            break;
   }
}

    if (flag) {
        printf("%s is not a palindrome\n", string1);
    }
    else {
        printf("%s is a palindrome\n", string1);
    }
    printf("stack\n");
    int stack[3];
    for(i=0;i<3;i++)
    { scanf("%d",&stack[i]);
       }
    for(i=0;i<3;i++)
    {

        if(stack[i]!=stack[3-i-1])
        flag =1;
        break;
    }
    if(flag==1){
        printf("is not a palindrome");
    }
    else{
         printf("is a palindrome");
    }
    return 0;
}
