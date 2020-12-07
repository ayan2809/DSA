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
	for(int i=0;i<n;i++)
	{
		sum=sum+(a[i]*b[f]);
		f=f-1;
	}
	printf("The sum is %d",sum);
}
