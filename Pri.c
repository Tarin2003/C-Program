#include<stdio.h>
#define INFINITY 999
#define MAX 10


int main()

{

int a,b,u,v,n,i,j,ne=1;

int visited[MAX]={0},min ,mincost=0,cost[MAX][MAX];

	printf("\nEnter the number of vertex:");

	scanf("%d",&n);

	printf("\nEnter the cost adjacency matrix:\n");

	for(i=1;i<=n;i++)

	for(j=1;j<=n;j++)

	{

		scanf("%d",&cost[i][j]);

		if(cost[i][j]==0)

			cost[i][j]=999;

	}

	visited[1]=1;

	printf("\n");

	while(ne < n)

	{

		for(i=1,min = INFINITY; i<=n;i++)

		for(j=1;j<=n;j++)

		if(cost[i][j]< min)

		if(visited[i]!=0)

		{

			min=cost[i][j];

			a=u=i;

			b=v=j;

		}

		if(visited[u]==0 || visited[v]==0)

		{

			printf("Edge %d:(%d %d) cost:%d\n",ne++,a,b,min);

			mincost = mincost + min;

			visited[b]=1;

		}

		cost[a][b]=cost[b][a]= INFINITY;

	}

	printf("Total cost = %d",mincost);

	return 0;

}

