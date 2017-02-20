#include <iostream>
#include<cstdio>
#include <string>
	
using namespace std;

int in1,in2;
string result;

int main()
{
	int i=0,tmp;
	cin>>in1;
	cin>>in2;
	tmp=(in1+in2)/2;
	cout<<tmp<<endl;
	
	cin>>result;
	while(result!="WIN")
	{
		if(in1>in2) break;
		if(result=="LOW")
			in1 = tmp+1;
		if(result=="HIGH")
			in2 = tmp-1;
		tmp=(in1+in2)/2;
		cout<<tmp<<endl;
        fflush(stdout);
		cin>>result;
		i++;
		
	}
	return 0;
}
