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
      ll sum=1;
      for(int i=0;i<n;i++){
        ll a;
        cin>>a;
        sum*=a;
      }
      ll ans=sqrt(sum);
      if((ans*ans)==sum && sum!=0){
        cout<<"YES"<<"\n";
      }
      else{
        cout<<"NO"<<"\n";
      }
    }

    return 0;
}
