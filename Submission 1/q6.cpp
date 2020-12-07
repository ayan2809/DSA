#include<stdio.h>
int main()
{
	int n=0,a[20];
	printf("Enter the length of the array \n");
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		printf("Enter the element ");
		scanf("%d",&a[i]);
	}
	int b[20];
	int f=0;
	for (int i=1;i<n;i++)
	{
		if (a[i]>a[i-1] && a[i]>a[i+1])
		{
			b[f]=a[i];
			f=f+1;
			
		}
	}
	for(int i=0;i<f;i++)
	{
		printf("%d ",b[i]);
	}
}
