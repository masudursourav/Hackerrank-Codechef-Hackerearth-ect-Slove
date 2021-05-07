#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        long long int a[100005]={0},sumf[100005]={0};
        long long int sum=0;
        for(int i=1;i<=n;i++){
            cin>>a[i];
            sum=sum+a[i];
            sumf[i]=sum;
        }
        long long int sumi=0;
        int c=0;
        if(n==1){
            c=1;
        }
        for(int i=n;i>=2;i--){
            sumi=sumi+a[i];
            if(sumf[i-2]==sumi){
                c=1;
                break;
            }
        }
        if(c==1){
            cout<<"YES"<<"\n";
        }
        else{
            cout<<"NO"<<"\n";
        }
    }

}
