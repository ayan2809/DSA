#include<stdio.h>
int sum(int x,int y,int s)
{
	if (y==x) 
		return s;
	else 
		y=y+1;
		s=s-(.15*s);
		return sum(x,y,s);
}
int main()
{ 
	int l,w,p;
	printf("Enter the time :");
	scanf("%d",&p);
	printf("The amount remaining after decaying is : %d\n",sum(p,0,100));
	return 0;
}

