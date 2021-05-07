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
    ll n,m,t;
    cin>>t;
    while(t--){
      cin>>n>>m;
      ll a[n];
      for(int i=0;i<n;i++){
        cin>>a[i];
      }
      ll best=0,sum=0;
      for(int i=0;i<n;i++){
        sum=max(a[i]%m,(sum+a[i])%m);
        best=max(best,sum)%m;
      }
      cout<<best<<"\n";
    }

    return 0;
}
