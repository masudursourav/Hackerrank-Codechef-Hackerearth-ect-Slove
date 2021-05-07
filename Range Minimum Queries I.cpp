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
    vector<ll>v;
    ll n,t;
    cin>>n>>t;
    for(int i=0;i<n;i++){
      ll in;
      cin>>in;
      v.pb(in);
    }
    sort(v.begin(),v.end());
    while(t--){
      ll a,b;
      cin>>a>>b;
      cout<<v[a]
    }

    return 0;
}
