#include <bits/stdc++.h>
using namespace std;
int a[10000][10000];
int main()
{
  int n;
  cin>>n;
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      cin>>a[i][j];
    }
  }
  for(int j=n-1;j>=0;j--){
    for(int i=0;i<n;i++){
      cout<<a[i][j];
      if(i!=n-1){
        cout<<" ";
      }
    }
    cout<<"\n";
  }
  return 0;
}
