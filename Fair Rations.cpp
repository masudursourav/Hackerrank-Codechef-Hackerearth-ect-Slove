#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[10000];
    int n,sum=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
        sum+=a[i];
    }
    if(sum%2!=0){
        cout<<"NO"<<"\n";
        return 0;
    }
    int c=0;
    for(int i=0;i<n;i++){
        if(a[i]%2!=0){
            a[i]=a[i]+1;
            a[i+1]=a[i+1]+1;
            c=c+2;
        }
    }
    cout<<c<<"\n";
}
