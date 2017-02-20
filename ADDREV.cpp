#include <iostream>
#include <cstdio>
#define endl '\n'

using namespace std;

int reverse_calc(int num)
{
    int temp=0;
    while(num)
    {
        temp=(temp*10)+(num%10);                 
        num/=10;
    }
    return temp;
}
int main()
{
	ios_base::sync_with_stdio(0); //fast io
    int t;
    cin>>t;
    while(t--)
    {
        int num1,num2;
        cin>>num1>>num2;
        cout<<reverse_calc(reverse_calc(num1)+reverse_calc(num2))<<endl;
    }
    return 0;
}