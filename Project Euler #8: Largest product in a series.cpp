#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,k,mx,t;
    cin>>t;
    while(t--){
        cin>>n>>k;
        string s;
        cin>>s;
        mx=0;
        for(int i=0;i<n-k;i++){
            long long int f=1;
            for(int j=i;j<i+k;j++){
                f=f*(s[j]-'0');
            }
            if(f>mx){
                mx=f;
            }
        }
        cout<<mx<<"\n";
    }
}
