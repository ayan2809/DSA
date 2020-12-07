#include<stdio.h>
#include<conio.h>
int fib( int );
int saveF[100];
main()
{ int n,m,i;
  printf(" enter the n value \n");
  scanf("%d",&n);
  for(i=0;i<=n;i++)
   saveF[i]=0;// intially all values in the matrix zeros
   m=  fib(n);
  printf("\n fib(%d )= %d",n,m);
  getch();
}
int fib( int n)
{   
     if(saveF[n]>0)
       return saveF[n];
    if(n==1 || n==0) return n;
    else
          saveF[n]= fib(n-1)+fib(n-2);
     printf(" exit  n= %d    saveF[%d]= %d\n",n,n,saveF[n]);
        return saveF[n];
}    
  
  
