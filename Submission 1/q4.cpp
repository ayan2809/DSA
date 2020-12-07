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
	for (int i=0;i<n-2;i++)
	{
		sum=sum+(x[i]-x[i+1])*(x[i+1]+x[i+2]);
}
	printf("The sum of the consecutive elements in the array is %d ",sum);
	
}

