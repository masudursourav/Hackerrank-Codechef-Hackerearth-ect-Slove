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
    int c=0;
    for(int i=0;i<n;i++){
        long long int r=a[i]+k;
        if(binary_search(a, a+n,r)){
            ++c;
        }
    }
    cout<<c<<"\n";
}
