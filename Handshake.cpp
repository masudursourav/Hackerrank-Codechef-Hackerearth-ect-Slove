#include <bits/stdc++.h>
using namespace std;
int main()
{
  long int t,n,num=0;
  cin>>t;
  while(t--){
    cin>>n;
    num=0;
    num=(n*(n-1))/2;
    cout<<num<<"\n";
  }
  return 0;
}
