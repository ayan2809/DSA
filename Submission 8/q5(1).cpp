#include <stdio.h>
#include <stdlib.h>
void insert();
void delet();
void display();
struct  node
{
int data;
struct node *link;
};
struct node *first=NULL,*last=NULL,*next,*prev,*cur;
int nodecount=0;
int Length(struct node* head)
{
	int count = 0;
	struct node* current = head;
	while (current != NULL)
	{
		count++;
		current=current->link;
	}
	return count;
}
void FrontBackSplit(struct node* source, struct node** frontRef, 
					struct node** backRef)
{
	int len = Length(source);
	if (len < 2)
	{
		*frontRef = source;
		*backRef = NULL;
		return;
	}

	struct node* current = source;

	int hopCount = (len - 1) / 2; 
	for (int i = 0; i < hopCount; i++)
		current = current->link;

	
	*frontRef = source;
	*backRef = current->link;
	current->link = NULL;
}
void printList(struct node* head)
{
	struct node* ptr = head;
	while (ptr)
	{
		printf("%d -> ", ptr->data);
		ptr = ptr->link;
	}

	printf("null");
}

void insert()
{
  int pos,c=1;
  cur=(struct node*)malloc(sizeof(struct node));
 // printf("\nENTER THE DATA: ");
 //  scanf("%d",&cur->data);
 // cur->link=NULL;
  
   if(first==NULL)
   { printf("\nENTER THE DATA: ");
   	scanf("%d",&cur->data);
  cur->link=NULL;
    first=cur;
    nodecount++;
}
 
 else
{

     printf("number of nodes  in the list =%d \n",nodecount);
  printf("\nENTER THE POSITION: 1->for front & any other value for any other position");
  scanf("%d",&pos);
  if(pos>nodecount+1)
{
                 printf("\n Enter valid position \n");
}
else
{ printf("\nENTER THE DATA: ");
scanf("%d",&cur->data); 
  if((pos==1) &&(first!=NULL))
  {
   cur->link = first;
   first=cur;
  }
  else
  {
    next=first;
    while(c<pos)
    {
    prev=next;
    next=prev->link;
    c++;
    }
    if(prev==NULL)
    {
    printf("\nINVALID POSITION\n");
    }
    else
    {
    cur->link=prev->link;
    prev->link=cur;
    }
   }
   nodecount++;
}

}
}
void delet()
{
int pos,c=1;
printf("\nENTER THE POSITION : ");
scanf("%d",&pos);

if(pos>nodecount)
{
                 printf("\n Enter valid position \n");
}
else
{
if(first==NULL)
{
printf("\nLIST IS EMPTY\n");
}
else if(pos==1 && first->link==NULL)
{
printf("\n DELETED ELEMENT IS %d\n",first->data);
free(first);
first=NULL;
}
else if(pos==1 && first->link!=NULL)
{
cur=first;
first=first->link;
cur->link=NULL;
printf("\n DELETED ELEMENT IS %d\n",cur->data);
free(cur);
}
else
{
next=first;
while(c<pos)
{
cur=next;
next=next->link;
c++;
}
cur->link=next->link;
next->link=NULL;
if(next==NULL)
{
printf("\nINVALID POSITION\n");
}
else
{
printf("\n DELETED ELEMENT IS %d\n",next->data);
free(next);
}
}
}
}
void display()
{
  cur=first;
  while(cur!=NULL)
  {
    printf("\n %d",cur->data);
    cur=cur->link;
  }
}
int main()
{
int ch;

printf("\n\nSINGLY LINKED LIST");
do
{
printf("\n\n 1.INSERT\n 2.DELETE\n 3.Split the linked list into two and print it.\n 4.EXIT");
printf("\n\nENTER YOUR CHOICE : ");
scanf("%d",&ch);
switch(ch)
{

case 1:
	insert();
	display();
	break;
case 2:
	delet();
	display();
	break;
case 3:
	{struct node* head = NULL;
	struct node *a = NULL, *b = NULL;
	FrontBackSplit(first, &a, &b);
	
	printf("Front List : ");
	printList(a);
	
	printf("\nBack List  :  ");
	printList(b);
	break;}
case 4:
	exit(0);
	break;
default:
   printf("Invalid choice...");
}
}while(1);
}

