#include <bits/stdc++.h>
using namespace std;
int main()
{
  long long int r1=0,r2=0,rf1=0,rf2=0,n;
  int t;
  cin>>t;
  while(t--){
    r1=1,r2=-1,rf1=0,rf2=0;
    cin>>n;
    for(int i=2;r1<=n;){
      r1*=2;
      ++r2;
    }
  rf1=pow(2,r2);
  r2=r2+1;
  rf2=pow(2,r2);
  if(rf1==n || n==1){
    cout<<"1"<<"\n";
  }
  else if((rf2-n)>(n-rf1)){
    cout<<(n-rf1)+1<<"\n";
  }
  else if(n==0){
    cout<<0<<"\n";
  }
  else{
    cout<<(rf2-n)+1<<"\n";
  }
}
  return 0;
}
