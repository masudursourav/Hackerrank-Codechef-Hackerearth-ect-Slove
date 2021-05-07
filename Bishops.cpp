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
  //ios_base::sync_with_stdio(false);
  //cin.tie(NULL);

       ll t,ca=0;
       cin>>t;
       while(t--){
         ll a,b,c,d;
         cin>>a>>b>>c>>d;
         cout<<"Case "<<++ca<<": ";
         if((a+b)%2!=(c+d)%2){
           cout<<"impossible"<<"\n";
         }
         else{
           if(abs(a-c)==abs(b-d)){
             cout<<1<<"\n";
           }
           else{
             cout<<2<<"\n";
           }
         }
       }
      return 0;
}
