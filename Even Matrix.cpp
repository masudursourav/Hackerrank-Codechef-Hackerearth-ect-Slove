#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        long long int k=0;
        for(int i=1;i<=n;i++){
            long long int s=n*i;
            if(i%2!=0){
                s=s-(n-1);
            }
            for(int j=1;j<=n;j++){
              if(i%2==0){
                  cout<<s<<" ";
                  --s;
              }
              else{
                  cout<<s<<" ";
                  ++s;
              }
            }
            cout<<"\n";
        }
    }
    return 0;
}
