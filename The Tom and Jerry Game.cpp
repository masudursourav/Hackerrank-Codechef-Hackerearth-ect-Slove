#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,ts,js;
    cin>>t;
    while(t--){
        cin>>ts;
        if(ts==1){
            cout<<0<<"\n";
        }
        else if(ts%2!=0){
            cout<<(long long int)(ts/2)<<"\n";
        }
        else if(ts%2==0){
            js=2;
            while(js<=ts && ts%2==0){
                if(js%2==0){
                    js=js/2;
                    ts=ts/2;
                }
                else{
                    break;
                }
                ++js;
            }
            cout<<(long long int)(ts/2)<<"\n";
        }
    }
    return 0;
}
