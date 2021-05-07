#include <bits/stdc++.h>
using namespace std;
int main()
{
  long int sum=1,t,n,in;
  cin>>t;
  while(t--){
    cin>>n;
    n=n-1;
    sum=1;
    while(n--){
      cin>>in;
      sum=(sum*in)%1234567;
    }
    cout<<sum<<"\n";
  }
  return 0;
}
