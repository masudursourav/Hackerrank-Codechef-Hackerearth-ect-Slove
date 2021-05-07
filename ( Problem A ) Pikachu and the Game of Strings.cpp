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
      ll n;
      cin>>n;
      string s,t;
      cin>>s>>t;
      ll c=0;
      for(int i=0;i<n;i++){
        if(s[i]<t[i]){
          ll k=(ll)(t[i]-s[i]);
          if(k>=13){
            c+=(k-13);
          }
          else{
            c+=k;
          }
        }
        else if(s[i]>t[i]){
          ll k=(ll)(s[i]-t[i]);
          if((k+13)%26 < (t[i]-'a')){
            c+=(t[i]-'a')-(((s[i]-'a')+13)%26);
          }
          else{
            c+=((26-(s[i]-'a'))+(t[i]-'a'));
          }
        }
      }
      cout<<c<<"\n";
      return 0;
  }
