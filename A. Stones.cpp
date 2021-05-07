#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t,a,b,c;
  cin>>t;
  while(t--)
  {
    int ck=0,c1=0,c2=0;
    cin>>a>>b>>c;
    while(a>0 && b>0 && c>0){
      if(a>0 && b>=2){
      a=a-1;
      b=b-2;
      ck+=3;
      c1=1;
    }
      if(b>0 && c>=2){
        b=b-1;
        c=c-2;
        ck+=3;
        c2=1;
      }
      if(c1==0 && c2==0){
        break;
      }
    }
cout<<ck<<"\n";
  }
}
