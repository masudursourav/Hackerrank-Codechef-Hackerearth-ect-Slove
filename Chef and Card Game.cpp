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
    int t;
    cin>>t;
    while(t--){
      int n;
      cin>>n;
      int cw=0,mw=0;
      while(n--){
        ll a,b;
        ll suma=0,sumb=0;
        cin>>a>>b;
        while(a>0){
          suma+=a%10;
          a=a/10;
        }
        while(b>0){
          sumb+=b%10;
          b=b/10;
        }
        if(suma>sumb){
          ++cw;
        }
        else if(sumb>suma){
          ++mw;
        }
        else if(sumb==suma){
          ++cw;
          ++mw;
        }
      }
      if(cw==mw){
        cout<<2<<" "<<cw<<"\n";
      }
      else if(cw>mw){
        cout<<0<<" "<<cw<<"\n";
      }
      else{
        cout<<1<<" "<<mw<<"\n";
      }
    }

    return 0;
}
