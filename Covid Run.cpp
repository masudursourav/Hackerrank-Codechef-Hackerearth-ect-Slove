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
      ll n,x,k,y;
      cin>>n>>k>>x>>y;
      ll temp=x;
      bool ch=false;
      while(1){
        x=(x+k)%n;
        if(x==y){
          ch=true;
          break;
        }
        if(x==temp){
          break;
        }
      }
      if(ch){
        cout<<"YES"<<"\n";
      }
      else{
        cout<<"NO"<<"\n";
      }

    }

    return 0;
}
