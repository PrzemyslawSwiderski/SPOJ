#include <iostream>
#include <cstdio>
#define endl '\n'

using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	int n;
	cin>>n;
	while(n) {
		int i=0;
		cin>>i;
		unsigned long long qube=192+(i-1)*250;
		cout<<qube<<endl;
		n--;
	}
	return 0;
}
