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
    ll t;
    cin>>t;
    ll c=0;
    ll k=false;
    while(t--){
      ll a,b;
      cin>>a>>b;
      if(a==b){
        ++c;
        if(c>=3){
          k=true;
          break;
        }
      }
      else{
        c=0;
      }
    }
    if(k){
      cout<<"Yes"<<"\n";
    }
    else{
      cout<<"No"<<"\n";
    }

    return 0;
}
