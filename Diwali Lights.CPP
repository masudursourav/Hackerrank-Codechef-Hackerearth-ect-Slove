#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,t;
    cin>>t;
    while(t--){
        cin>>n;
        long long int r=1;
        for(int i=1;i<=n;i++){
            r=(r*2)%100000;
        }
        cout<<(r-1)<<"\n";
    }
    return 0;
}
