#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,k;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    int pa=1,c=0;
    for(int p=0;p<n;p++){
        for(int i=1;i<=a[p];i++){
            if(i==pa){
                ++c;
            }
            if(i%k==0){
                ++pa;
            }
        }
        if(a[p]%k!=0){
            ++pa;a
        }
    }
    cout<<c<<"\n";
}
