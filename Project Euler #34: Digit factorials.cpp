#include <bits/stdc++.h>
using namespace std;
int main()
{
  long long int n,sum=0;
  cin>>n;
  for(int i=11;i<=n;i++){
    int temp=i;
    long long int sumf=0;
    while(temp>0){
      int r=temp%10;
      int fact=1;
      for(int j=1;j<=r;j++){
        fact*=j;
      }
      sumf+=fact;
      temp=temp/10;
    }
    if(sumf%i==0){
      sum+=i;
    }
  }
  cout<<sum<<"\n";
  return 0;
}
