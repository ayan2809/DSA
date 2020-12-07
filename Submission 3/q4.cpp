#include<stdio.h>
int sum(int x,int y,int j)
{	
	if (y==j) 
		return 1;
	else if (x==0)
		return 0;
	else 
	{
		j=x%10;
		x=x/10;
		return sum(x,y,j);
}
}
int main()
{ 
	int x,y;
	printf("Enter the number :");
	scanf("%d",&x);
	printf("\nEnter the digit to be searched :");
	scanf("%d",&y);
	if (sum(x,y,0)==1)
	{
		printf("Yes");
	}
	else
	{
		printf("No");
	}
	return 0;
}

