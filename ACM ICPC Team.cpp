#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n,sn;
  string s[100000];
  vector<int>a;
  cin>>n>>sn;
  for(int i=0;i<n;i++){
    cin>>s[i];
  }
  int ak=0;
  for(int i=0;i<n-1;i++){
    for(int j=i+1;j<n;j++){
      int c=0;
      string s1=s[i];
      string s2=s[j];
      for(int k=0;k<sn;k++){
        if(s1[k]=='1' || s2[k]=='1'){
          ++c;
        }
      }
      a.push_back(c);
      ++ak;
    }
  }
  sort(a.begin(),a.end(),greater<int>());
  cout<<a[0]<<"\n";
  int max=a[0],cm=0;
  for(int i=0;i<ak;i++){
    if(a[i]==max){
      ++cm;
    }
    else{
        break;
    }
  }
  cout<<cm<<"\n";
  return 0;

}
