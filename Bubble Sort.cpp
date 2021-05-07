#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n,a[1000];
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>a[i];
  }
  int c=0;
  for(int i=0;i<n-1;i++){
    for(int j=0;j<n-i-1;j++){
      if(a[j]>a[j+1]){
        int temp=a[j];
        a[j]=a[j+1];
        a[j+1]=temp;
        ++c;
      }
    }
  }
  cout<<c<<"\n";
  return 0;
}
