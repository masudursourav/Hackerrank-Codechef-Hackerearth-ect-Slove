#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t,n,m,a[10000];
  cin>>t;
  while(t--){
    cin>>n>>m;
    for(int i=0;i<n;i++){
      cin>>a[i];
    }
    for(int i=0;i<n-1;i++){
      for(int j=0;j<n-i-1;j++){
        if(a[j]>a[j+1]){
          int c=a[j];
          a[j]=a[j+1];
          a[j+1]=c;
        }
      }
    }
    long int suml=0,sums=0;
    int r=n-m;
    int k=1;
    for(int i=n-1;i>=0 && k<=r;i--,k++){
      suml+=a[i];
    }
    k=1;
    for(int i=0;i<n && k<=r;i++,k++){
      sums+=a[i];
    }
    cout<<suml-sums<<"\n";
  }
  return 0;
}
