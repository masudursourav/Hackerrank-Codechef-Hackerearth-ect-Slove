#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,n,m,p;
    cin>>t;
    while(t--){
        cin>>n>>m>>p;
        if((m+p-1)%n==0){
            cout<<n<<"\n";
        }
        else{
        cout<<(m+p-1)%n<<"\n";
        }
    }
    return 0;
}
