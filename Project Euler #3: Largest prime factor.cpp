#include <bits/stdc++.h>
using namespace std;
int main()
{
  long long int n,t;
  scanf("%lld",&t);
  while(t--){
    scanf("%lld",&n);
    long long int mx=0;
    while(n%2==0){
      n=n/2;
      mx=2;
    }
    int r = 2;
      while(n!=r)
      {
       while(n%r==0){
           n/=r;
           if(r>mx){
             mx=r;
           }
         }
        r++;
     }
    if(n>2){
      if(n>mx){
        mx=n;
      }
    }
    printf("%lld\n",mx);
  }
  return 0;
}
