#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[100000];
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    int c=0;
    for(int i=1;i<=n;i++){
        int x=a[i];
        int j=i-1;
        while(j>=1 && a[j]>x){
            ++c;
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=x;
    }
    cout<<c<<"\n";
    return 0;
}
