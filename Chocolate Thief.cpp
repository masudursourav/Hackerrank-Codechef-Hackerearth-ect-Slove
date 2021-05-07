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

       ll t,ca=0;
       cin>>t;
       while(t--){
         ll n;
         cin>>n;
         ll a,b,c,mx=LONG_MIN,mn=LONG_MAX;
         string in,x,y;
         ll k=0;
         for(int i=0;i<n;i++){
           cin>>in;
           ll sum=0;
           cin>>a>>b>>c;
           sum=a*b*c;
           if(sum>mx){
             mx=sum;
             x=in;
           }
           if(sum<mn){
             mn=sum;
             y=in;
             k=0;
           }
           else if(sum==mn){
             ++k;
           }
         }
         if(k==n-1){
           y="all";
         }
         cout<<"Case "<<++ca<<": ";
         if(mx==mn){
           cout<<"no thief"<<"\n";
         }
         else{
           cout<<x<<" took chocolate from "<<y<<"\n";
         }

       }

      return 0;
}
