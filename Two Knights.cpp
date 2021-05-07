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
    ll n,ans=0;
    cin>>n;
    for(int i=1;i<=n;i++){
      ans=(pow(i,4)/2)-((5*pow(i,3))/3)+((3*pow(i,2))/2)-(i/3);
      cout<<ans<<"\n";
    }

    return 0;
}
