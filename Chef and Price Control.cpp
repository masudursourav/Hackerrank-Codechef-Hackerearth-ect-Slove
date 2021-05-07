#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,n,p,k,sump,sumn;
    cin>>t;
    while(t--){
        cin>>n>>k;
        sump=0;
        sumn=0;
        while(n--){
            cin>>p;
            sump+=p;
            if(p>k){
                sumn+=k;
            }
            else{
                sumn+=p;
            }
        }
        cout<<abs(sump-sumn)<<"\n";
    }
    return 0;
}
