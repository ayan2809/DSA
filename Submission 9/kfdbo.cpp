#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	float v;
	cin>>v;
	int t=0;
	//cout<<ceil(a);
	while(v>=0)
    {
    	v=v-(v*7)/100;
    	t=t+1;
    	cout<<v<<endl;
    	if(v<0)
    	{
    		break;
		}
    }
    cout<<t;
}
