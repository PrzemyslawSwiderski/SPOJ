#include <iostream>
#include <cstdio>
#include <map>
#include <algorithm>

using namespace std;

map<int, long long> coinsMap;

long long f(int n){
    if(n==0) return 0;
    
    if(coinsMap[n]!=0) return coinsMap[n];
    
    long long aux=f(n/2)+f(n/3)+f(n/4);
    
    if(aux>n) coinsMap[n]=aux;
    else coinsMap[n]=n;
    
    return coinsMap[n];
}

int main(){    
    ios_base::sync_with_stdio(0);
    int t=0;
       
    while(t<10)
	{
		int n;
    	cin>>n;
		cout<<f(n)<<endl;
		t++;
	}
	
    return 0;
}