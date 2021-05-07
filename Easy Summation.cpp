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
    ll t,ca=0;
    cin>>t;
    while(t--){
      ll n;
      cin>>n;
      cout<<"Case "<<++ca<<": "<<n*n<<"\n";
    }

    return 0;
}
