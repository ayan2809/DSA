#include<stdio.h>
int main()
{
	int n,m,a[10][10];
	int b[10][10];
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
	int k[10],c=0;
	printf("The array is \n");
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			printf("%d ",a[i][j]);
			if(i==j)
			{
				k[c]=a[i][j];
				c=c+1;
			}
					}
		printf("\n");
	}
	
	
	
	printf("The resultant array is \n");
	int min=a[0][0],f=0;
	for(int i=0;i<n;i++)
	{	
		for(int j=0;j<m;j++)
		{	
			b[i][j]=a[i][j]/k[f];
		}
		f=f+1;
		}
		
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			printf("%d ",b[i][j]);
		}
		printf("\n");
	}
	
	
}
