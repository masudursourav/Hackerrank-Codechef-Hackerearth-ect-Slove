#include <bits/stdc++.h>
using namespace std;
long long int l[1001][1001] = { 0 };
void in()
{
    l[0][0] = 1;
    for (int i = 1; i < 1001; i++) {
        l[i][0] = 1;
        for (int j=1;j<i + 1; j++) {
            l[i][j] = (l[i-1][j-1]+l[i-1][j])%1000000000;
        }
    }
}
int ncr(int n,int r){
    return l[n][r];
}
int main(){
    in();
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        for(int i=0;i<=n;i++){
            long long int c=ncr(n,i);
            cout<<c<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
