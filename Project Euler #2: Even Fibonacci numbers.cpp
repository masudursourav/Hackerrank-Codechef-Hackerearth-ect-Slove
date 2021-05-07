#include <bits/stdc++.h>
using namespace std;
unsigned long long int f[100]={0};
void fib(){
    f[0]=0;
    f[1]=1;
    f[2]=1;
    for(int i=3;i<=90;i++){
        f[i]=f[i-1]+f[i-2];
    }
}
int main()
{
    fib();
    int t;
    cin>>t;
    unsigned long long int n;
    while(t--){
        unsigned long long int sum=0;
        cin>>n;
        for(int i=1;i<=90;i++){
            if(f[i]<=n && f[i]%2==0){
                sum+=f[i];
            }
            else if(f[i]>n){
                break;
            }
        }
        cout<<sum<<"\n";
    }
    return 0;
}
