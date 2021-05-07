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
      string s;
      cin>>s;
      for(int i=0;i<s.size();i++){
        if(s[i]=='?' && s[i+1]=='a' && i+1<s.size()){
          s[i]='b';
        }
        else if(s[i]=='?' && s[i-1]=='a' && i-1>=0){
          s[i]='b';
        }
        else if(s[i]=='?'){
          s[i]='a';
        }
      }
      cout<<s<<"\n";

      return 0;
  }
