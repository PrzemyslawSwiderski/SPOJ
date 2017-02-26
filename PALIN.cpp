#include <iostream>
#include <cstdio>
#include <cstring>
#define endl '\n'

using namespace std;
char in_str[1000000];

int main()
{
    int t,i,j;

    cin>>t;

    while(t--) {

        cin>>in_str;

        int lenght = strlen(in_str);

        j = lenght;
        i = -1;

        while(++i <= --j) {
            if(in_str[i] != in_str[j]) {
                break;
            }
        }

        if(j < i) {
            if(lenght & 1) {

                if(in_str[lenght/2] < '9'){

                    in_str[lenght/2]++;

                    cout<<in_str<<endl;
                }

                else {
                    in_str[lenght/2] = '0';

                    i = lenght/2 - 1;
                    j = lenght/2 + 1;

                    while(i >= 0) {

                        if(in_str[i] < '9') {
                            in_str[i]++;
                            in_str[j]++;
                            break;
                        }

                        else {
                            in_str[i] = in_str[j] = '0';
                        }

                    i--;
                    j++;
                    }

                    if(i < 0) {
                        cout<<"1";
                        i = lenght;
                        while(--i > 0) {
                            cout<<"0";
                        }

                        cout<<1<<endl;
                    }

                    else {

                        cout<<in_str<<endl;
                    }
                }
            }

            else {

                    i = lenght/2 - 1;
                    j = lenght/2;

                    while(i >= 0) {

                        if(in_str[i] < '9') {
                            in_str[i]++;
                            in_str[j]++;
                            break;
                        }

                        else {
                            in_str[i] = in_str[j] = '0';
                        }

                    i--;
                    j++;
                    }

                    if(i < 0) {
                        cout<<1;

                        i = lenght;
                        while(--i > 0) {
                        cout<<0;
                        }

                        cout<<1<<endl;
                    }

                    else {
                        cout<<in_str<<endl;
                    }
            }
        }

        else {
            if(lenght & 1) {
                i = lenght/2 - 1;
                j = lenght/2 + 1;
            }

            else {
                i =lenght/2 - 1;
                j = lenght/2;
            }

            int flag;

            while(i >= 0) {

                if(in_str[i] - in_str[j] > 0) {
                    flag = 1;
                    break;
                }

                else if( in_str[i] - in_str[j] < 0 ) {
                    flag = 2;
                    break;
                }

                i--;
                j++;
            }

            if(lenght & 1) {
                i = lenght/2 - 1;
                j = lenght/2 + 1;
            }

            else {
                i = lenght/2 - 1;
                j = lenght/2;
            }

            if(flag == 1) {
                while(i >= 0) {
                    in_str[j] = in_str[i];

                    i--;
                    j++;
                }
            }

            else if(flag == 2 && lenght&1 && in_str[lenght/2] < '9'){
                in_str[lenght/2]++;

                i = lenght/2 - 1;
                j = lenght/2 + 1;

                while(i >= 0) {
                   in_str[j] = in_str[i];
                   i--;
                   j++;
                }
            }

            else {

                if( lenght & 1) {
                    in_str[lenght/2] = '0';
                }

                while(i >= 0) {
                    if(in_str[i] < '9') {
                        in_str[i]++;
                        in_str[j] = in_str[i];
                        break;
                    }

                    else {
                        in_str[i] = in_str[j] = '0';
                    }
                    i--;
                    j++;
                }

                while(i >= 0) {
                    in_str[j] = in_str[i];

                    i--;
                    j++;
                }
            }
            cout<<in_str<<endl;
        }
    }

    return 0;
}
