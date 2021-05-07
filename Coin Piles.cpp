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
    ll a,b,t;
    cin>>t;
    while(t--){
      cin>>a>>b;
      if(a>0 && b>0 && (a+b)%3==0){
        cout<<"YES"<<"\n";
      }
      else{
        cout<<"NO"<<"\n";
      }
    }

    return 0;
}
