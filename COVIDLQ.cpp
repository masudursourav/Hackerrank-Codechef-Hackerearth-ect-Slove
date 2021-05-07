#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t,n,a[1000],p[1000];
  cin>>t;
  while(t--){
    cin>>n;
    int j=0,c=0;
    for(int i=0;i<n;i++){
      cin>>a[i];
      if(a[i]==1){
        p[j]=i;
        ++j;
      }
    }
    for(int i=1;i<j;i++){
      if((p[i]-p[i-1])<6){
        c=1;
        break;
      }
    }
    if(c==0){
      cout<<"YES"<<"\n";
    }
    else{
      cout<<"NO"<<"\n";
    }
  }
  return 0;
}
