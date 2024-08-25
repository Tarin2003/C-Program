#include<stdio.h>
int main()
{
    int p,f,i,j,k,flag=0,pos=0;
    printf("How many Page : ");
    scanf("%d",&p);
    int page[p];
    printf("Enter the page :\n");
    for(i=0;i<p;i++)
    {
        scanf("%d",&page[i]);
    }
    printf("How many Frame : ");
    scanf("%d",&f);
    int frame[f];
    printf("Enter the Frame Number :\n");
    for(i=0;i<f;i++)
    {
        scanf("%d",&frame[i]);
    }
    printf("Page\t\t");
    for(i=0;i<f;i++)
    {
        printf("Frame-%d\t\t",frame[i]);
    }
    printf("\n");
    for(j=0;j<f;j++){
        frame[j]= -1;
    }
    for(i=0;i<p;i++)
    {
        flag =0;
        for(j=0;j<f;j++)
        {
            if(page[i] == frame[j]){
                flag =1;
                break;
            }
        }
        if(flag == 0)
        {
            frame[pos]= page[i];
            pos = pos + 1;
            if(pos>=f)
            {
                pos = 0;
            }
        }
         printf("%d\t\t",page[i]);
         for(k=0;k<f;k++){
            printf(" %d\t\t",frame[k]);
            }
            printf("\n");
    }
}


