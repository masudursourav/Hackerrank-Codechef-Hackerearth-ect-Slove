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
    ll n;
    cin>>n;
    for(int i=n+1;;i++){
      bool ch=false;
      if(i%3!=0){
        ll temp=i;
        while(temp>0){
          if(temp%10==3){
            ch=true;
            break;
          }
          temp=temp/10;
        }
      }
      if(ch || i%3==0){
        continue;
      }
      else{
        cout<<i<<"\n";
        break;
      }
    }

    return 0;
}
