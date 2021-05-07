#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n,m,t;
  long long int mo=1000000007;
  cin>>t;
  while(t--){
    cin>>n>>m;
    long long int factmn[1001]={0},factm[1001]={0};
    int k=(n+m)-1;
    m=m-1;
    int mn=max(n,m);
    int mi=min(n,m);
    int c=0;
    for(int i=k;i>mn;i--){
        factmn[c]=i;
        ++c;
    }
    sort(factmn,factmn+c);
    int j=0;
    for(int i=1;i<=mi;i++){
        factm[j]=i;
        ++j;
    }
    sort(factm,factm+c);
    long long int sum=1;
    for(int i=0;i<max(c,j);i++){
        if(factmn[i]!=factm[i]){
            sum=(sum*factmn[i])%mo;
        }
    }
    cout<<sum<<"\n";
}
  return 0;
}
