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
    for(int i=0;i<n;i++){
      if(__builtin_popcount(i)==__builtin_popcount(n)){
        cout<<i<<"\n";
        return 0;
      }
    }

    return 0;
}
