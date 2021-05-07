#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string s;
    int c=0;
    cin>>n;
    cin>>s;
    for(int i=0;i<n;i++){
        if(s[i]=='0' && s[i+1]=='1' && s[i+2]=='0'){
            ++c;
            i=i+2;
        }
    }
    cout<<c<<"\n";
    return 0;
}
