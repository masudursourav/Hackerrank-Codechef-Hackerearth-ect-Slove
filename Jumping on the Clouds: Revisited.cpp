#include <bits/stdc++.h>
using namespace std;
int main()
{
     int n,k,a[1000];
     cin>>n>>k;
     for(int i=0;i<n;i++){
         cin>>a[i];
     }
     int res=100;
     int r=0;
     for(int i=0;i<=n;i++){
         r=(r+k)%n;
         if(a[r]==1){
             res=res-3;
         }
         else{
             res=res-1;
         }
         if(r==0){
             break;
         }
     }
     cout<<res<<"\n";
}
