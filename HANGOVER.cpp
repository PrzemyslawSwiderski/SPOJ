#include <iostream>
#include <cstdio>
#define endl '\n'

using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	float n;
	cin>>n;
	while(n) {
		float len=0.0;
		int c=0;
		while(len<n){
			c++;
			len+=1.00/(1.00+c);
		}
		cout<<c<<" card(s)"<<endl;
		cin>>n;
	}
	return 0;
}
