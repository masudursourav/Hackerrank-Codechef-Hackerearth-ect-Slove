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
         vector<ll>v(n);
         for(int i=0;i<n;i++){
           cin>>v[i];
         }
         ll c=0;
         if(v[0]>2){
           if((v[0]-2)%5==0){
             c+=((v[0]-2)/5);
           }
           else{
             c+=((v[0]-2)/5)+1;
           }
         }
         for(int i=0;i<n-1;i++){
           if(v[i+1]-v[i]>0){
             if((v[i+1]-v[i])%5==0){
               c+=((v[i+1]-v[i])/5);
             }
             else{
               c+=((v[i+1]-v[i])/5)+1;
             }
           }
         }
         cout<<"Case "<<++ca<<": "<<c<<"\n";
       }

      return 0;
}
