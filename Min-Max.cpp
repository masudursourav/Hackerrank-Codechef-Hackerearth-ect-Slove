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
    cin>>n;
    ll mx=LONG_MIN;
    ll mi=LONG_MAX;
    ll a[1000]={0};
    for(int i=0;i<n;i++){
      ll in;
      cin>>in;
      ++a[in];
      if(mi>in){
        mi=in;
      }
      if(in>mx){
        mx=in;
      }
    }
    for(int i=mi;i<=mx;i++){
      if(a[i]==0){
        cout<<"NO"<<"\n";
        return 0;
      }
    }
    cout<<"YES"<<"\n";

    return 0;
}
