#include <iostream>
#include <cstdio>
#include <numeric>
#include <cmath>

using namespace std;

int main(){    

	cout.precision(2);
    ios_base::sync_with_stdio(0);
    double pi = 4*atan(1.0);
	int n;
    while(true)
	{cin>>n;
	if(n==0)
		break;
	
	cout<<((double)(n*n)/2/pi)<<endl;
	}
	
	
    return 0;
}