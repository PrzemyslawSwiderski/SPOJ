#include <iostream>
#include <cstdio>
#define endl '\n'

using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	int n,tab[10000];
	while(true) {
		cin>>n;
		if(n==-1)
			break;
		int sum=0,i=0;
		for(int i =0; i<n; i++)
		{
			cin>>tab[i];
			sum=sum+tab[i];
		}	
		if(sum%n!=0){
			cout<<-1<<endl;
			continue;
		}
		int avg = sum/n,count=0;
		for(int i =0; i<n; i++)
		{
			if(tab[i]>avg)
				count=count+(tab[i]-avg);
		}
		cout<<count<<endl;
	}
	return 0;
}
