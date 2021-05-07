#include <bits/stdc++.h>
using namespace std;
int main()
{
    int s,t,a,b,m,n,d;
    cin>>s>>t;
    cin>>a>>b;
    cin>>m>>n;
    int ca=0,co=0;
    while(m--){
        d=0;
        cin>>d;
        int r=d+a;
        if(s<=r && r<=t){
            ++ca;
        }
    }
    while(n--){
        d=0;
        cin>>d;
        int r=d+b;
        if(s<=r && r<=t){
            ++co;
        }
    }
    cout<<ca<<"\n"<<co<<"\n";
    return 0;
}
