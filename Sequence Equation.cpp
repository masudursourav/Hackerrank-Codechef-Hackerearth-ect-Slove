#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[1000];
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    for(int i=1;i<=n;i++){
        int temp=0;
        for(int j=1;j<=n;j++){
            if(a[j]==i){
                temp=j;
                break;
            }
        }
        for(int k=1;k<=n;k++){
            if(a[k]==temp){
                cout<<k<<"\n";
                break;
            }
        }
    }

}
