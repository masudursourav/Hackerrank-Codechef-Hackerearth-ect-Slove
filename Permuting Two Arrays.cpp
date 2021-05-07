#include <bits/stdc++.h>
using namespace std;
int main(){
  long long int t,n,a[100000],b[100000],k;
  cin>>t;
  while(t--){
    cin>>n>>k;
    for(int i=0;i<n;i++){
      cin>>a[i];
    }
    sort(a,a+n);
    for(int i=0;i<n;i++){
      cin>>b[i];
    }
    sort(b,b+n,greater<int>());
    int c=0;
    for(int i=0;i<n;i++){
      if(a[i]+b[i]<k){
        c=1;
        break;
      }
    }
    if(c){
      cout<<"NO"<<"\n";
    }
    else{
      cout<<"YES"<<"\n";
    }
  }
  return 0;
}
