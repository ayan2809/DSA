#include<stdio.h>
int sum(int x,int y,int s)
{	//printf("%d\n",y);
	if (y==x) 
		return s;
	else 
		y=y+1;
		return s+200+sum(x,y,s);
}
int main()
{ 
	int l,w;
	printf("Enter the length of the room :");
	scanf("%d",&l);
	printf("\nEnter the width of the room :");
	scanf("%d",&w);
	int p=l*w;
	printf("The total cost for carpeting the room is %d\n",sum(p,0,0));
	return 0;
}
