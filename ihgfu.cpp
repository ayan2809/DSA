// CPP program to count number of substrings 
// of a string 
#include <bits/stdc++.h> 
using namespace std; 

int countNonEmptySubstr(string str) 
{ 
int n = str.length(); 
return n*(n+1)/2; 
} 

// driver code 
int main() 
{ 
	string s = "VIT"; 
	cout << countNonEmptySubstr(s); 
	return 0; 
} 

