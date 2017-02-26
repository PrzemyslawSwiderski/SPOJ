#include <iostream>
#include <cstdio>
#define endl '\n'

using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	int n;
	while(true) {
		cin>>n;
		if(n==0)
			break;
		cout<<n*(n+1)*(2*n+1)/6<<endl;
	}
	return 0;
}
