#include <bits/stdc++.h>
using namespace std;
long long int l[1010][1010];
void ncr(){
    l[0][0]=1;
    for(int i=1;i<1001;i++){
        l[i][0]=1;
        for(int j=1;j<i+1;j++){
            l[i][j]=(l[i-1][j-1]+l[i-1][j])%1000000000;
        }
    }
}

int main()
{
    ncr();
    long long int n,t,k;
     cin>>t;
    while(t--){
     cin>>n>>k;
     cout<<l[((n+k)-1)][n-1]<<"\n";
    }
}
