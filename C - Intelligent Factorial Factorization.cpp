//*Here I go out to sea again
//*The sunshine fills my hair
//*And dreams hang in the air

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mp make_pair
#define pb push_back
bool prime[101];
void shiv(){
  memset(prime,true,sizeof(prime));
  prime[0]=prime[1]=false;
  for(int i=2;i*i<=100;i++){
    if(prime[i]){
      for(int j=i*i;j<=100;j+=i){
        prime[j]=false;
      }
    }
  }
}
int main()
{
    shiv();
    int t;
    cin>>t;
    int ca=0;
    while(t--){
      ll n;
      cin>>n;
      cout<<"Case "<<++ca<<": "<<n<<" = ";
      bool k=false;
      for(int i=2;i<=n;i++){
        ll c=0;
        if(prime[i]){
          if(k==true){
            cout<<" * ";
          }
          for(int j=i;j<=n;j*=i){
            c+=(ll)(n/j);
          }
          cout<<i<<" ("<<c<<")";
          k=true;
        }
        }
      cout<<"\n";
    }

    return 0;
}
