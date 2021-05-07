#include <bits/stdc++.h>
using namespace std;
int main()
{
 unsigned long long int n,m,t,a[501][501];
 cin>>t;
 while(t--){
  cin>>n>>m;
  for(int i=0;i<=n;i++){
    for(int j=0;j<=m;j++){
      if(i==0){
        a[i][j]=1;
      }
      else if(j==0){
        a[i][j]=1;
      }
      else{
        a[i][j]=(a[i-1][j]+a[i][j-1])%1000000007;
      }
    }
  }
  cout<<a[n][m]<<"\n";
}
  return 0;
}
