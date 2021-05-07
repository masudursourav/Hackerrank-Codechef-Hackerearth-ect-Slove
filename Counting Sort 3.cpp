#include <bits/stdc++.h>
using namespace std;
int main()
{
    long int n;
    int a[100]={0};
    string s;
    cin>>n;
    int mx=0;
    for(int i=0;i<n;i++){
        int in;
        cin>>in;
        cin>>s;
        a[in]++;
        if(mx<in){
            mx=in;
        }
    }
    int b[100]={0};
    for(int i=0;i<100;i++){
        int sum=0;
        for(int j=0;j<=i;j++){
            if(i>=mx){
                b[i]=n;
            }
            else{
                    b[i]+=a[j];
            }
        }
        cout<<b[i]<<" ";
    }

    return 0;
}
