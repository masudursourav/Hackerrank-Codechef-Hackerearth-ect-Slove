#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,t,n;
    cin>>t;
    while(t--){
        cin>>a>>b;
        n=0;
        int c=0;
        n=sqrt(a);
        while(1){
            long long int ns=n*n;
            if(ns>b){
                break;
            }
            if(ns>=a && ns<=b){
                ++c;
            }
            ++n;
        }
        cout<<c<<"\n";
    }
    return 0;
}
