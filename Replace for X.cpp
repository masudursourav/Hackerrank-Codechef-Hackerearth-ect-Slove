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
      ll n,x,p,k;
      cin>>n>>x>>p>>k;
      vector<ll>v(n);
      for(int i=0;i<n;i++){
        cin>>v[i];
      }
      sort(v.begin(),v.end());

    if (x==v[p - 1]){
        cout<<0<<"\n";
      }
    else{
        if(k > p){
            if (v[p - 1]<x){
                cout<<-1<<"\n";
              }
            else{
                ll count=0;
                ll i=0;
                while (i< p){
                    if (v[i]>x){
                        ++count;
                      }
                    ++i;
                  }
                cout<<count<<"\n";
              }
            }
        else if(k == p){
            if(v[p-1]>x){
                ll count=0;
                ll i=0;
                while (i<p){
                    if (v[i]>x){
                        ++count;
                            }
                    ++i;
                  }
                 cout<<count<<"\n";
              }
            else{
                ll count=0;
                ll i=v.size();
                while(i >= p){
                    if (v[i - 1] < x){
                        ++count;
                      }
                  --i;
                }
                cout<<count<<"\n";
              }
            }
        else{
            if (v[p - 1] > x){
                cout<<-1<<"\n";
              }
                else{
                    ll count=0;
                    ll i=v.size();
                    while(i >= p){
                        if (v[i - 1] < x){
                            ++count;
                          }
                      --i;
                    }
                    cout<<count<<"\n";
                  }
              }
            }
          }
    return 0;
}
