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
    ll n;
    string s;
    ll c=0;
    cin>>n;
    cin>>s;
    for(int i=1;i<n;i++){
      if(s[i]==s[i-1]){
        ++c;
      }
    }
    cout<<c<<"\n";

    return 0;
}
