#include <bits/stdc++.h>
using namespace std;
int main()
{
  stack<long long int>st,mx;
  mx.push(-1);
  long long int n,x,t,in;
  cin>>n;
  while(n--){
    cin>>in;
    if(in==1){
      cin>>x;
      if(x>=mx.top()){
        mx.push(x);
      }
      st.push(x);
    }
    if(in==2){
        long int d=st.top();
      if(d==mx.top()){
      mx.pop();
  }
   st.pop();
    }
    if(in==3){
      cout<<mx.top()<<"\n";
    }
  }
  return 0;
}
