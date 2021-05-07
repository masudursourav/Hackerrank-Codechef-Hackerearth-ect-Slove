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
    ll n;
    cin>>n;
    ll a[n];
    for(int i=0;i<n;i++){
      cin>>a[i];
    }
    ll mn=INT_MAX;
    for(int i=0;i<n;i++){
      for(int j=0;j<n;j++){
        if(i!=j){
        if((a[i]^a[j])<mn){
          mn=a[i]^a[j];
        }
      }
      }
    }
    cout<<mn<<"\n";

    return 0;
}
