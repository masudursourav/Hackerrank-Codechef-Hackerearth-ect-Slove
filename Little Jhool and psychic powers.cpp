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
    ll c=1;
    for(int i=1;i<s.size();i++){
      if(s[i]==s[i-1]){
        ++c;
      }
      else{
        c=1;
      }
      if(c>=6){
        cout<<"Sorry, sorry!"<<"\n";
        return 0;
      }
    }
    cout<<"Good luck!"<<"\n";

    return 0;
}
