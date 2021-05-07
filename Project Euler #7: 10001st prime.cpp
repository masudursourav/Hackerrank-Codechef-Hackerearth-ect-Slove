#include <bits/stdc++.h>
using namespace std;
vector<long long int>v;
bool prime[1000002];
void shiv(){
    memset(prime,true,sizeof(prime));
    prime[0]=false;
    prime[1]=false;
    for(int i=2;i*i<=1000000;i++){
        if(prime[i]==true){
            for(int j=i*i;j<=1000000;j+=i){
                prime[j]=false;
            }
        }
    }
}
void store(){
    long long int sum=0;
    for(int i=0;i<=1000000;i++){
        if(prime[i]){
            sum=sum+i;
        }
        v.push_back(sum);
    }
}
int main()
{
    shiv();
    store();
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        cout<<v[n]<<"\n";
    }
    return 0;
}
