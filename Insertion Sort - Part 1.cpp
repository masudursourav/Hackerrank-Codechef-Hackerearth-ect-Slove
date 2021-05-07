#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[10000];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n-1;j++){
            if(a[j]>a[j+1]){
                int c=a[j+1];
                a[j+1]=a[j];
                for(int k=0;k<n;k++){
                    cout<<a[k]<<" ";
                }
                a[j]=c;
                cout<<"\n";
                break;
            }
            }
        }
        for(int k=0;k<n;k++){
            cout<<a[k]<<" ";
        }
         cout<<"\n";
    return 0;
}
