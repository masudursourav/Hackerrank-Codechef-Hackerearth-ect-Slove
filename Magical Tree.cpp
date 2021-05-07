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
    ll mx=INT_MIN;
    while(t--){
      string s;
      cin>>s;
      ll k=1;
      ll sum=0;
      for(int i=0;i<s.size();i++){
        if(s[i]=='-'){
          k=k*-1;
          continue;
        }
        else if(s[i]=='+'){
          k=k*1;
          continue;
        }
        sum+=((s[i]-'0')*k);
        k=1;
      }
      if(sum>mx){
        mx=sum;
      }
    }
    cout<<mx<<"\n";

    return 0;
}
