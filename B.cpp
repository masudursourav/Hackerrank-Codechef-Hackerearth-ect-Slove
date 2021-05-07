#include <bits/stdc++.h>
using namespace std;
#define ll long long
void sol(){
  string s;
  cin>>s;
  int d=0;
  string answer;
  for(char c : s){
    int newd=c-'0';
    while(newd>d){
      ++d;
      answer+='(';
    }
    while(newd<d){
      --d;
      answer+=')';
    }
    answer+=c;
  }
  while(d>0){
    --d;
    answer+=')';
  }
  cout<<answer<<"\n";
}
int main(){
   ios::sync_with_stdio(0);
   cin.tie(0);
   int t;
   cin>>t;
   for(int i=1;i<=t;i++){
     cout<<"Case #"<<i<<": ";
     sol();
   }
}
