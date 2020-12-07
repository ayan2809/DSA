#include<bits/stdc++.h> 
  
using namespace std; 
  
/* A binary tree node has data, pointer to left child 
   and a pointer to right child */
struct node 
{ 
   int data; 
   struct node* left; 
   struct node* right; 
}; 
  
/* If target is present in tree, then prints the ancestors 
   and returns true, otherwise returns false. */
bool printAncestors(struct node *root, int target) 
{ 
  /* base cases */
  if (root == NULL) 
     return false; 
  
  if (root->data == target) 
     return true; 
  
  /* If target is present in either left or right subtree of this node, 
     then print this node */
  if ( printAncestors(root->left, target) || 
       printAncestors(root->right, target) ) 
  { 
    cout << root->data << " "; 
    return true; 
  } 
  
  /* Else return false */
  return false; 
} 
  
/* Helper function that allocates a new node with the 
   given data and NULL left and right pointers. */
struct node* newnode(int data) 
{ 
  struct node* node = (struct node*) 
                       malloc(sizeof(struct node)); 
  node->data = data; 
  node->left = NULL; 
  node->right = NULL; 
  
  return(node); 
} 
 
 void inOrder(struct node *root) 
{ 
	stack<node *> s; 
	node *curr = root; 
	int f=0;
	while (curr != NULL || s.empty() == false) 
	{ 
		/* Reach the left most Node of the 
		curr Node */
		while (curr != NULL) 
		{ 
			/* place pointer to a tree node on 
			the stack before traversing 
			the node's left subtree */
			s.push(curr); 
			curr = curr->left; 
			f=f+1;
			//degree(curr);
			
		} 

		/* Current must be NULL at this point */
		curr = s.top(); 
		s.pop(); 

		cout << curr->data << " "; 
		//degree(curr);

		/* we have visited the node and its 
		left subtree. Now, it's right 
		subtree's turn */
		curr = curr->right; 

	} /* end of while */
	
	//cout<<"\nThe number of nodes in the tree is :";
	//cout<<f<<endl;
}
 
/* Driver program to test above functions*/
int main() 
{ 
  
  struct node *root = newnode(1); 
  root->left        = newnode(2); 
  root->right       = newnode(3); 
  root->left->left  = newnode(4); 
  root->left->right = newnode(5); 
  root->left->left->left  = newnode(7); 
  cout<<"The tree is :"<<endl;
  inOrder(root);
  cout<<"\n The ancestor nodes of node 7 is :";
   printAncestors(root, 7); 
  
  getchar(); 
  return 0; 
} 
