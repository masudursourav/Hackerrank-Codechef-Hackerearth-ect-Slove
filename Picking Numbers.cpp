#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[10000];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    int mx=0,c=0;
    for(int i=0;i<n;i++){
        int c=1;
        for(int j=i+1;j<n;j++){
        if(abs(a[i]-a[j])<=1){
            ++c;
        }
    }
            if(mx<c){
                mx=c;
            }
    }
    cout<<mx<<"\n";
}
