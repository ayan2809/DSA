#include<stdio.h>
int main()
{
	int n,a[20];
	printf("Enter the length of the array ");
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		printf("Enter the element ");
		scanf("%d",&a[i]);
	}
	int sum=0;
	for(int i=0;i<n;i++)
	{	int f=0;
		for(int j=i+1;j<n;j++)
		{
			if (a[i]>a[j])
			{
				f=f+1;
			}
			else{
				break;
			}
		}
		sum=sum+a[i]*f;
	}
	printf("The weighted sum is %d ",sum);
	return 0;
}
