#include <bits/stdc++.h>
using namespace std;
int main()
{
  long long int sum=0,k,n,ar[100000],a,b,j=0;
  cin>>n>>k;
  for(int i=0;i<n;i++){
    cin>>a>>b;
    if(b==0){
      sum+=a;
    }
    else{
      ar[j]=a;
      ++j;
    }
  }
  sort(ar,ar+j,greater<int>());
  for(int i=0;i<k;i++){
    sum+=ar[i];
  }
  for(int i=k;i<n;i++){
    sum-=ar[i];
  }
  cout<<sum<<"\n";
  return 0;
}
