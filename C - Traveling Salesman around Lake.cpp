#include <bits/stdc++.h>
using namespace std;
int main()
{
  long long int k,n,a[300000],sum=0;
  cin>>k>>n;
  for(int i=0;i<n;i++){
    cin>>a[i];
  }
  sort(a,a+n);
  for(int i=1;i<n;i++){
    if(a[i-1]!=0)
    sum+=a[i]-a[i-1];
  }
  if(sum<k){
    cout<<sum<<"\n";
  }
  else{
    cout<<k<<"\n";
  }
  return 0;
}
