#include <iostream>
#include<string> 
using namespace std; 
 
template <class X> void swapargs(X &a, X &b) 
{ 
  X temp; 
 
  temp = a; 
  a = b; 
  b = temp; 
} 
 
int main() 
{ 
  string a,b; 
cin>>a>>b;
cout << "Original a, b: " << a << ' ' << b << '\n'; 
  swapargs(a, b); 
  cout << "Swapped a, b: " << a << ' ' << b << '\n'; 
 
  return 0; 
}
