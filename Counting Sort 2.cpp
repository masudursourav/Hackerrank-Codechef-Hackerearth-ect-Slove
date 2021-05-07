#include <bits/stdc++.h>
using namespace std;
int main()
{
    long int n, a[105]={0};
     cin>>n;
     for(int i=1;i<=n;i++){
         int in;
         cin>>in;
         a[in]=a[in]+1;
     }
     for(int i=0;i<100;i++){
         if(a[i]>0){
         for(int j=1;j<=a[i];j++){
             cout<<i<<" ";
         }
     }
     }
     cout<<"\n";
}
