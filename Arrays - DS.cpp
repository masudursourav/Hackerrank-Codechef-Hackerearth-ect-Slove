#include <bits/stdc++.h>
using namespace std;
int main()
{
  long long int n,a[10000];
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>a[i];
  }
  for(int i=n-1;i>=0;i--){
    cout<<a[i];
    if(i!=0){
      cout<<" ";
    }
  }
  cout<<"\n";
  return 0;
}
