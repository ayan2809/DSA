#include<stdio.h>
int sum(int x,int y,int a,int b,int s)
{	int j;
	if (x==y) 
		return s;
	else 
		
		j=a+b;
		y=y+1;
		s=j;
		a=b;
		b=j;
		return sum(x,y,a,b,s);
}
int main()
{ 
	int l,w,p;
	printf("Enter the term you want to search for (greater than 2) :");
	scanf("%d",&p);
	printf("The %d term of the lucas series is %d",p,sum(p,2,2,1,0));
	return 0;
}
