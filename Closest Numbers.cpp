#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int a[100005],n,min=100005;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    for(int i=1;i<n;i++){
        if((a[i]-a[i-1])<min){
            min=a[i]-a[i-1];
        }
    }
    for(int i=1;i<n;i++){
        if((a[i]-a[i-1])==min){
            cout<<a[i-1]<<" ";
            cout<<a[i]<<" ";
        }
    }
    cout<<"\n";
}
