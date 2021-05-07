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
      vector<ll>v(n);
      for(int i=0;i<n;i++){
        cin>>v[i];
      }
      ll sum=0;
      for(int i=0;i<n-1;i++){
        sum+=((max(v[i],v[i+1])-1)-(min(v[i],v[i+1])));
      }
      cout<<sum<<"\n";
    }

    return 0;
}
