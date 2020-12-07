#include<stdio.h> 
#include<stdlib.h> 
  

struct Node 
{ 
    int data; 
    struct Node* next; 
}; 
  

void removeDuplicates(struct Node* head) 
{ 
    
    struct Node* current = head; 
  
    
    struct Node* next_next;  
    
    
    if (current == NULL)  
       return;  
  
   
    while (current->next != NULL)  
    { 
       
       if (current->data == current->next->data)  
       { 
                        
           next_next = current->next->next; 
           free(current->next); 
           current->next = next_next;   
       } 
       else 
       { 
          current = current->next;  
       } 
    } 
} 
  


void push(struct Node** head_ref, int new_data) 
{ 
   
    struct Node* new_node = 
            (struct Node*) malloc(sizeof(struct Node)); 
              
    
    new_node->data  = new_data; 
                  
   
    new_node->next = (*head_ref);      
          
 
    (*head_ref)    = new_node; 
} 
  

void printList(struct Node *node) 
{ 
    while (node!=NULL) 
    { 
       printf("%d ", node->data); 
       node = node->next; 
    } 
}  
void swap(struct Node *a, struct Node *b) 
{ 
    int temp = a->data; 
    a->data = b->data; 
    b->data = temp; 
} 


struct Node *bubbleSort(struct Node *start) 
{ 
    int swapped, i; 
    struct Node *ptr1=NULL; 
    struct Node *lptr = NULL; 
  
    /* Checking for empty list */
    if (start == NULL) 
        return start; 
  
    do
    { 
        swapped = 0; 
        ptr1 = start; 
  
        while (ptr1->next != lptr) 
        { 
            if (ptr1->data > ptr1->next->data) 
            {  
                swap(ptr1, ptr1->next); 
                swapped = 1; 
            } 
            ptr1 = ptr1->next; 
        } 
        lptr = ptr1; 
    } 
    while (swapped);
	return start; 
} 
  
/* function to swap data of two nodes a and b*/

 
int main() 
{ 
    
    struct Node* head = NULL; 
    
    int n,m;
    printf("Enter the number of elements to be entered :");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
    	printf("Enter the element :");
    	scanf("%d",&m);
    	push(&head, m); 
	}
    
                                     
  
    printf("\n Linked list before duplicate removal  "); 
    printList(head);  
  	printf("\n Linked list before sorting ");
  	head=bubbleSort(head);
  	printList(head);
  	printf("\n Linked list after sorting ");
  	printList(head);
    
    removeDuplicates(head);  
  
    printf("\n Linked list after duplicate removal ");          
    printList(head);             
    
    return 0; 
} 
