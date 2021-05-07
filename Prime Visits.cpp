#include <bits/stdc++.h>
using namespace std;
bool prime[1000000];
void sieve(){
  memset(prime,true,sizeof(prime));
  prime[0]=prime[1]=false;
  for(int p=2;p*p<=1000000;p++){
    if(prime[p]==true){
      for(int i=p*p;i<=1000000;i+=p){
        prime[i]=false;
      }
    }
  }
}
int main()
{
  sieve();
  long int n,m,c=0,t;
  cin>>t;
  while(t--){
  c=0;
  cin>>n>>m;
  for(int i=n;i<=m;i++){
    if(prime[i]){
      ++c;
    }
  }
  cout<<c<<"\n";
}
return 0;
}
