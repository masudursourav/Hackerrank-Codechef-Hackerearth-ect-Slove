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
      ll n,k;
      cin>>n>>k;
      ll a[n];
      ll sum=0;
      for(int i=0;i<n;i++){
        cin>>a[i];
        sum+=a[i];
      }
      ll c=1;
      while(sum>=k){
        k=k*2;
        ++c;
      }
      cout<<c<<"\n";
    }

    return 0;
}
