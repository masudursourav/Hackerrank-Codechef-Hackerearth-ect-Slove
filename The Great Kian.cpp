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
    ll n;
    cin>>n;
    ll a[n+1];
    for(int i=1;i<=n;i++){
      cin>>a[i];
    }
    ll sum=0,sum1=0,sum2=0;
    for(int i=1;i<=n;i+=3){
      sum+=a[i];
    }
    for(int i=2;i<=n;i+=3){
      sum1+=a[i];
    }
    for(int i=3;i<=n;i+=3){
      sum2+=a[i];
    }
    cout<<sum<<" "<<sum1<<" "<<sum2<<"\n";

    return 0;
}
