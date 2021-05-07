#include <bits/stdc++.h>
using namespace std;
//vector<int>v;
bool prime[1000002];
void shiv(int n){
    memset(prime,true,sizeof(prime));
    prime[0]=false;
    prime[1]=false;
    long long int sum=0;
    for(int i=2;i*i<=n;i++){
        if(prime[i]==true){
            //v.push_back(i);
            sum+=i;
            for(int j=i*i;j<=n;j+=i){
                prime[j]=false;
            }
        }
    }
    cout<<sum<<"\n";
}
int main()
{
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        shiv(n);
    }
    return 0;
}
