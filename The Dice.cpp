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
    string s;
    cin>>s;
    ll l=s.size();
    if(s[l-1]=='6'){
      cout<<"-1"<<"\n";
      return 0;
    }
    for(int i=0;i<s.size();i++){
      if(s[i]=='6'){
        --l;
      }
      if(s[i]<'1' && s[i]>'6'){
        cout<<"-1"<<"\n";
        return 0;
      }
    }
    if(l>0){
    cout<<l<<"\n";
  }
    else{
    cout<<"-1"<<"\n";
  }
    return 0;
}
