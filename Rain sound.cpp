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
      ll l,r,n;
      cin>>l>>r>>n;
      if(l%n==0){
        if((l/n)*n<=r){
        cout<<l/n<<" ";
      }
      else{
        cout<<"-1"<<" ";
      }
      }
      else{
        if(((ll)(l/n)+1)*n<=r){
        cout<<(ll)(l/n)+1<<" ";
      }
      else{
        cout<<"-1"<<" ";
      }
    }

    if(((ll)(r/n)*n)>=l){
      cout<<r/n<<"\n";
    }
    else{
      cout<<"-1"<<"\n";
    }
  }
    return 0;
}
