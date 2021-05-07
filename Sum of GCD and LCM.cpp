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
      if(n%2==0){
        cout<<n/2<<" "<<n/2<<"\n";
      }
      else{
        cout<<1<<" "<<(n-1)<<"\n";
      }
    }

    return 0;
}
