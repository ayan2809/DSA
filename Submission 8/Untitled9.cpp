#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node* link;
};


void deleteNode(struct node **head_ref, int key) 
{ 
    
    struct node* temp = *head_ref, *prev; 
  
    
    if (temp != NULL && temp->data == key) 
    { 
        *head_ref = temp->link;    
        free(temp);                
        return; 
    } 
  
   
    while (temp != NULL && temp->link != key) 
    { 
        prev = temp; 
        temp = temp->link; 
    } 
  
     
    if (temp == NULL) return; 
  
     
    prev->link = temp->link; 
  
    free(temp);  
} 
  

struct node * createList(int listNum){
	struct node * list = NULL;
	struct node * list_tail = NULL;
	printf("Enter elements of List %d in increasing order\n",listNum);
	char ch = 'y';
	do{
		int data;
		printf("Enter element : ");
		scanf("%d",&data);
		struct node * newNode = (struct node *) malloc(sizeof(struct node));
		newNode->data = data;
		newNode->link = NULL;
		if(list == NULL){
			list = list_tail = newNode;
		}
		else{
			list_tail->link = newNode;
			list_tail = list_tail->link;
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

int main()
{
	struct node *L1;
	struct node *L2;
	
	struct node *h2;
	
	L1 = createList(1);
	L2 = createList(2);
	
	printf("List 1 : ");
	print(L1);
	printf("List 2 : ");
	print(L2);
	h2=L2;
	while(h2!=NULL)
	{
		struct node *h1;
		h1=L1;
		while (h1!=NULL)
		{
			if(h1->data==h2->data)
			{
				//deleteNode(&h1,h2->data);
				struct node *temp;
				temp = h1;
        		h1 = h1->link;
        		//free(temp);
			}
			else
			{
				h1=h1->link;
			}
		}
		h2=h2->link;
		
	}
	
	printf("The list 1 after subtraction is :");
	
	print(L1);
	
}
