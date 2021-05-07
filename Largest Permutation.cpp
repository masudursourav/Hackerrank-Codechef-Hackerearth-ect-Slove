#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,a[1000000],mx=0,pos;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]>mx){
            mx=a[i];
            pos=i;
        }
    }
    swap(a[0],a[pos]);
   for(int i=0;i<n;i++){
       cout<<a[i]<<" ";
   }
   cout<<"\n";
}
