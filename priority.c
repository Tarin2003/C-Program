#include<stdio.h>
int main()
{
    int n;
    printf("How many process : ");
    scanf("%d",&n);
    int P[n],Pr[n],B[n],i,j,W[n],T[n],temp;
    int avg_waiting_time = 0,avg_turn_time=0;
    W[0]=0,T[0]=0;
    printf("Enter the Process :\n");
    for(i=0;i<n;i++)
    {
      scanf("%d",&P[i]);
    }
    printf("Enter the Burst Time :\n");
    for(i=0;i<n;i++)
    {
      scanf("%d",&B[i]);
    }
     printf("Enter the Priority :\n");
     for(i=0;i<n;i++)
    {
      scanf("%d",&Pr[i]);
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
  printf("\nProcess\t   Burst Time\t  Priority\tWaiting Time\tTurn Around Time\n");
    for(i=0;i<n;i++){
        W[i]= 0;
        for(j=0;j<i;j++)
      {
        W[i] = W[i]+ B[j];
      }
      avg_waiting_time = avg_waiting_time + W[i];
     T[i]= B[i] + W[i];
     printf("\nP%d\t     %d\t\t    %d\t\t   %d\t\t   %d\n",P[i],B[i],Pr[i],W[i],T[i]);
     avg_turn_time = avg_turn_time + T[i];
    }
    printf("Average Waiting Time : %.2f\n",(float)avg_waiting_time/(float)n);
    printf("Average Turn Around Time : %.2f\n",(float)avg_turn_time/(float)n);
}

