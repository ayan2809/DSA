
#include<iostream> 
using namespace std; 


struct graph	 
{ 
	
	int v;		 
	
	 
	int e;		 
	
	int **dir;	 
}; 

int findDegree(struct graph *G, int ver) 
{	 
	
	int degree = 0;		 
	for (int i=0; i<G->v; i++)	 

		
		if (G-> dir[ver][i] == 1) 
			degree++;			 
	
	return degree;		 
} 

struct graph *createGraph(int v,int e) 
{ 
	
	struct graph *G = new graph; 
	
	G->v = v; 
	G->e = e; 
	

	G->dir = new int*[v]; 
	
	for (int i = 0;i < v;i++) 
		G->dir[i] = new int[v]; 
	
	/* 0-----1 
		| \ | 
		| \ | 
		| \ | 
		2-----3	 */
	
	

	G->dir[0][1]=1; 
	G->dir[0][2]=1; 
	G->dir[0][3]=1; 
	
 
	G->dir[1][0]=1; 
	G->dir[1][3]=1; 
	
 
	G->dir[2][0]=1; 
	G->dir[2][3]=1; 
	
	
	G->dir[3][0]=1; 
	G->dir[3][1]=1; 
	G->dir[3][2]=1; 
	
	return G; 
	
} 

 
int main() 
{ 
	int vertices = 4; 
	int edges = 5; 
	struct graph *G = createGraph(vertices, edges); 
	

	int ver = 0; 
	for(int i=1;i<=vertices;i++)
	cout<<findDegree(G, i)<<" is the degree of the "<<i<<"th vertice"<<endl; 
	 
	return 0; 
} 

