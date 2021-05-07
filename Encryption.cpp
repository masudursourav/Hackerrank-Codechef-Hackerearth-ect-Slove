#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int l=s.size();
    int n=sqrt(l);
    int m=n;
    if(n*n!=l){
        ++m;
    }
    for(int i=0;i<m;i++){
        for(int j=i;j<l;j+=m){
            cout<<s[j];
        }
        cout<<" ";
    }
    cout<<"\n";
    return 0;
}
