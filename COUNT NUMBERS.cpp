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
      string s;
      ll n;
      cin>>n;
      cin>>s;
      ll c=0;
      ll k=0;
      for(int i=0;i<n;i++){
        if(s[i]>='0' && s[i]<='9'){
          k=1;
        }
        else{
          c+=k;
          k=0;
        }
      }
      c+=k;
      cout<<c<<"\n";
    }

    return 0;
}
