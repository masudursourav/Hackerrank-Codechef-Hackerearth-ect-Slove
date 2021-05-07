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
    ll n,k;
    cin>>n>>k;
    int c=0;
    while(n--){
      ll in;
      cin>>in;
      if((k-in)<0){
        break;
      }
      else{
        k=k-in;
        ++c;
      }
    }
    cout<<c<<"\n";
    return 0;
}
