#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int c=0;
    string s;
    cin>>n;
    cin>>s;
    int k=0;
    for(int i=0;i<n;i++){
        if(s[i]=='U'){
            ++c;
        }
        else if(s[i]=='D'){
            --c;
        }
        if(s[i]=='U'&&c==0){
            ++k;
        }
    }
    cout<<k<<"\n";
    return 0;
}
