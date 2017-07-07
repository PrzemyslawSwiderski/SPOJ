#include <iostream>
#include <cstdio>
#include <cstring>
#include<algorithm>
#define endl '\n'

using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	int cols,rows;
	while(true) {
		cin>>cols;
		if(cols==0)
			break;
		
		char inputStr[200];
		cin>>inputStr;
		
		rows=strlen(inputStr)/cols;
		int j=0;
		for(int i=0; i<cols; i++){
			while(j<strlen(inputStr))
			{
				if(j%(cols*2)==i || j%(cols*2)==(cols*2-i-1))
                   cout<<inputStr[j++];
                   else
                   j++;
			}
			j=0;
		}
		cout<<endl;
	}
	return 0;
}
