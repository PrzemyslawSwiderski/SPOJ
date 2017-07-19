#include<iostream>
#include<stdio.h>
#include<algorithm>

using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    int t,l=1;
    cin>>t;
    while(t--)
    {
        int i,tar,ppl;
        cin>>tar>>ppl;
        int arr[ppl];
        for(i=0;i<ppl;i++)
             cin>>arr[i];
        sort(arr,arr+ppl);
        int sum=0;
        for(i=ppl-1;i>=0;i--)
        {
            sum+=arr[i];
            if(sum>=tar)
                break;
        }
        cout<<"Scenario #"<<l++<<":\n";
        if(sum>=tar)
            cout<<i<<"\n";
        else
            cout<<"impossible\n";
    }
    return 0;
}