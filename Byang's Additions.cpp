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
    ll a,b;
    cin>>a>>b;
    while(min(a,b)>0){
      int sum=(a%10)+(b%10);
      if(sum>=10){
        cout<<"Yes"<<"\n";
        return 0;
      }
      a=a/10;
      b=b/10;
    }
    cout<<"No"<<"\n";
    return 0;
}
