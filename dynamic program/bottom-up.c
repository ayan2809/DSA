#include<stdio.h>
#include<conio.h>
main() {
       int F[100],i,n;
       printf(" enter the value of n \n");
       scanf("%d",&n);
       F[0]=0;
       F[1]=1;
       for(i=2;i<=n;i++)
       F[i]=F[i-1]+F[i-2];
       printf("the fibonacci sequnce is \n");
        for(i=0;i<=n;i++)
        printf("\n %d    ",F[i] );
       //   printf("\n");
        getch();
        }
          
