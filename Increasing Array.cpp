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
    ll n;
    cin>>n;
    ll a[n];
    for(int i=0;i<n;i++){
      cin>>a[i];
    }
    ll mn=a[0],total=0;
    for(int i=1;i<n;i++){
      total+=max(0ll,mn-a[i]);
      mn=max(mn,a[i]);
    }
    cout<<total<<"\n";

    return 0;
}
