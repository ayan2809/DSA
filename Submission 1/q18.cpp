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

	printf("The array is \n");
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			printf("%d ",a[i][j]);
					}
		printf("\n");
	}
	
	
	
	printf("The elements are ");
	for(int i=0;i<n;i++)
	{	int min=a[i][0];
		for(int j=0;j<m;j++)
		{	
			if (a[i][j]<min)
			{
				min=a[i][j];
			}
		}
		printf("%d ",min);
	}
	
}
