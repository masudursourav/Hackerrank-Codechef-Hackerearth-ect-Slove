//*Here I go out to sea again
//*The sunshine fills my hair
//*And dreams hang in the air

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mp make_pair
#define pb push_back
bool balexp(string s){
  stack<char>st;
  for(char c:s){
    if(c=='('||c=='{'||c=='['){
      st.push(c);
    }
    if(c==')'||c=='}'||c==']'){
      if(st.empty()){
        return false;
      }
      char top = st.top();
      st.pop();
      if((top=='(' && c!=')')||(top=='{' && c!='}')||(top=='[' && c!=']')){
        return false;
      }
    }
  }
  return st.empty();
}

int main()
{
   ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    int t;
    cin>>t;
    while(t--){
      cin>>s;
      if(balexp(s)){
        cout<<"YES"<<"\n";
      }
      else{
        cout<<"NO"<<"\n";
      }
    }

    return 0;
}
