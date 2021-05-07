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
    ll t,cas=0;
    cin>>t;
    while(t--){
      ll n,m;
      cin>>n>>m;
      ll a[n]={0};
      ll l=(ll)n/m;
      ll j=0;
      for(int i=0;i<n;i++){
        cin>>a[i];
      }
      ll sum=0;

      for(int i=0;i<l*m;i+=m){
        ll mi=1000000000;
        for(j=i;j<m;j++){
          if(a[j]!=0 && a[j]<mi){
            mi=a[j];
          }
        }
        if(mi!=1000000000){
        sum+=mi;
      }
      else{
        break;
      }
      }
      if(l!=0 && sum==0){
        cout<<"Case #"<<++cas<<": -1"<<"\n";
      }
      else{
        cout<<"Case #"<<++cas<<": "<<sum<<"\n";
      }
}
    return 0;
}
