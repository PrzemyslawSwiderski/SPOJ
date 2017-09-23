#include<iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    int N,flag;
    int TAB[100001] ;
    while(cin>>N){
        if(N==0) return 0;
        for(int i=1;i<=N;i++) {
			cin>>TAB[i];
        }
		flag=1;
        for(int i=1;i<=N;i++){
            if(TAB[TAB[i]]!=i){
				flag=0; 
				break;
				}
        }
        if(flag) 
			cout<<"ambiguous"<<endl;
        else 
			cout<<"not ambiguous"<<endl;
    }
}