#include<stdio.h>
int main()
{
	int n,a[20];
	printf("Enter the length of the array ");
	scanf("%d",&n);
	for (int i=0;i<n;i++)
	{
		printf("Enter the element ");
		scanf("%d",&a[i]);
		
	}
	for(int i=0;i<n;i++)
	{
		if (a[i]%2==0)
		{
			printf("%d",(i+1));
			break;
		}
	}
}
