#include <iostream>
#include <cstdio>
#define endl '\n'
#define SIZE 200

using namespace std;

int tab[SIZE][SIZE];

void dsp_tab(int s){
	for(int i=0;i<s;i++){
		for(int j=0;j<s;j++){
			cout<<tab[j][i]<<" ";
		}	
		cout<<endl;
	}
}

int main() {
	ios_base::sync_with_stdio(0);
	int n;
	cin>>n;
	while(n--) {
		int s,c,cp,si;

		cin>>s>>c;
		
		if(s==1){
			int num;
			cin>>num;
			while(c--){
				cout<<num<<" ";
			}
			cout<<endl;
			continue;
		}

		int i=0;
		while(i<s)
		{
			cin>>tab[0][i];
			i++;
		}
		
		for(int j=1;j<s;j++){
			for(int i=s-j;i>0;i--)
			{
				tab[j][i-1]=tab[j-1][i]-tab[j-1][i-1];
				si=tab[j][i-1];
			}
		}
		
		int p=1;
		while(c--){
		tab[s-1][p]=si;
		for(int j=s-1;j>0;j--){
				i=s-j+p;
				tab[j-1][i]=tab[j][i-1]+tab[j-1][i-1];
		}
		cout<<tab[0][p+s-1]<<" ";
		p++;
		}
		
		cout<<endl;
		
	}
	return 0;
}
