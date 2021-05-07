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
    string s;
    cin>>s;
    int c=1;
    int mx=1;
    for(int i=0;i<s.size()-1;i++){
      if(s[i]==s[i+1]){
        ++c;
        if(c>mx){
          mx=c;
        }
      }
      else{
        c=1;
      }
    }
    cout<<mx<<"\n";
    return 0;
}
