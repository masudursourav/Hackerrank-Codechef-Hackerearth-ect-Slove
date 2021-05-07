#include <bits/stdc++.h>
using namespace std;
int main()
{
  set<int>s;
  int t;
  while(t--){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
      int in;
      cin>>in;
      s.insert(in);
    }
    int l=s.size();
    if(n==1){
      cout<<"0"<<"\n";
    }
    else if(n==l){
      cout<<"1"<<"\n";
    }
    else{
      cout<<l<<"\n";
    }
    s.clear();
  }
  return 0;
}
