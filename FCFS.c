#include<stdio.h>
int n;
int main()
{
    int B[n],i,j,W[n],T[n];
    W[0]=0;
    T[0]=0;
    printf("How many process : ");
    scanf("%d",&n);
    printf("Enter the burst time :\n");
    for(i=0;i<n;i++)
    {
      scanf("%d",&B[i]);
    }


    for(i=1;i<n;i++){
        W[i]=0;
        for(j=0;j<i;j++)
    {
        W[i]=W[i]+ B[j];
    }
    }

    printf("Process\t  Burst Time\tWaiting Time\tTurn Around Time\n");
    printf("-------\t  ----------\t------------\t----------------\n");
    for(i=0;i<n;i++)
    {
        T[i]=B[i]+ W[i];
        printf("P%d\t  %d\t\t%d\t\t%d\n",i+1,B[i],W[i],T[i]);
    }

}
