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

       ll t;cin>>t;
       while(t--){
         ll n,sum=0,xr=0;
         cin>>n;vector<ll>a(n);
         for(int i=0;i<n;i++){
           cin>>a[i];
           xr^=a[i];
           sum+=a[i];

       }
       if(n%2==0){
         (sum!=n && xr==0)?cout<<"Second"<<"\n":cout<<"First"<<"\n";
       }
       else{
         (sum==n || xr==0)?cout<<"Second"<<"\n":cout<<"First"<<"\n";
       }
     }

      return 0;
}
