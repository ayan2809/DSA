#include<stdio.h>
    #define SIZE 5
    void enQueue(int);
    void enter(int);
    
    void deQueue();
    void remove();
    
    void display();
    void disp();
    int a[SIZE],b[SIZE] ,f1 = -1, r1 = -1,f2=-1,r2=-1;
    int main()
    {
        //deQueue is not possible on empty queue
        deQueue();
        int ch=0,n=0;
        printf("\n 1. Enter the token number \n 2.Enter the token for teachers \n 3.Service \n 4. Print the standing queue\n 5.enter 11 to exit the process \n");
        int k=0;
        while(ch!=11)
        {	
        	printf("\nEnter your choice :");
        	scanf("%d",&ch);
        	switch(ch)
        	{
        	case 1:
        		printf("Enter the token number");
        		scanf("%d",&n);
        		enQueue(n);
        		break;
        	case 2:
        		printf("Inputting number for special faculty \n");
        		enter(k);
        		break;
        	case 3:
        		if (f2>=0)
        			remove();
        		else
        			deQueue();
        	case 4:
        		printf("The queue for the students is \n");
        		display();
        		printf("The queue for the faculties is \n");
        		disp();
        		break;
        	default:
        		printf("\nWrong input\n");
        		break;
		}
	}

        
        return 0;

    }
    void enQueue(int value){
        if(r1 == SIZE-1)
            printf("\nQueue is Full!!\n");
        else {
            if(f1 == -1)
                f1 = 0;
            r1++;
            a[r1] = value;
            printf("\nInserted -> %d", value);
        }
    }
    void enter(int value){
        if(r2 == SIZE-1)
            printf("\nQueue is Full!!");
        else {
            if(f2 == -1)
                f2 = 0;
            r2++;
            b[r2] = value;
            printf("\nInserted -> %d", value);
        }
    }
    void deQueue(){
        if(f1 == -1)
            printf("\nThe Queue for normal people is Empty!!\n");
        else{
            printf("\nDeleted : %d\n", a[f1]);
            f1++;
            if(f1 > r1)
                f1 = r1 = -1;
        }
    }
    void remove(){
        if(f2 == -1)
            printf("\nThe queue for the teachers is  Empty!!\n");
        else{
            printf("\nDeleted : %d\n", b[f2]);
            f2++;
            if(f2 > r2)
                f2 = r2 = -1;
        }
    }
    void display(){
        if(r1 == -1)
            printf("\nQueue is Empty!!!\n");
        else{
            int i;
            printf("\nThe queue is :\n");
            for(i=f1; i<=r1; i++)
                printf("%d\t",a[i]);
        }
    }
    void disp(){
        if(r2 == -1)
            printf("\nQueue is Empty!!!\n");
        else{
            int i;
            printf("\nThe faculty queue is :\n");
            for(i=f2; i<=r2; i++)
                printf("%d\t",b[i]);
        }
    }

