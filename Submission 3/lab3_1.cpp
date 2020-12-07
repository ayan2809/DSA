#include<stdio.h>
int sum(int x)
{ 
	if (x<10) return x;
	else return x%10+sum(x/10);
}
main( )
{ int p;
scanf("%d",&p);
printf("%d\n",sum(p));
}
