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
  //ios_base::sync_with_stdio(false);
  //cin.tie(NULL);

       ll t,ca=0;
       cin>>t;
       while(t--){
         ll n;
         cin>>n;
         ++n;
         vector<ll>a(n);
         for(int i=1;i<n;i++){
           cin>>a[i];
         }
         ll ans=0;
         for(int i=1;i<n;i++){
           if(a[i]!=i){
             for(int j=i+1;j<n;j++){
               if(a[j]==i){
                 swap(a[i],a[j]);
                 ++ans;
                 break;
               }
             }
           }
         }
         cout<<"Case "<<++ca<<": "<<ans<<"\n";
       }

      return 0;
}
