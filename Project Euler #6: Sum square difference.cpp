#include <bits/stdc++.h>
using namespace std;
int main()
{
  long long int n,sum,sumsq,t;
  cin>>t;
  while(t--){
    cin>>n;
    sum=n*(n+1)/2;
    sum=sum*sum;
    sumsq=(n*(n+1)*(2*n+1))/6;
    cout<<sum-sumsq<<"\n";
  }
  return 0;
}
