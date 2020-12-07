#include<stdio.h>
int main()
{
	int n,m,a[20],b[20];
	printf("Enter the length of the first array ");
	scanf("%d",&n);
	printf("Enter the length of the second array ");
	scanf("%d",&m);
	for(int i=0;i<n;i++)
	{
		printf("Enter the elements ");
		scanf("%d",&a[i]);
	}
	for(int i=0;i<m;i++)
	{
		printf("Enter the elements ");
		scanf("%d",&b[i]);
	}
	int f=m-1;
	int sum=0;
	int pro=0;
	for(int i=0;i<n;i++)
	{	pro=0;
		for(int j=i;j<m;j++)
		{
			pro=pro+b[j];
		}
		sum=sum+(a[i]*pro);
		
	}
	printf("The sum is %d",sum);
}
