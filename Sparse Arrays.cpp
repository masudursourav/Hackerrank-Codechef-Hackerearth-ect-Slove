#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s[10010],q;
    int n,m;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>s[i];
    }
    cin>>m;
    while(m--){
        cin>>q;
        int c=0;
        for(int i=0;i<n;i++){
            if(s[i]==q)
            ++c;
        }
        cout<<c<<"\n";
    }
    return 0;
}
