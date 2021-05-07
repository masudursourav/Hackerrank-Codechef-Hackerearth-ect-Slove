#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[10000];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int p=a[0];
    for(int i=0;i<n;i++){
        if(a[i]<p){
            cout<<a[i]<<" ";
        }
    }
    for(int i=0;i<n;i++){
        if(a[i]==p){
            cout<<a[i]<<" ";
        }
    }
    for(int i=0;i<n;i++){
        if(a[i]>p){
            cout<<a[i]<<" ";
        }
    }
    cout<<"\n";
}
