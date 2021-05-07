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
    int ca=0;
    cin>>t;
    while(t--){
      double r,ab;
      cin>>r>>ab;
      double k=((2.0*r*r)-(ab*ab))/(2.0*r*r);
      double ans=acos(k);
      ans=(ans*180)/acos(-1.0);
      ans=(360-(2*ans))/4.0;
      printf("Case %d:%.4lf\n",++ca,ans);
    }

    return 0;
}
