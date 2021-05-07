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
    ll t,n;
    cin>>t;
    while(t--){
      int c=0;
      cin>>n;
      for(int i=2;i*i<=n;i++){
        if(n%i==0){
          c=1;
          break;
        }
      }
      if(c){
        cout<<"Not prime"<<"\n";
      }
      else{
        cout<<"Prime"<<"\n";
      }
    }

    return 0;
}
