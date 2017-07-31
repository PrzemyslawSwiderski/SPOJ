#include <iostream>
#include <cstdio>

using namespace std;


int main(){    
    ios_base::sync_with_stdio(0);
    int t=0, tab[10][4];
	
    for(int i=0; i<10; i++)
		for(int j=tab[i][0]=1; j<=4; j++)
			tab[i][j&3] = (tab[i][j-1]*i)%10;
		
    cin>>t;
    while(t>0)
	{
		int a=0,ar=0,b=0;
    	cin>>a>>b;
		
		if(!b)
			cout<<1<<endl;
		else
			cout<<tab[a%10][b%4]<<endl;
		
		t--;
	}
	
    return 0;
}