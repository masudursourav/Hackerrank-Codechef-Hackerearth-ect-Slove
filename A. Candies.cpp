#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t,n,k,c;
  cin>>t;
  while(t--){
    cin>>n;
    k=2,c=1;
    while(true){
      c+=pow(2,k-1);
      if(n%c==0){
        cout<<n/c<<"\n";
        break;
      }
      k++;
    }
  }
}
