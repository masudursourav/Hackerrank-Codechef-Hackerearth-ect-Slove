#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  string s;
  cin>>n;
  cin>>s;

  int c[3]={0,0,0};
  for(int i=0;i<n;i++){
    if(s[i]=='N'){
      c[0]=c[0]+1;
    }
    else if(s[i]=='S'){
      c[1]=c[1]+1;
    }
    else if(s[i]=='U'){
      c[2]=c[2]+1;
    }
  }
  if(c[0]>0 && c[1]>0 && c[2]>0){
    sort(c,c+3);
    cout<<c[0]<<"\n";
  }
  else{
    cout<<"0"<<"\n";
  }
}
