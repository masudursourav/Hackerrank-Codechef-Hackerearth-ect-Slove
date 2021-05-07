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
      ll t;
      cin>>t;
      while(t--){
        ll n,l;
        cin>>n>>l;
        ll a[n];
        for(int i=0;i<n;i++){
          cin>>a[i];
        }
        sort(a,a+n);
        ll c=0;
        for(int i=0;i<n;i++){
          if(l>=a[i]){
            ++c;
            l=l-a[i];
          }
          else{
            break;
          }
        }
        cout<<c<<"\n";
      }

      return 0;
  }
