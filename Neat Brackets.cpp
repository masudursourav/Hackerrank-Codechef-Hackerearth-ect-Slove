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
    stack<char>st;
    string s;
    cin>>s;
    if(s.size()%2!=0){
      cout<<"No"<<"\n";
      return 0;
    }
    for(char c:s){
      if(c=='('){
        st.push(c);
      }
      if(c==')'){
        if(st.empty()){
          cout<<"No"<<"\n";
          return 0;
        }
        char top=st.top();
        st.pop();
        if(top=='('&& c!=')'){
          cout<<"No"<<"\n";
          return 0;
        }
      }
    }
    cout<<"Yes"<<"\n";

    return 0;
}
