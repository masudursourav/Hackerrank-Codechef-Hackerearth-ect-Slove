#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[10000];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int mn=10000;
    int c=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]==a[j]){
                int r=j-i;
                if(mn>r){
                    mn=r;
                    c=1;
                }
            }
        }
    }
    if(c)
    cout<<mn<<"\n";
    else
    cout<<"-1"<<"\n";
    return 0;
}
