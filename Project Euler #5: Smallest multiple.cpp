#include <bits/stdc++.h>
using namespace std;
int prime[42];
void check_p(){
  memset(prime,1,sizeof(prime));
  prime[0]=prime[1]=0;
  for(int i=2;i*i<=40;i++){
    if(prime[i]){
      for(int p=i*i;p<=40;p+=i){
        prime[p]=0;
      }
    }
  }
}
int main()
{
    check_p();
    int n,t;
    cin>>t;
    while(t--)
    {
      cin>>n;
    long long int sum=1;
    for(int i=2;i<=n;i++){
      if(prime[i]){
        int c=0;
        for(int j=i;j<=n;j*=i){
          if(j<=n){
            ++c;
          }
        }
        sum*=pow(i,c);
      }
    }
    cout<<sum<<"\n";
  }
}
