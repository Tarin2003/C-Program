#include<stdio.h>
void Sort(int *a,int n)
{
   int i,j,temp;
for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1;j++)
		{
			if(*(a+j)>*(a+j+1))
			{
				temp = *(a+j);
				*(a+j) = *(a+j+1);
				*(a+j+1) = temp;
			}
		}
	}
	printf("After sorting it in ascending order :\n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",*(a+i));
	}
}
int main()
{
	int n,i;
	printf("Enter size of array : ");
	scanf("%d",&n);

    int *array[n];
	printf("Enter %d Elements :\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",array+i);
	}
	Sort(array,n);

    getch();

}
