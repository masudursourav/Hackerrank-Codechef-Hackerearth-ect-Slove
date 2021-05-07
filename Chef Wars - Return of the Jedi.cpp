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
    ll t,h,p;
    cin>>t;
    while(t--){
    cin>>h>>p;
    while(h>0 && p>0){
      h=h-p;
      p=(ll)(p/2);
    }
    if(h>0){
      cout<<0<<"\n";
    }
    else{
      cout<<1<<"\n";
    }
    }

    return 0;
}
