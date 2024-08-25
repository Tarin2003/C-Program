#include<stdio.h>
 int n;

int main()
{

    int B[n],i,j,W[n],T[n],P[n],temp;
    W[0]=0;
    T[0]=0;
    printf("How many process : ");
    scanf("%d",&n);
    printf("Enter the process :\n");
    for(i=0;i<n;i++)
    {
      scanf("%d",&P[i]);
    }
    printf("Enter the burst time :\n");
    for(i=0;i<n;i++)
    {
      scanf("%d",&B[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(B[i]>B[j]){
                temp = B[i];
                B[i] = B[j];
                B[j] = temp;
                temp = P[i];
                P[i] = P[j];
                P[j] = temp;
            }
        }
    }
  printf("Process\t  Burst Time\tWaiting Time\tTurn Around Time\n");
    for(i=0;i<n;i++){
        W[i]=0;
        for(j=0;j<i;j++)
      {
        W[i]=W[i]+ B[j];
      }
     T[i]=B[i]+ W[i];
     printf("\nP%d\t   %d\t\t  %d\t\t  %d\n",P[i],B[i],W[i],T[i]);
    }
}

