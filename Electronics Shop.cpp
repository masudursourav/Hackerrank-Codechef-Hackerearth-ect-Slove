#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int b,n,m,a[10000],mx=0;
    cin>>b>>n>>m;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    while(m--){
        long long int in;
        cin>>in;
        for(int i=0;i<n;i++){
            if((a[i]+in)>mx && (a[i]+in)<=b){
                mx=(a[i]+in);
            }
    }
}
if(mx==0){
    cout<<"-1"<<"\n";
}
else
cout<<mx<<"\n";

return 0;
}
