#include <bits/stdc++.h>
using namespace std;
int main()
{
  long long int n,a[10000],sumw=0,sumn=0,w;
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>a[i];
  }
  for(int i=0;i<n;i++){
    cin>>w;
    sumw+=w;
    sumn+=a[i]*w;
  }
  double ans=(double)sumn/sumw;
  printf("%.1lf\n",ans);
  return 0;
}
