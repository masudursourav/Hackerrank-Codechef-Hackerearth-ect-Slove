#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,a[105]={0};
    cin>>n;
    for(int i=1;i<=n;i++){
        int in;
        cin>>in;
        a[in]=a[in]+1;
    }
    for(int i=0;i<100;i++){
        cout<<a[i]<<" ";
    }
    cout<<"\n";
    return 0;
}
