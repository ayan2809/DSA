#include<stdio.h>
int main()
{
	int n,m,a[10][10],b[10][10],c[10][10],n1,m1;
	printf("Enter the row length of the first matrix ");
	scanf("%d",&n);
	printf("Enter the column length of the first matrix ");
	scanf("%d",&m);
	printf("Enter the row length of the first matrix ");
	scanf("%d",&n1);
	printf("Enter the column length of the first matrix ");
	scanf("%d",&m1);
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
	for(int i=0;i<n1;i++)
	{
		for(int j=0;j<m1;j++)
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
	for(int i=0;i<n1;i++)
	{
		for(int j=0;j<m1;j++)
		{
			printf("%d ",b[i][j]);
					}
		printf("\n");
	}
	int sum=0;
	if (m!=n1)
	{
		printf("The array cannot be multiplied \n");
	}
	else
	{
	printf("The product of the two arrays is \n ");
	for ( int i = 0 ; i < n ; i++ )
    {
      for ( int j = 0 ; j < m ; j++ )
      {
        for ( int k = 0 ; k < n1 ; k++ )
        {
          sum = sum + a[i][k]*b[k][j];
        }
 
        c[i][j] = sum;
        sum = 0;
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
}
