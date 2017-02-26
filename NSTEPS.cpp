#include <iostream>
#include <cstdio>
#define endl '\n'

using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	int test;
	int x,y;
	cin>>test;
	while(test--) {
		cin>>x>>y;
		if(x==0 && y==0)
		{
			cout<<0<<endl;
			continue;
		}
		
		if(x==y)
		{
			if(x&1)
				cout<<2*x-1<<endl;
			else
				cout<<2*x<<endl;
			continue;
		}
		
		if(y==x-2)
		{
			if(x&1)
				cout<<2*x-3<<endl;
			else
				cout<<2*x-2<<endl;
			continue;
			continue;
		}
		cout<<"No Number"<<endl;
	}
	return 0;
}
