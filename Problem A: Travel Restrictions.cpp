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
    freopen("travel_restrictions_input.txt", "r", stdin);
    freopen("outputA.txt", "w", stdout);
    ll t,cas=0;
    cin>>t;
    while(t--){
    ll n;
    cin>>n;
    string s,k;
    cin>>s;
    cin>>k;
    char ans[51][51];
    for(int i=0;i<n;i++){
      for(int j=0;j<n;j++){
      ans[i][j]='N';
      }
    }
    for(int i=0;i<n;i++){
      ans[i][i]='Y';
      for(int j=i+1;j<n;j++){
      if(k[i]!='N' && s[j]=='Y'){
        ans[i][j]='Y';
      }
      if(k[j]=='N'){
        break;
      }
      if(s[j]=='N'){
        break;
      }
      }
    }
    for(int i=n;i>=0;i--){
      for(int j=i-1;j>=0;j--){
      if(k[i]!='N' && s[j]=='Y'){
        ans[i][j]='Y';
      }
      if(k[j]=='N'){
        break;
      }
      if(s[j]=='N'){
        break;
      }
      }
    }
    cout<<"Case #"<<++cas<<": "<<"\n";
    for(int i=0;i<n;i++){
      for(int j=0;j<n;j++){
        cout<<ans[i][j];
      }
      cout<<"\n";
    }
  }
    return 0;
}
