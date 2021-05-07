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
    while(t--){
      ll n,q;
      cin>>n>>q;
      string s;
      cin>>s;
      while(q--){
        ll l,r;
        cin>>l>>r;
        ll a[27]={0};
        for(int i=l-1;i<r;i++){
          ++a[s[i]-'a'];
          a[s[i]-'a']=a[s[i]-'a']%2;
        }
        sort(a,a+26,greater<ll>());
        if(a[0] & a[1]){
          cout<<"NO"<<"\n";
        }
        else{
          cout<<"YES"<<"\n";
        }
      }
    }

    return 0;
}
