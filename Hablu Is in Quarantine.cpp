#include <bits/stdc++.h>
using namespace std;
int main()
{
  char s[1000][1000];
  int id=1,n;
  int c=0;
  int a[1000];
  cin>>n;
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      cin>>s[i][j];
      if(s[i][j]=='c'){
        a[c]=id;
        ++c;
      }
      ++id;
    }
  }
 int t,in,p[100000],j=0,ch=0;
 cin>>t;
 while(t--){
  cin>>in;
  if(ch>0){
    p[j]=in;
    ++j;
  }
  for(int i=0;i<c;i++){
    if(a[i]==in){
      ++ch;
    }
  }
}
if(ch>0){
  cout<<"YES"<<"\n";
  for(int i=0;i<j;i++){
    cout<<p[i];
    if(i!=j-1){
      cout<<" ";
    }
  }
}
else{
  cout<<"NO"<<"\n";
}
return 0;
}
