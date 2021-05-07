#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,a[100],b[100];
    cin>>n>>m;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<m;i++){
        cin>>b[i];
    }
    sort(a,a+n);
    sort(b,b+m);
    int k=0,c[100];
    for(int i=a[n-1];i<=b[0];i++){
        int ch=0;
        for(int j=0;j<n;j++){
            if(i%a[j]!=0){
                ch=1;
                break;
            }
        }
        if(ch==0){
            c[k]=i;
            ++k;
        }
    }
    int count=0;
    for(int i=0;i<k;i++){
        int ch=0;
        for(int j=0;j<m;j++){
            if(b[j]%c[i]!=0){
                ch=1;
                break;
            }
        }
        if(ch==0){
            ++count;
        }
    }
    cout<<count<<"\n";
}
