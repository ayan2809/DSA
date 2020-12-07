#include<stdio.h>
int main()
{
	int n,a[20];
	printf("Enter the number of elements in array ");
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		printf("Enter the elements ");
		scanf("%d",&a[i]);
		
	}
	for (int i=0;i<n-1;i++)
	{
		if(a[i]%2==0 && a[i+1]%2==0)
		{
			printf("%d",(i+1));
			break;
		}
		
	}
}
