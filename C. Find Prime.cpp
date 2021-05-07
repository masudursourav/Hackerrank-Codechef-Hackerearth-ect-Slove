#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t,n;
  cin>>t;
  while(t--){
    cin>>n;
    for(int i=n-1;i>=7;i--){
      int temp=i;
      int c=0;
      for(int j=2;j*j<=temp;j++){
        if(temp%j==0){
          c=1;
          break;
        }
      }
      if(!c){
        cout<<temp<<" ";
        break;
      }
    }

    for(int i=n+1;;i++){
      int temp=i;
      int c=0;
      for(int j=2;j*j<=temp;j++){
        if(temp%j==0){
          c=1;
          break;
        }
      }
      if(!c){
        cout<<temp<<"\n";
        break;
      }
    }
  }
  return 0;
}
