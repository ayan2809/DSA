#include<stdio.h>
int main()
{
	int x;
	int y;
	printf("Enter the number :");
	scanf("%d",&x);
	printf("Enter the digit to be searched :");
	scanf("%d",&y);
	int f=0,d=0;
	while(x!=0)
	{
		d=x%10;
		x=x/10;
		if (d==y)
		{
			f=1;
			break;
		}
		
	}
	if(f==1)
	{
		printf("Yes");
		
	}
	else
	{
		printf("No");
	}
}
