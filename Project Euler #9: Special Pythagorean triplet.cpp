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
    ll t;
    cin>>t;
      while(t--){
        ll n;
        cin>>n;
         ll mx=0;
        for(int i=1,j=2;;i++,j++){
          ll sum=((j*j)-(i*i))+(2*i*j)+((j*j)+(i*i));
          if(sum>mx && sum<=n){
            mx=((j*j)-(i*i))*(2*i*j)*((j*j)+(i*i));
            break;
          }
          else if(sum>n){
            mx=-1;
            break;
          }
        }
        cout<<mx<<"\n";
      }
    return 0;
}
