#include<stdio.h>
int main()
{
    int n;
    printf("How many process : ");
    scanf("%d",&n);
    int P[n],Pr[n],B[n],i,j,W[n],T[n],temp;
    W[0]=0;
    T[0]=0;
    printf("Enter the Process :\n");
    for(i=0;i<n;i++)
    {
      scanf("%d",&P[i]);
    }
     printf("Enter the Priority :\n");
    for(i=0;i<n;i++)
    {
      scanf("%d",&Pr[i]);
    }
    printf("Enter the Burst Time :\n");
    for(i=0;i<n;i++)
    {
      scanf("%d",&B[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(Pr[i]>Pr[j]){
                temp = Pr[i];
                Pr[i] = Pr[j];
                Pr[j] = temp;
                temp = P[i];
                P[i] = P[j];
                P[j] = temp;
                temp = B[i];
                B[i] = B[j];
                B[j] = temp;
            }
        }
    }
  printf("\nProcess\t  Priority\t  Burst Time\tWaiting Time\tTurn Around Time\n");
    for(i=0;i<n;i++){
        W[i]= 0;
        for(j=0;j<i;j++)
      {
        W[i] = W[i]+ B[j];
      }
     T[i]= B[i] + W[i];
     printf("\nP%d\t   %d\t\t   %d\t\t   %d\t\t   %d\n",P[i],Pr[i],B[i],W[i],T[i]);
    }
}

