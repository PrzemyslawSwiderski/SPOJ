#include <iostream>
#include <cstdio>
#define endl '\n'

using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	int n;
	cin>>n;
	while(n) {
		long long sum=0,candies=0,childrenNum=0;
		cin>>childrenNum;
		for(long long i =0; i<childrenNum; i++)
		{
			cin>>candies;
			sum=(sum+candies)%childrenNum;
		}
		if(sum!=0)
			cout<<"NO"<<endl;
		else
			cout<<"YES"<<endl;	
		
		n--;
	}
	return 0;
}
