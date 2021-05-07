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
    ll t,ca=0;
    cin>>t;
    while(t--){
      ll n,m,k;
      cin>>n>>m>>k;
      n=n%m;
      n=n*k;
      ll ans=(((((n)%m)*((n)%m))%m)+(n%m))%m;
      cout<<"Case #"<<++ca<<": "<<ans<<"\n";
    }

    return 0;
}
