#include <bits/stdc++.h>
using namespace std;
int main()
{
    set<long long int>s;
    long long int n,in;
    cin>>n;
    while(n--){
        cin>>in;
        s.insert(in);
    }
    cout<<s.size()<<"\n";
    return 0;
}
