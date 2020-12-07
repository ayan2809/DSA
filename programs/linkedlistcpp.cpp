#include<iostream>
#include<stdlib.h>
using namespace std;
struct node
{
	int info;
	struct node *link;
	
};

int main()
{
	struct node *start =NULL;
	int choice,x,data,k;
	start=createlist(start);
}
struct node *createlist(struct node *start)
{
	int i,n,data;
	cout<<"Enter the number of nodes :";
	
	cin>>n;
	cout<<endl;
	
	if(n==0)
	{
		return start;
	}
	
	
	else
	{
		cout<<"Enter the element to be inserted : ";
		cin>>data;
		
		
		start=insertinbeginning(start,data);
		
		for(i=2;i<n;i++)
		{
			cout<<""		
		}
	}
}
