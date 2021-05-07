//*Here I go out to sea again
//*The sunshine fills my hair
//*And dreams hang in the air

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mp make_pair
#define pb push_back
void input(){freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);}

int main()
{
    ll n,k,q;
    cin>>n>>k>>q;
    ll ans;
    ll d;
    if(n%k==0){
      d=(ll)n/k;
    }
    else{
      d=(ll)(n/k)+1;
    }
    while(q--){
      ll p,u;
      cin>>p>>u;
      if(p<d){
        if(u>k){
          ans=n-abs(u-k);
        }
        else if(k>u){
          ans=n+abs(u-k);
        }
      }
    }
    if(ans%k==0){
      ans=ans/k;
    }
    else{
      ans=(ll)(ans/k)+1;
    }
    cout<<ans<<"\n";
    return 0;
}
