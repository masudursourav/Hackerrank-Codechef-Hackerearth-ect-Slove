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
      ll a,b;
      cin>>a>>b;
      if(a>b){
        swap(a,b);
      }
      if(b%a==0){
        cout<<"true"<<"\n";
      }
      else{
        cout<<"false"<<"\n";
      }
    }

    return 0;
}
