#include<bits/stdc++.h>
using namespace std;
int main()
{
  long long int n,t;
  cin>>t;
  while(t--){
    cin>>n;
    n=n/2;
    if(n%2==0){
      cout<<"YES"<<"\n";
      int j=2;
      long long int sum=0;
      for(int i=1;i<=n;i++){
        cout<<j<<" ";
        sum+=j;
        j+=2;
      }
      int o=1;
      for(int i=1;i<=n;i++){
        if(i!=n || i==1){
        cout<<o<<" ";
        sum-=o;
        o+=2;
      }
      }
      cout<<sum<<"\n";
    }
    else{
      cout<<"NO"<<"\n";
    }
  }
}
