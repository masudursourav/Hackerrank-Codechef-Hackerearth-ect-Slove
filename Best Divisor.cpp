#include <bits/stdc++.h>
using namespace std;
int solve(int n){
    int sum=0;
    while(n>0){
        sum=sum+n%10;
        n=n=n/10;
    }
    return sum;
}
int main()
{
    int n,max=0,ans;
    cin>>n;
    for(int i=1;i<=n;i++){
        if(n%i==0){
        int sum=solve(i);
        if(sum>max){
            max=sum;
            ans=i;
        }
    }
    }
    cout<<ans<<"\n";
  return 0;
}
