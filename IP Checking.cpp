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
         ll d1,d2,d3,d4;
         ll b1,b2,b3,b4;
         scanf("%lld.%lld.%lld.%lld",&d1,&d2,&d3,&d4);
         scanf("%lld.%lld.%lld.%lld",&b1,&b2,&b3,&b4);
         ll db1=0,db2=0,db3=0,db4=0;
         ll i=0;
         while(b1>0 || b2>0 || b3>0 || b4>0){
           ll r1=b1%10;
           ll r2=b2%10;
           ll r3=b3%10;
           ll r4=b4%10;
           if(r1){
             db1+=pow(2,i);
           }
           if(r2){
             db2+=pow(2,i);
           }
           if(r3){
             db3+=pow(2,i);
           }
           if(r4){
             db4+=pow(2,i);
           }
           b1/=10;b2/=10;b3/=10;b4/=10;++i;
         }
         cout<<"Case "<<++ca<<": ";
         if(db1==d1 && db2==d2 && db3==d3 && db4==d4){
           cout<<"Yes"<<"\n";
         }
         else{
           cout<<"No"<<"\n";
         }
       }

      return 0;
}
