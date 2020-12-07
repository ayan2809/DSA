#include<stdio.h>
    #define SIZE 5
    void enQueue(int);
    void deQueue();
    void display();
    void disp();
    void Backup_Queue();
    int items[SIZE],b[100], front = -1, rear = -1,f2=-1,r2=-1;
    int main()
    {	
    	int ch=0,n=0;
    	deQueue();
    	printf("1.Enter the element to the queue \n 2. Delete an element from the queue \n 3. Display the queues \n 4. press 11 to exit from the process \n");
    	while(ch!=11)
    	{
    		printf("\n Enter your choice :");
    		scanf("%d",&ch);
    		switch(ch)
    		{
    		case 1:
    			printf("Enter the number to inputted in the queue \n");
    			scanf("%d",&n);
    			enQueue(n);
    			break;
    		case 2:
    			deQueue();
    			break;
    		case 3:
    			printf("\nThe original queue at the moment is \n");
    			display();
    			printf("\nThe backup queue at the moment is \n");
    			disp();
    			break;
    		default:
    			printf("\nWrong Input\n");
    			break;
    			
		}}
        
        return 0;

    }
    void enQueue(int value){
        if(rear == SIZE-1)
            {
			printf("\nQueue is Full!!\n");
			printf("Performing backup \n");
			Backup_Queue();
			rear=front=-1;
			enQueue(value);
        }
        else {
            if(front == -1)
                front = 0;
            rear++;
            items[rear] = value;
            printf("\nInserted -> %d", value);
        }
    }
    void deQueue(){
        if(front == -1)
            printf("\nQueue is Empty!!\n");
        else{
            printf("\nDeleted : %d\n", items[front]);
            front++;
            if(front > rear)
                front = rear = -1;
        }
    }
    void display(){
        if(rear == -1)
            printf("\n Original Queue is Empty!!!");
        else{
            int i;
            printf("\n Original Queue elements are:\n");
            for(i=front; i<=rear; i++)
                printf("%d\t",items[i]);
        }
    }
    void disp(){
        if(r2 == -1)
            printf("\n Backup Queue is Empty!!!");
        else{
            int i;
            printf("\n Backup Queue elements are:\n");
            for(i=f2; i<=r2; i++)
                printf("%d\t",b[i]);
        }
    }
    void Backup_Queue()
    {
        if(r2 == 99)
            {
			printf("\n Backup Queue is Full!!\n");
        }
        else {
        
            int i;
            for (i=0;i<SIZE;i++)
            {
            	if(f2 == -1)
                	f2 = 0;
            	r2++;
            	b[r2]=items[i];
            	
			}
        }
    }
	


