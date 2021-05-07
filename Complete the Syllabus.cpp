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
    string s[]={"MONDAY","TUESDAY","WEDNESDAY","THURSDAY","FRIDAY","SATURDAY","SUNDAY"};
    ll t;
    cin>>t;
    while(t--){
      ll n;
      cin>>n;
      ll sum=0;
      ll c=0;
      ll a[7]={0};
      for(int i=0;i<7;i++){
        cin>>a[i];
      }
      bool k=false;
      while(1){
      for(int i=0;i<7;i++){
        n=n-a[i];
        if(n<=0){
          c=i;
          k=true;
          break;
        }
      }
      if(k){
        break;
      }
    }

      cout<<s[c]<<"\n";
    }

    return 0;
}
