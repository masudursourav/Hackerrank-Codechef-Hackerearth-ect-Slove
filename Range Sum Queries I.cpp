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
    ll a,sum[900005]={0};
    ll psum=0;
    int n,t;
    cin>>n>>t;
    for(int i=1;i<=n;i++){
      cin>>a;
      psum+=a;
      sum[i]=psum;
    }
    while(t--){
      ll x,y;
      cin>>x>>y;
      cout<<sum[y]-sum[x-1]<<"\n";
    }
    return 0;
}
