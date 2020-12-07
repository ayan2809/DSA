#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
//using namespace std;
struct node
{
	int data;
	struct node *link;	
};
struct node *createlist()
{
	struct node* list=NULL;
	struct node *end=NULL;
	printf("Enter the elements in the list :\n");
	
	char ch='Y';
	do
	{	
	int n;
		printf("Enter the element :");
		scanf("%d",&n);
		struct node * newNode = (struct node *) malloc(sizeof(struct node));
		newNode->data = n;
		newNode->link = NULL;
		if(list == NULL){
			list = end = newNode;
		}
		else{
			end->link = newNode;
			end = end->link;
		}
		printf("Would you like to insert another element [Y/N] : ");
		scanf(" %c",&ch);
	}while(ch == 'y' || ch == 'Y');

	return list;
}
void print(struct node * list){
	if(list == NULL){
		printf("Empty List\n");
		return;
	}
	while(list!=NULL){
		printf("%d ",list->data);
		list = list->link;
	}
	printf("\n");
}
struct node *deletenode(struct node *list,int d)
{
	struct node *p=NULL;
	struct node *temp=NULL;
	if(list==NULL)
	return list;
	if(list->data==d)
	{
		temp=list;
		list=list->link;
		free(temp);
		return list;
	}
	p=list;
	
	while(p->link!=NULL)
	{
		if(p->link->data==d)
			break;
		p=p->link;
	}
	if(p->link!=NULL)
	{
		temp=p->link;
		p->link=temp->link;
		free(temp);
	}
	
	return list;
	
 } 
struct node* remove(struct node *list1,struct node *list2)
{
	struct node *list3=NULL,*p=NULL;
	list3=list1;
	p=list2;
	while(p!=NULL)
	{
		list1=deletenode(list1,p->data);
		p=p->link;
	}
	return list1;
}
int main()
{
	struct node *l1=NULL;
	struct node *l2=NULL;
	printf("The lists before the subtraction is :\n");
	l1=createlist();
	l2=createlist();
	print(l1);
	print(l2);
	l1=remove(l1,l2);
	
	printf("The list after subtraction from the second list is :\n");
	print(l1);
}
