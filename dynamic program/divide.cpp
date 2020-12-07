#include<stdio.h>
#include<conio.h>
int fib( int );
main()
{ int n,m,i;
  printf(" enter the n value \n");
  scanf("%d",&n);
    m= fib(n);
  printf("\n fib(%d )= %d",n,m);
  getch();
}
int fib( int n)
{    printf(" enter n= %d    \n",n); 
    if(n==1 || n==0) return n;
    else 
    return fib(n-1)+fib(n-2);
    
}    
  
  
