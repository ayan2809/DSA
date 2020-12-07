
#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{

    int data;
    struct Node *next;
    struct Node *prev;
}node;

void insert(node **head_addr,node **tail_addr, int data)
{
    // Use tail pointer to insert at the end
    // Allocate memory for the new node
        node *newnode;
        newnode=(node *)malloc(sizeof(node));
        newnode->data = data;
        newnode->next = NULL;
        newnode->prev=NULL;

        //if the list is empty
        if(*head_addr==NULL)
        {
            *head_addr=newnode;
            *tail_addr=newnode;
        }

        else
        {
            (*tail_addr)->next=newnode;
            newnode->prev=*tail_addr;
            *tail_addr=newnode;
        }
}

void *del_last(node **head_addr,node** tail_addr)
{
    node *temp=*tail_addr;
    if(temp!=NULL)
    {
      if(*head_addr==*tail_addr)
        *head_addr=*tail_addr=NULL;
      else
    {
      (*tail_addr)->prev->next=NULL;
      *tail_addr=(*tail_addr)->prev;
    }
    free(temp);
    }
    else
        printf("\n list is empty\n");

}

void printforward(node *head)
{
        if(head==NULL)
        return;
        printf("%d\n", head->data);
        printforward(head->next);
        return;
}

void printbackward(node *tail)
{
      if(tail==NULL)
        return;
        printf("%d\n", tail->data);
        printbackward(tail->prev);

}

node *find(node* head, int value)
{
  while(head!=NULL && head->data!=value)
     head=head->next;
  return head;
}
node  *del(node *head,int a,int b)
{
	node *p=NULL;
	node *p1=NULL;
	p=head;
	p1=head;
	int f=0,k=0;
	while(p->next!=NULL)
	{
		f=f+1;
		if(f==a)
		{
		p=p->prev;
		break;
	}
	
		p=p->next;
	}
	while(p1->next!=NULL)
	{
		k=k+1;
		if(k==b)
		{
			p1=p1->next;
		break;
	}
		p1=p1->next;
	}
	p->next=p1;
	p1->prev=p;
	return head;
	
}

int main()
{
        int data,choice, printoption;

        // head always points to the first node of the linked list
        // tail always points to the last node of the linked list
        node *head,*tail,*temp;
        tail=head=NULL;

        do
        {
           printf("1. Insert \n");
           printf("2. Display the list\n");
           printf("3.Find\n");
           printf("4.Delete last\n");
           printf("5.To Delete the middle elements \n");
           printf("Enter your choice\n");
           scanf("%d",&choice);
           switch(choice)
           {
           case 1:
            printf("Enter the data to be inserted\n");
            scanf("%d",&data);
            insert(&head,&tail,data);
            break;
           case 2:

            printf("1.forward?\n 2. backward?\n");
            scanf("%d",&printoption);
            if(printoption==1)
               printforward(head);
            else
                printbackward(tail);
            break;
           case 3:
            printf("Enter the data to be found\n");
            scanf("%d",&data);
            temp=find(head,data);
            if(temp==NULL)
                printf("data is not found\n");
            else
                printf("data %d is found\n", temp->data);
            break;
           case 4:
            del_last(&head,&tail);
            break;
            case 5:
            	int a;
            	int b;
            	printf("Enter the position from where you want to start deleting \n");
            	scanf("%d",&a);
            	printf("Enter the position till where you want to delete \n");
            	scanf("%d",&b);
            	node *p=NULL;
            	p=del(head,a,b);
            	
           }

        }
        while(choice<=5);

  return 0;
}

