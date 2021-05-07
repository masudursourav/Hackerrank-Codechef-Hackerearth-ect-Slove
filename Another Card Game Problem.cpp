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
    ll t;
    cin>>t;
    while(t--){
      ll pc,pr;
      cin>>pc>>pr;
      ll ansc,ansr;
      if(pc%9==0){
        ansc=pc/9;
      }
      else{
        ansc=(ll)(pc/9)+1;
      }
      if(pr%9==0){
        ansr=pr/9;
      }
      else{
        ansr=(ll)(pr/9)+1;
      }
      if(ansc==ansr){
        cout<<1<<" "<<ansc<<"\n";
      }
      else if(ansc<ansr){
        cout<<0<<" "<<ansc<<"\n";
      }
      else{
        cout<<1<<" "<<ansr<<"\n";
      }
    }

    return 0;
}
