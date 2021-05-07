#include <bits/stdc++.h>
using namespace std;
long long int ndivi(long long int n){
  long long int c=0;
  for(int i=1;i*i<=n;i++){
    if(n%i==0){
      if(n/i==i){
        if(i%2==0){
          ++c;
        }
      }
      else{
        if(i%2==0){
          ++c;
        }
        if((n/i)%2==0){
          ++c;
        }
      }
    }
  }
  return c;
}
int main()
{
  long long int t,n;
  cin>>t;
  while(t--){
    cin>>n;
    cout<<ndivi(n)<<"\n";
  }
  return 0;
}
