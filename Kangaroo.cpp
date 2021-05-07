#include <bits/stdc++.h>
using namespace std;
int main()
{
  int x1,v1,x2,v2;
  cin>>x1>>v1>>x2>>v2;
  if(x2>x1 && (v2>v1||v2==v1)){
    cout<<"NO"<<"\n";
  }
  else if(x1>x2 && (v1>v2||v1==v2)){
    cout<<"NO"<<"\n";
  }
  else{
    int d;
    while(d>=0){
      x1+=v1;
      x2+=v2;
      d=x2-x1;
      if(d==0){
        cout<<"YES"<<"\n";
        return 0;
      }
    }
    cout<<"NO"<<"\n";
    return 0;
  }
}
