#include <bits/stdc++.h>
using namespace std;
int main()
{
  long long int n,a[1000];
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>a[i];
  }
  sort(a,a+n);
  long long int mxp=0,p,x=0,y=0,z=0,c=0;
  for(int i=0;i<n-2;i++){
    p=0;
    if(a[i]+a[i+1]>a[i+2] && a[i]+a[i+2]>a[i+1] && a[i+1]+a[i+2]>a[i]){
      p=a[i]+a[i+1]+a[i+2];
      if(p>mxp){
        mxp=p;
        x=a[i];
        y=a[i+1];
        z=a[i+2];
        c=1;
      }
    }
  }
  if(c)
  cout<<x<<" "<<y<<" "<<z<<"\n";
  else
  cout<<"-1"<<"\n";
  return 0;
}
