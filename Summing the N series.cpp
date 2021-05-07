#include <bits/stdc++.h>
using namespace std;
long long int m=1000000007;
int main()
{
    unsigned long long int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        unsigned long long int r=((n%m)*(n%m))%m;
        cout<<r<<"\n";
    }
    return 0;
}
