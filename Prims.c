#include<stdio.h>
#define v 6
void prims(int a[v][v])
{
    int i,j;
    int parent[10],key[10],set[10],u;
    for(i=0;i<v;i++)
    {
        key[i]=999;
        set[i]=0;
    }
    key[0]=0;
    parent[0]=-1;
    for(i=0;i<v-1;i++)
    {
        u = minkey(key,set);
        set[u]=1;
        for(j=0;j<v;j++)
            if(a[u][j]&& set[j]==0 && a[u][j]<key[j])
        {
            parent[i]= u;
            key[j] = a[u][j];
        }
    }
    displayMST(parent,a);
}
int minkey(int key[],int set[])
{
    int min = 999,index;
    for(int i=0;i<v;i++)
        if(set[i]==0 && key[i]<min)
    {
        min = key[i];
        index = i;
    }
    return index;
}
void displayMST(int parent[],int a[v][v])
{
    printf("Edge\t weight\n");
    for(int i=0;i<v;i++)
        printf("%d - %d\t %d\n",parent[i],i,a[i][parent[i]]);
}
int main()
{
  int i,j,a[10][10];
  printf("Enter Adjacency matrix ");
  for(i=0;i<v;i++)
    for(j=0;j<v;j++)
    scanf("%d",&a[i][j]);
  prims(a);
}
