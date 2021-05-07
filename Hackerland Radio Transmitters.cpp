#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,k,a[100005];
    cin>>n>>k;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    long long int c=0,s=0,i=0;
    while(i<n){
        s=a[i]+k;
        ++c;
        while(i<n && a[i]<=s){
            ++i;
        }
        --i;
        s=a[i]+k;
        while(i<n && a[i]<=s){
            ++i;
        }
    }
    cout<<c<<"\n";
}
