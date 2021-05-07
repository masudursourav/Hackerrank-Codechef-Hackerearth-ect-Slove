#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[1000],m,k;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cin>>m>>k;
    int c=0;
    if(n==1){
        if(a[0]==m){
            cout<<"1"<<"\n";
            return 0;
        }
    }
    for(int i=0;i<=n-k;i++){
        int sum=0;
        for(int j=i;j<i+k;j++){
            sum+=a[j];
        }
        if(sum==m){
            ++c;
        }
    }
    cout<<c<<"\n";
}
