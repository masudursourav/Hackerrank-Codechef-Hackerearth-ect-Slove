#include <bits/stdc++.h>
using namespace std;
int main()
{
  long long int n,k,a[1000000];
  cin>>n>>k;
  for(int i=0;i<n;i++){
    cin>>a[i];
  }
  sort(a,a+n);
  long long int sum=0,c=0;
  for(int i=0;i<n;i++){
    sum+=a[i];
    if(sum<=k){
      ++c;
    }
    else{
      break;
    }
  }
  cout<<c<<"\n";
  return 0;
}
