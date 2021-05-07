#include <bits/stdc++.h>
using namespace std;
int main(){
    long long int t,n,gcd;
    cin>>t;
    while(t--){
        gcd=100000;
        cin>>n;
        while(n--){
            long long int in;
            cin>>in;
            gcd=__gcd(gcd,in);
        }
        if(gcd==1){
            cout<<"YES"<<"\n";
        }
        else{
            cout<<"NO"<<"\n";
        }
    }
}
