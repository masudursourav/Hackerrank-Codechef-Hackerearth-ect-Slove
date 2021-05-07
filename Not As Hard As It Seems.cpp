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
   //ios_base::sync_with_stdio(false);
    //cin.tie(NULL);
    string s;
    while(cin>>s){
      ll cnt=0;
    stack<char>st;
    if(s.size()%2!=0){
      cout<<"No"<<"\n";
      return 0;
    }
    for(char c:s){
      if(c=='('||c=='{'||c=='['){
        st.push(c);
      }
      if(c==')'||c=='}'||c==']'){
        char top=st.top();
        st.pop();
        if(top=='(' && c==')' ||
           top=='{' && c=='}' ||
           top=='[' && c==']'){
             ++cnt;
           }
      }
    }
    cout<<cnt<<"\n";
  }
    return 0;
}
