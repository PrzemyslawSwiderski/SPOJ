#include<iostream>

using namespace std;

int fun(int n) {
	int ret = 0;
	for (int p = 5; p <= n; p*=5)
		ret += n/p;
	return ret;
}
int main(){
    int L,N;
    cin>>L;
    for(int i=0; i<L;i++){
        cin>>N;
        cout<<fun(N)<<endl;
    }
    return 0;
}