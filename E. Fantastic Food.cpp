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
    int t,ca=0;
    cin >> t;
    while(t--)
    {
      ll n;
      cin>>n;
      ll sum=0;
      multiset<ll>ms;
      for(int i=0;i<n;i++)
        {
           ll p;
            cin>>p;
            ms.insert(p);
          ll it=*ms.begin();
          ms.erase(ms.find(it));
          ms.insert(it+2);
          sum+=it+1;
        }

        cout <<"Case "<<++ca<< ": " <<sum<<"\n";
    }

    return 0;
}
