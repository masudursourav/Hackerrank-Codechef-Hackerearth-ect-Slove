#include <bits/stdc++.h>
using namespace std;
int main()
{
  long long int n,sum=0,m,a,b,k;
  cin>>n>>m;
  while(m--){
    cin>>a>>b>>k;
    for(long int i=a;i<=b;i++){
      sum+=k;
    }
  }
  cout<<(long long int)sum/n<<"\n";
  return 0;
}
