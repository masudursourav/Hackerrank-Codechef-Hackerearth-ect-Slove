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
   ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,q;
    cin>>n>>q;
    ll a[n];
    for(int i=0;i<n;i++){
      cin>>a[i];
    }
    while(q--){
      ll c;
      cin>>c;
      if(c==2){
        ll l,r;
        cin>>l>>r;
        ll sum=0;
        for(int i=l;i<=r;i++){
          sum+=a[i];
        }
        cout<<sum<<"\n";
      }
      else{
        ll p,u;
        cin>>p>>u;
        a[p]=u;
      }
    }

    return 0;
}
