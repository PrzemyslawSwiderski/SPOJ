#include <iostream>
#include <cstdio>
#include<math.h>
#define endl '\n'

using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	int input,nor=0;
	cin>>input;
	
	for(int i=1;i<=input;i++){
		int sr,nf=1;
		sr=sqrt(i);
		for(int j=2;j<=sr;j++)
		{
			if(i%j==0)
				nf++;
		}
		nor=nor+nf;
	}
	cout<<nor;
	
	return 0;
}
