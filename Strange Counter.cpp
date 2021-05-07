#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,r=3;
    cin>>t;
    while(t>r){
        t=t-r;
        r=r*2;
    }
    cout<<r-t+1<<"\n";
    return 0;
}
