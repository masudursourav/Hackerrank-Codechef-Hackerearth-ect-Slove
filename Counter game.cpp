//*Here I go out to sea again
//*The sunshine fills my hair
//*And dreams hang in the air

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mp make_pair
#define pb push_back

int main()
{
   ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--){
      ll n;
      cin>>n;
      int c=0;
      while(1){
        if(n<=1){
          break;
        }
        if(n&(n-1)){
          ll temp=n;
          ll k=1;
          while(temp>1){
            k=k*2;
            temp=temp/2;
          }
          n=n-k;
        }
        else{
          n=n/2;
        }
        ++c;
      }
      if(c%2==0){
        cout<<"Richard"<<"\n";
      }
      else{
        cout<<"Louise"<<"\n";
      }
    }

    return 0;
}
