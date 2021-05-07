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
    ll n;
    ll mx=LONG_MIN;
    ll mi=LONG_MAX;
    cin>>n;
    for(int i=0;i<n;i++){
      ll in;
      cin>>in;
      if(mi>in){
        mi=in;
      }
      if(in>mx){
        mx=in;
      }
    }
    cout<<mx+mi<<"\n";

    return 0;
}
