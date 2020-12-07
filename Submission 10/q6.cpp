
#include <bits/stdc++.h> 
using namespace std; 

struct Node 
{ 
    int data; 
    struct Node* left, *right; 
}; 
   

unsigned int getfullCount(struct Node* root) 
{ 
    if (root == NULL) 
       return 0; 
   
    int res = 0; 
    if  (root->left && root->right)  
       res++; 
   
    res += (getfullCount(root->left) +  
            getfullCount(root->right)); 
    return res; 
} 
   
struct Node* newNode(int data) 
{ 
    struct Node* node = new Node; 
    node->data = data; 
    node->left = node->right = NULL; 
    return (node); 
} 
  
  void inOrder(struct Node *root) 
{ 
	stack<Node *> s; 
	Node *curr = root; 
	int f=0;
	while (curr != NULL || s.empty() == false) 
	{ 
		while (curr != NULL) 
		{ 
			s.push(curr); 
			curr = curr->left; 
			f=f+1;
			
		} 

		curr = s.top(); 
		s.pop(); 

		cout << curr->data << " "; 
		

		curr = curr->right; 

	} 
	
	cout<<"\nThe number of nodes in the tree is :";
	cout<<f<<endl;
} 
// Driver program 
int main(void) 
{ 
    struct Node *root = newNode(2); 
    root->left    = newNode(7); 
    root->right   = newNode(5); 
    root->left->right = newNode(6); 
    root->left->right->left = newNode(1); 
    root->left->right->right = newNode(11); 
    root->right->right = newNode(9); 
    root->right->right->left = newNode(4); 
   
   inOrder(root);
    cout <<"The total number of full nodes in a binary tree is :"<< getfullCount(root); 
   
    return 0; 
} 
