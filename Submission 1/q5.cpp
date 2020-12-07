#include<stdio.h>
int main()
{
	int x[20],n,sum=0;
	printf("Enter the length of the array ");
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		printf("Enter the element ");
		scanf("%d",&x[i]);
	}
	int f=n-1;
	for (int i=0;i<n;i++)
	{
		sum=sum+(x[i]*x[f]);
		f=f-1;
}
	printf("The sum of the consecutive elements in the array is %d ",sum);
	
}

