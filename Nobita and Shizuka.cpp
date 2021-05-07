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
    ll cas=0;
    while(t--){
      string s;
      cin>>s;
      bool ch=false;
      ll c=0;
      ll o,z=0;
      for(int i=0;i<s.size();i++){
        if(s[i]=='0'){
          ++z;
        }
        else if(s[i]=='1')
      }
      cout<<"Case "<<++cas<<": "<<c<<"\n";
    }

    return 0;
}
