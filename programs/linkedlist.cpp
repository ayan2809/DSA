#include<stdio.h>
#include<stdlib.h>
struct node
{
	int info;
	struct node *link;
};
struct node *createlist(struct node *start);
void displaylist(struct node *start);
void countnodes(struct node *start);
void search(struct node *start,int x);
struct node *insertinbeginning(struct node *start,int data);
void insertatend(struct node *start,int data);
void insertafter(struct node *start,int data,int x);
struct node *insertbefore(struct node *start,int data,int x);
struct node *insertatposition(struct node *start,int data,int k);
struct node *deletenode(struct node *start,int data);
struct node *reverselist(struct node *start);
main()
{
	struct node *start=NULL;
	int choice,data,x,k;
	start = createlist(start);
	while(1)
	{
		printf("\n");
		printf("1. Display List \n");
		printf("2. Count the number of nodes \n");
		printf("3. Search for an element\n");
		printf("4. Insert in empty list / Insert in beginning of list \n");
		printf("5. Insert at the end of the list \n");
		printf("6. Insert a node after a specified node \n");
		printf("7. Insert a node before a specified node \n");
		printf("8. Insert a node at a given position \n");
		printf("9. Delete a node \n");
		printf("10. Reverse the list \n");
		printf("11.  Exit \n");
		
		printf("Enter the choice \n");
		scanf("%d",&choice);
		
		if (choice ==11)
		{
			break;
			
		}
		
		switch(choice)
		{
			case 1:
				displaylist(start);
				break;
			case 2:
				countnodes(start);
				break;
			case 3:
				printf("Enter the element to be searched :");
				scanf("%d",&data);
				search(start,data);
				break;
			case 4:
				printf("Enter the element to be inserted :");
				scanf("%d",&data);
				start=insertinbeginning(start,data);
				break;
			case 5:
				printf("Enter the element to be inserted :");
				scanf("%d",&data);
				insertatend(start,data);
				break;
			case 6:
				printf("Enter the element to be inserted :");
				scanf("%d",&data);
				printf("Enter the element after which to insert :");
				scanf("%d",&x);
				insertafter(start,data,x);
				break;
			case 7:
				printf("Enter the element to be inserted :");
				scanf("%d",&data);
				printf("Enter the element before which to insert :");
				scanf("%d",&x);
				start=insertbefore(start,data,x);
				break;
			case 8:
				printf("Enter the element to be inserted :");
				scanf("%d",&data);
				printf("Enter the position at which to insert :");
				scanf("%d",&k);
				start=insertatposition(start,data,k);
				break;
			case 9:
				printf("Enter the element to be deleted :");
				scanf("%d",&data);
				start=deletenode(data);
				break;
			case 10:
				start=reverselist(start)
				break;
						
			default:
				printf("Wrong Input\n");
				
		}
		
	}
}
		
	
struct node *createlist(struct node *start)
	{
		int i,n,data;
		printf("Enter the number of nodes :");
		scanf("%d",&n);
		
		if(n==0)
			return start;
		
		printf("Enter the element to be inserted :");
		scanf("%d",&data);
		
		start=insertinbeginning(start,data);
		
		for(i=2;i<n;i++)
		{
			printf("Enter the element to be inserted :");
			scanf("%d",&data);
			insertatend(start,data);
		}
		return start;
		
}

struct node *insertinbeginning(struct node *start,int data)
{
	struct node *temp;
	temp=(struct node *)malloc(sizeof(struct node));
	temp->info=data;
	
	temp->link=start;
	start=temp;
	
	return start;
	
}
void insertatend(struct node *start,int data)
{
	struct node *p,*temp;
	temp=(struct node *)malloc(sizeof(struct node));
	temp->info=data;
	
	p=start;
	while(p->link!=NULL)
		p=p->link;
	
	p->link=temp;
	temp->link=NULL;
	
}
	void displaylist(struct node *start)
	{
		struct node *p;
		if(start ==NULL)
		{
			printf("The list is empty \n");
			return;
			
		}
		else
		{
			p=start;
			while(p!=NULL)
			{
				printf("%d  ",p->info);
				p=p->link;
		}
			printf("\n");
		
		}
		
	}
	void countnodes(struct node *start)
	{
		struct node *p;
		p=start;
		int n=0;
		while(p!=NULL)
		{
			n++;
			p=p->link;
			
		}
		printf("Number of nodes in the list is %d \n",n);
	}
	void search(struct node *start,int x)
	{
		struct node *p;
		p=start;
		int position=1;
		while(p!=NULL)
		{
			if( p->info==x)
			{
				break;
			}
			position++;
			p=p->link;
			
		}
		if(p==NULL)
		{
			printf("%d not found ",x);
		}
		else
		{
			printf("The element %d is found at position %d",x,position);
		}
		printf("\n");
	}
void insertafter(struct node *start,int data,int x)
{
	struct node *temp,*p;
	
	p=start;
	while(p!=NULL)
	{
		if(p->info==NULL)
		{
			break;
		}
		p=p->link;
	}
	if(p==NULL)
	{
		printf("%d not present in the list \n",x);
		
	}
	else
	{
		temp=(struct node *)malloc(sizeof(struct node));
		temp->info=data;
		temp->link=p->link;
		p->link=temp;
		
	}
}
struct node *insertbefore(struct node *start,int data,int x)
{
	struct node *temp,*p;
	if(start==NULL)
	{
		printf("List is empty\n");
		return start;
	}
	if (x==start->info)
	{
		temp=(struct node *)malloc(sizeof(struct node));
		temp->info=data;
		temp->link=start;
		start=temp;
		return start;
		
	}
	p=start;
	while(p->link!=NULL)
	{
		if(p->link->info==x)
			break;
		p=p->link;
	}
	if(p->link==NULL)
	{
		print("%d not present in the list \n",x);
	
	}
	else
	{
		temp=(struct node*)malloc(sizeof(struct node));
		temp->info=start;
		temp->link=p->link;
		
	}
	return start;
	
}
struct insertatposition(struct node *start,int data,int k)
{
	struct node *temp,*p;
	int i;
	
	if(k==1)
	{
		temp=(struct node*)malloc(sizeof(struct node))
		temp->info=data;
		temp->link=start;
		start=temp;
		return start;
	}
	p=start;
	for(i=1;i<k-1 && p!=NULL;i++)
	{
		p=p->link;
		
	}
	if(p==NULL)
	{
		printf("You can insert only upto %dth position \n\n",i);
		
	}
	else
	{
		temp=(struct node *)malloc(sizeof(struct node));
		temp->info=data;
		temp->link=p->link;
		p->link=temp;
		
	}
	return start;
	
}

