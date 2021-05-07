//*Here I go out to sea again
//*The sunshine fills my hair
//*And dreams hang in the air

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mp make_pair
#define pb push_back
void input(){freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);}

ll find_ans[1001][1001] = {0};
ll cal(ll start,ll end,ll f[],ll k){
    if(start==end){
        return k;
    }
    ll fam[101] = {0};
    ll ans = k;
    for(ll i=start;i<=end;i++){
       fam[f[i]]++;
    }
    for(ll i=0;i<=100;i++){
        if(fam[i]>1){
            ans+=fam[i];
        }
    }
    return ans;
}

   ll fun(ll start,ll end,ll f[],ll k){
    if(start>end){
        return 0;
    }
    if(start==end){
        return k;
    }
    if(find_ans[start][end]!=0){
        return find_ans[start][end];
    }
    ll final_ans = LONG_MAX;

    for(ll i=start;i<=end;i++){
        final_ans = min(final_ans,cal(start,i,f,k) + fun(i+1,end,f,k));
    }

    find_ans[start][end] = final_ans;
    return find_ans[start][end];
}

int main() {
  ios_base::sync_with_stdio(false);
   cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--){
       ll n,k;
       cin>>n>>k;
        ll f[n];
       ll ans = k;
       ll fam[101] = {0};

       for(ll i=0;i<1001;i++){
           for(ll j=0;j<1001;j++){
               find_ans[i][j] = 0;
           }
       }

       for(ll i=0;i<n;i++){
           cin>>f[i];
       }

       cout<<fun(0,n-1,f,k)<<endl;

    }
  return 0;
}
