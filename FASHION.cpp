#include <iostream>
#include <cstdio>
#include<algorithm>
#define endl '\n'

using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	int t,pairs;
	cin>>t;
	while(t) {
		int tabM[1000],tabW[1000];
		cin>>pairs;
		
		for(int i=0; i<pairs; i++){
			cin>>tabM[i];
		}
		
		for(int i=0; i<pairs; i++){
			cin>>tabW[i];
		}
		
		sort(tabM,tabM+pairs);
		sort(tabW,tabW+pairs);
		int sum=0,tmp=0;
		
		for(int i=0; i<pairs; i++){
			sum=(tabW[i]*tabM[i])+sum;
		}
		cout<<sum<<endl;
		
		t--;
	}
	return 0;
}
