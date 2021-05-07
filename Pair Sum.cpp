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
    ll n,m;
    ll a[2000005]={0};
    cin>>n>>m;
    ll ar[n];
    for(int i=0;i<n;i++){
      cin>>ar[i];
      ++a[ar[i]];
    }
    for(int i=0;i<n;i++){
      ll sum=0;
      sum=m-ar[i];
      if(a[sum]>0 && sum>=0 && (ar[i]!=sum || a[sum]>1)){
        cout<<"YES"<<"\n";
        return 0;
      }
    }
    cout<<"NO"<<"\n";

    return 0;
}
