#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int a[1000000],n,k;
    cin>>n;
    cin>>k;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    long long int min=a[n-1]-a[0];
    for(int i=0;i<n-k+1;i++){
        if(a[i+k-1]-a[i]<min){
            min=a[i+k-1]-a[i];
        }
    }
    cout<<min<<"\n";
    return 0;
}
