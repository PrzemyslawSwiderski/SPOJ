#include <iostream>
#include <cstdio>
#define endl '\n'

using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	int a1,a2,a3;
	while(true) {
	cin>>a1>>a2>>a3;
	if(a1==0 && a2==0)
		break;
	int ap,gp;
	
	if((a2-a1)==(a3-a2))
		cout<<"AP "<< (a2-a1)+a3<<endl;
	else
		cout<<"GP "<< (a2/a1)*a3<<endl;
	
	}
	
	return 0;
}
