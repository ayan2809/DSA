#include<iostream> 
using namespace std; 
  
 
int removeDuplicates(int arr[], int n) 
{ 
    if (n==0 || n==1) 
        return n; 
  
    
    int j = 0; 
  
    
    for (int i=0; i < n-1; i++) 
        if (arr[i] != arr[i+1]) 
            arr[j++] = arr[i]; 
  
    arr[j++] = arr[n-1]; 
  
    return j; 
} 
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
    cout<<"Enter the length of the array :";
    cin>>n;
    int *a=new int[n]();
    
  	for(int i=0;i<n;i++)
  	{
  		cout<<"Enter the element :";
  		cin>>a[i];
	  }
	  
	printArray(a, n);
	mergeSort(a, 0, n - 1);
	cout<<"Array after sorting with repeating elements :"<<endl;
	printArray(a, n); 
    
    n = removeDuplicates(a, n); 
  	cout<<"The array after removing the duplicates is :"<<endl;
   
    for (int i=0; i<n; i++) 
        cout << a[i] << " "; 
  
    return 0; 
} 
