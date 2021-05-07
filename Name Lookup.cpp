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
    map<int,string>m;
    int n;
    cin>>n;
    while(n--){
      string s;
      int in;
      cin>>in>>s;
      m[in]=s;
    }
    int q;
    cin>>q;
    while(q--){
      int in;
      cin>>in;
      cout<<m[in]<<"\n";
    }
    return 0;
}
