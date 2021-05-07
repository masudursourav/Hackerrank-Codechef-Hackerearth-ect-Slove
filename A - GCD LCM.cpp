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
  ll t;
  cin>>t;
  while(t--){
    ll a,b;
    cin>>a>>b;
    if(b%a==0){
      cout<<a<<" "<<b<<"\n";
    }
    else{
      cout<<"-1"<<"\n";
    }
  }


    return 0;
}
