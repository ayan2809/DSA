#include<stdio.h>
int main()
{
	int n,m,a[10][10],b[10][10],c[10][10];
	printf("Enter the row length of the two matrix ");
	scanf("%d",&n);
	printf("Enter the column length of the two matrix ");
	scanf("%d",&m);
	printf("Enter the elements of the first matrix \n");
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			printf("Enter the element ");
			scanf("%d",&a[i][j]);
		}
	}
	printf("Enter the elements of the second matrix \n");
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			printf("Enter the element ");
			scanf("%d",&b[i][j]);
		}
	}
	printf("The  first array is \n");
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			printf("%d ",a[i][j]);
					}
		printf("\n");
	}
	
	printf("The  second array is \n");
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			printf("%d ",b[i][j]);
					}
		printf("\n");
	}
	
	printf("The sum of the two arrays is \n ");
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
		}
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			printf("%d ",c[i][j]);
					}
		printf("\n");
	}
}
