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
    ll n,m;
    set<ll>s;
    set<ll>::iterator it;
    cin>>n>>m;
    for(int i=0;i<n;i++){
      ll in;
      cin>>in;
      s.insert(in);
    }
    for(int i=0;i<m;i++){
      ll in;
      cin>>in;
      s.insert(in);
    }
    vector<int>v;
     for(it=s.begin();it!=s.end();it++){
       v.push_back(*it);
     }
     for(int i=0;i<v.size();i++){
       cout<<v[i];
       if(i!=v.size()-1){
         cout<<" ";
       }
     }
    return 0;
}
