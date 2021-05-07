//*Here I go out to sea again
//*The sunshine fills my hair
//*And dreams hang in the air
#include<bits/stdc++.h>
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
         ll n,m;
         cin>>n>>m;
         (m == 1 ||n%2==0)? cout<<2<<"\n":cout<<1<<"\n";
       }

      return 0;
}
