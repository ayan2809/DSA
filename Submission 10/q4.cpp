// C++ program to print inorder traversal 
// using stack. 
#include<bits/stdc++.h>
using namespace std; 

/* A binary tree Node has data, pointer to left child 
and a pointer to right child */
vector<int> a;
struct Node 
{ 
	int data; 
	struct Node* left; 
	struct Node* right; 
	Node (int data) 
	{ 
		this->data = data; 
		left = right = NULL; 
	} 
}; 

/* Iterative function for inorder tree 
traversal */
void degree(struct Node *node){
	int f=0;
	
	if(node==NULL)
		cout<<"degree is 0";
	
		if(node->left!=NULL)
		{
			f+=1;
		}
		if(node->right!=NULL)
		{
			f+=1;
		}
		cout<<"\nThe degree is :"<<f<<endl;
		if(f==0)
		{
			a.push_back(node->data);
		}
		
		f=0;
		
		//degree(node->left);
		//degree(node->right);
		
		//node=node->
	}
	
	

void inOrder(struct Node *root) 
{ 
	stack<Node *> s; 
	Node *curr = root; 
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
		degree(curr);

		/* we have visited the node and its 
		left subtree. Now, it's right 
		subtree's turn */
		curr = curr->right; 

	} /* end of while */
	
	//cout<<"\nThe number of nodes in the tree is :";
	//cout<<f<<endl;
} 
struct Node *end(struct Node *root)
{

}

/* Driver program to test above functions*/
int main() 
{ 

	
	struct Node *root = new Node(1); 
	root->left	 = new Node(2); 
	root->right	 = new Node(3); 
	root->left->left = new Node(4); 
	root->left->right = new Node(5); 
	
	
	
	inOrder(root);
	
	 
	return 0; 
}

