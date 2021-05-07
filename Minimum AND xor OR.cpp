//*Here I go out to sea again
//*The sunshine fills my hair
//*And dreams hang in the air
#include<bits/stdc++.h>
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
         ll n;
         cin>>n;
         vector<ll>v(n);
         for(int i=0;i<n;i++){
           cin>>v[i];
         }
         sort(v.begin(),v.end());
         ll mxd=LONG_MAX;
         ll e=0,o=0;
         for(int i=0;i<n-1;i++){
           mxd=min(mxd,((v[i]&v[i+1])^(v[i]|v[i+1])));
         }
         cout<<mxd<<"\n";
       }

      return 0;
}
