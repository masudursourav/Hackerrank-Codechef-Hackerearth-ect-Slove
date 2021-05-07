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
    if(s.size()<=3){
      cout<<s<<"\n";
    }
    else if(s.size()<=6){
      if(s.size()==5){
        cout<<s[0]<<s[1]<<","<<s[2]<<s[3]<<s[4]<<"\n";
      }
      else if(s.size()==6){
        cout<<s[0]<<s[1]<<s[2]<<","<<s[3]<<s[4]<<s[5]<<"\n";
      }
      else{
          cout<<s[0]<<","<<s[1]<<s[2]<<s[3]<<"\n";
      }
    }
    else if(s.size()<=9){
      if(s.size()==9){
        cout<<s[0]<<s[1]<<s[2]<<","<<s[3]<<s[4]<<s[5]<<","<<s[6]<<s[7]<<s[8]<<"\n";
      }
      else if(s.size()==8){
      cout<<s[0]<<s[1]<<","<<s[2]<<s[3]<<s[4]<<","<<s[5]<<s[6]<<s[7]<<"\n";
      }
      else{
          cout<<s[0]<<","<<s[1]<<s[2]<<s[3]<<","<<s[4]<<s[5]<<s[6]<<"\n";
      }
    }

    return 0;
}
