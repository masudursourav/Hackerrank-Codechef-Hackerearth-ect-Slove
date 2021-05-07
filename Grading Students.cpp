#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t,n;
  cin>>t;
  while(t--){
    cin>>n;
    if(n>=38){
      if((n%5)>=3){
        if(n%5==3)
        n=n+2;
        else if(n%5==4)
        n=n+1;
      }
      cout<<n<<"\n";
    }
    else{
      cout<<n<<"\n";
    }
  }
  return 0;
}
