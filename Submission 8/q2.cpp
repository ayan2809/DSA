#include<iostream>
#include<string>
using namespace std;
struct triangle
{
	int h;
	int w;
};

void merge(int arr[], int p, int q, int r)
{
int i, j, k;
int n1 = q - p + 1;
int n2 = r - q;

int L[n1], R[n2];

for (i = 0; i < n1; i++)
L[i] = arr[p + i];
for (j = 0; j < n2; j++)
R[j] = arr[q + 1+ j];

i = 0;
j = 0; 
k = p; 
while (i < n1 && j < n2)
{
if (L[i] <= R[j])
{
arr[k] = L[i];
i++;
}
else
{
arr[k] = R[j];
j++;
}
k++;
}

while (i < n1)
{
arr[k] = L[i];
i++;
k++;
}

while (j < n2)
{
arr[k] = R[j];
j++;
k++;
}
}

void mergeSort(int arr[], int p, int r)
{
if (p < r)
{

int q = (r+p)/2;

mergeSort(arr, p, q);
mergeSort(arr, q+1, r);
merge(arr, p, q, r);
}
}

void printArray(int A[], int size)
{
int i;
for (i=0; i < size; i++)
printf("%d ", A[i]);
printf("\n");
}



int main()
{
	int n;
	cout<<"Enter the number of triangles :";
	cin>>n;
	triangle t[n];
	for(int i=0;i<n;i++)
	{
		cout<<"Enter the triangle height :";
		cin>>t[i].h;
		cout<<"Enter the triangle width : ";
		cin>>t[i].w;
		
	}
	int *a= new int[n];
	
	for(int i=0;i<n;i++)
	{
		a[i]=(t[i].h*t[i].w)/2;
		
	}
	
	printArray(a, n);
mergeSort(a, 0, n - 1);
cout<<"The order of the areas of the triangles in increasing order of their areas :"<<endl;
printArray(a, n);

	

}
