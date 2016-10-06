#include <iostream>
#include <cmath>
using namespace std;
int main ()
{
    	int n, k, y;
    	cin >> k >>n;
    	y =(n * k) % 109;
    	if (y <0){
        y = y + 109;
    	}
    	cout << y;

return 0;
}
 