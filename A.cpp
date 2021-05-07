#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int mx=100;
int n,m[mx][mx];
void sol(){
  cin>>n;
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      cin>>m[i][j];
    }
  }
      int k=0;
      for(int i=0;i<n;i++){
        k+=m[i][i];
      }
      int r=0;
      for(int i=0;i<n;i++){
        set<int> s;
        bool d=0;
        for(int j=0;j<n;j++){
          if(s.find(m[i][j])!=s.end())
          d=1;
          s.insert(m[i][j]);
        }
        if(d)
        ++r;
      }
      int c=0;
      for(int i=0;i<n;i++){
        set<int> s;
        bool d=0;
        for(int j=0;j<n;j++){
          if(s.find(m[j][i])!=s.end())
          d=1;
          s.insert(m[j][i]);
        }
        if(d)
        ++c;
      }
      cout<<k<<" "<<r<<" "<<c<<"\n";
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
