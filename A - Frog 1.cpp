//*Here I go out to sea again
//*The sunshine fills my hair
//*And dreams hang in the air
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mp make_pair
#define pb push_back

void input(){freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);}

void slove(){
    ll n,k;cin>>n>>k;
    vector<ll>a(n);for(int i=0;i<n;i++) cin>>a[i];
    vector<ll>cost(n,LONG_MAX);
    cost[0]=0;
    cost[1]=abs(a[0]-a[1]);
    for(int i=2;i<n;i++){
      for(int j=1;j<=k;j++){
        if(i-j>=0){
      cost[i]=min(cost[i],abs(a[i]-a[i-j])+cost[i-j]);
    }
    else{
      break;
    }
    }
    }
    cout<<cost[n-1]<<"\n";
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

       ll t=1; //cin>>t;
       while(t--){
         slove();
       }

      return 0;
}
