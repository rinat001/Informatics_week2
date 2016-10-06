#include <iostream>
#include <cmath>

using namespace std; 
int main()
{
	double a,b,c;
	cin >> a >> b >> c;
	a = a + b;
	c = abs(c - a);
	if(c<0.00000001)
	{       
    	cout<<"YES"<<"\n";
	}
	else 
	{
   	cout<<"NO"<<"\n";
	} 
 
 return 0;
 
}
