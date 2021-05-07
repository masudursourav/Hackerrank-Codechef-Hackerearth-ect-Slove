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
    while(t--){
      ll n,k;
      cin>>n>>k;
      ll mn=LONG_MAX;
      ll fans;
      bool ch=false;
      for(int i=0;i<n;i++){
        ll in;
        cin>>in;
        if(k%in==0){
          ll ans=(k/in)-1;
          ch=true;
          if(ans<mn){
            fans=in;
            mn=ans;
          }
        }
      }
      if(ch)
      cout<<fans<<"\n";
      else
      cout<<"-1"<<"\n";
    }

    return 0;
}
