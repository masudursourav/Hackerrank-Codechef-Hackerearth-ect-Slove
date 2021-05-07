#include <bits/stdc++.h>
using namespace std;
long long int t,n1,n,k,pos,c;
int main(){
  cin>>t;
  while(t--){
    cin>>n1;
    c=0,pos=0;
    for(int i=0;i<n1;i++){
      cin>>n;
    if(pos==0){
      pos=n;
    }
    else if(n<0 && pos>0){
      c+=pos;
      pos=n;
    }
    else if(n<0 && pos<0){
      pos=max(pos,n);
    }
    else if(n>0 && pos<0){
      c+=pos;
      pos=n;
    }
    else if(n>0 && pos>0){
      pos=max(pos,n);
    }
  }
  c+=pos;
  cout<<c<<"\n";
  }
}
