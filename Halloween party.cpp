#include <bits/stdc++.h>
using namespace std;
int main()
{
  long long int t,k;
  cin>>t;
  while(t--){
    cin>>k;
    if(k%2==0){
      long long int sum=(k/2)*(k/2);
      cout<<sum<<"\n";
    }
    else{
      double r=k/2.0;
      r=ceil(r);
      long long int sum=(k-r)*r;
      cout<<sum<<"\n";
    }
  }
  return 0;
}
