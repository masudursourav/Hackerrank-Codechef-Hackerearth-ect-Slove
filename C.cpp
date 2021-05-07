#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ar array
const int mx=1e3;
int n;
char  c[2]={'C','J'},answer[mx];
ar<int,3>a[mx];
int l[2];
void sol(){
      cin>>n;
      for(int i=0;i<n;i++){
        cin>>a[i][0]>>a[i][1];
        a[i][2]=i;
      }
      sort(a,a+n);
      l[0]=l[1]=1e9;
      for(int i=n-1;~i;--i){
        bool ass=0;
        int p=0,p1=1;
        if(l[p]>l[p1]){
          swap(p,p1);
        }
        if(!ass && a[i][1]<=l[p]){
          ass=1;
          answer[a[i][2]]=c[p];
          l[p]=a[i][0];
        }
        if(!ass && a[i][1]<=l[p1]){
          ass=1;
          answer[a[i][2]]=c[p1];
          l[p1]=a[i][1];
        }
        if(!ass){
          cout<<"IMPOSSIBLE"<<"\n";
          return;
        }
      }
      for(int i=0;i<n;++i){
        cout<<answer[i];
      }
      cout<<"\n";
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
