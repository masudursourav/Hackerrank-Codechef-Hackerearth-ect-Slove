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
    ll t;
    cin>>t;
    while(t--){
      ll n;
      cin>>n;
      ll a,b;
      map<ll,ll>ma,mb;
      for(int i=0;i<(4*n)-1;i++){
        cin>>a>>b;
        if(ma[a]!=0){
          ma[a]=ma[a]+1;
        }
        else{
          ma[a]=1;
        }
        if(mb[b]!=0){
          mb[b]=mb[b]+1;
        }
        else{
          mb[b]=1;
        }
      }
      map<ll,ll>::iterator it;
      for(it=ma.begin();it!=ma.end();it++){
        if((it->second%2)==1){
          cout<<it->first<<" ";
        }
      }
        for(it=mb.begin();it!=mb.end();it++){
          if((it->second%2)==1){
            cout<<it->first<<"\n";
          }
        }
        ma.clear();
        mb.clear();
    }

    return 0;
}
