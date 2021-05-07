#include <bits/stdc++.h>
using namespace std;
int main()
{
  string s[10000];
  int t,n;
  cin>>t;
  while(t--){
    cin>>n;
    for(int i=0;i<n;i++){
      string in;
      cin>>in;
      sort(in.begin(),in.end());
      s[i]=in;
    }
    int c=0;
    for(int i=0;i<n;i++){
      for(int j=1;j<n;j++){
        string k=s[j-1];
        string l=s[j];
        if(k[i]>l[i]){
          cout<<"NO"<<"\n";
          c=1;
          break;
        }
      }
      if(c){
        break;
      }
    }
    if(c==0){
      cout<<"YES"<<"\n";
    }
  }
  return 0;
}
