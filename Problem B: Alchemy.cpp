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
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    ll t,cca=0;
    cin>>t;
    while(t--){
      ll n;
      cin>>n;
      string s;
      cin>>s;
      ll ca=0,cb=0;
      for(int i=0;i<n;i++){
        if(s[i]=='A'){
          ++ca;
        }
        else{
          ++cb;
        }
      }
      if(abs(ca-cb)<=1){
        cout<<"Case #"<<++cca<<": Y"<<"\n";
      }
      else{
        cout<<"Case #"<<++cca<<": N"<<"\n";
      }
    }

    return 0;
}
