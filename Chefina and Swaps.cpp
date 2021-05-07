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
      map<ll,ll>m;
      set<ll>s;
      ll n;
      cin>>n;
      ll a[n],b[n];
      for(int i=0;i<n;i++){
        cin>>a[i];
        s.insert(a[i]);
        m[a[i]]=m[a[i]]+1;
      }
      for(int i=0;i<n;i++){
        cin>>b[i];
        s.insert(b[i]);
        m[b[i]]=m[b[i]]+1;
      }
      ll sum=0,ch=0;
      set<ll>::iterator it,it1;
      for(it=s.begin();it!=s.end();it++){
        if(m[*it]%2==1){
          cout<<"-1"<<"\n";
          ch=1;
          break;
        }
      }
      if(ch==1){
        continue;
      }
      sort(a,a+n,greater<ll>());
      sort(b,b+n,greater<ll>());
      for(int i=0;i<n;i++){
        if(a[i]!=b[i]){
          ++sum;
        }
      }
      cout<<sum/2<<"\n";
      m.clear();
      s.clear();
    }

    return 0;
}
