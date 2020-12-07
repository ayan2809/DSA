#include<stdio.h>
int main()
{
	int n,m,a[10][10];
	printf("Enter the row length of the matrix ");
	scanf("%d",&n);
	printf("Enter the column length of the matrix ");
	scanf("%d",&m);
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			printf("Enter the element ");
			scanf("%d",&a[i][j]);
		}
	}
	printf("The array is \n");
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			printf("%d ",a[i][j]);
					}
		printf("\n");
	}
	
	printf("The diagonal elements of the array are ");
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			if (i==j ||(i+j)==n-1)
			{
				printf("%d ",a[i][j]);
			}
		}
	}
}
