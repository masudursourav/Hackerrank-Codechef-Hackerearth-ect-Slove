#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        long long int a=(long long int)((n-1)/3);
        long long int b=(long long int)((n-1)/5);
        long long int c=(long long int)((n-1)/15);
        long long int sum=((a*(3+(a*3)))/2);
        sum+=((b*(5+(b*5)))/2);
        sum-=((c*(15+(c*15)))/2);
        cout<<sum<<"\n";
    }
    return 0;
}
