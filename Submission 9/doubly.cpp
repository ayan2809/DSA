#include<stdlib.h>
#include<stdio.h>
struct node
{
	struct node *prev;
	int info;
	struct node *next;
};
struct node *createlist(struct node *start);
void displaynode(struct node *start);
struct node *insertinempty(struct node *start,int data);
struct node *insertinbegin(struct node *start,int data);
void insertatend(struct node *start,int data);
void inserafter(struct node *start,int data,int x);
struct node *insertbefore(struct node *start,int data,int x);
struct node *deletenode(struct node *start,int data);
struct node *reverselist(struct node *start);

int main()
{
	int x,data,choice;
	struct node *start=NULL;
	start=createlist(start);
	
	while(1)
	{
		printf("\n1.Display list\n");
		printf("2.Insert in an empty list \n");
		printf("3.Insert in the beginning of the list \n");
		printf("4.Insert at the end of the list\n");
		printf("5.Insert after a specified point in the list \n");
		printf("6.Insert a node before a specified node \n");
		printf("7.Delete a node\n");
		printf("8.Reverse the list \n");
		printf("9.Quit \n");
		printf("Enter your choice \n");
		scanf("%d",choice);
		
		if(choice==9)
		break;
		
		switch(choice)
		{
			case 1:
				displaylist(start)
		}
		
	}
	
}
