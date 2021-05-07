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
      ll n;
      cin>>n;
      ll a[n+1][n+1];
      for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
          cin>>a[i][j];
        }
      }
    ll k=n,c=0;
    bool ch=false;
    while(k>0){
      ll i=k,j=1;
      if(ch){
        swap(a[i][j],a[j][i]);
      }
      if(a[i][j]!=(((i-1)*n)+j)){
        ch=(!ch);
        ++c;
      }
      --k;
    }
    cout<<c<<"\n";
}
    return 0;
}
