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
    ll n,k;
    int i=0;
    cin>>n>>k;
    while(n>0 && i<k){
      if(n%10==0){
        n=n/10;
        ++i;
      }
      else{
        n=n-1;
        ++i;
      }
    }
    cout<<n<<"\n";

    return 0;
}
