#include <bits/stdc++.h>
using namespace std;
int main()
{
    int d;
    cin>>d;
    int s=5,l,sum=0;
    for(int i=1;i<=d;i++){
        l=(int)s/2;
        sum+=l;
        s=l*3;
    }
    cout<<sum<<"\n";
    return 0;
}
