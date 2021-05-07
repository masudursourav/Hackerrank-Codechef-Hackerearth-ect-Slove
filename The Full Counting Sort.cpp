#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    cin>>n;
    string s[n];
    string k;
    for(int i=0;i<n/2;i++){
        int in;
        cin>>in;
        cin>>k;
        s[in]=s[in]+"-"+" ";
    }
    for(int i=n/2;i<n;i++){
        int in;
        cin>>in;
        cin>>k;
        s[in]=s[in]+k+" ";
    }
    for(int i=0;i<n;i++){
        cout<<s[i];
    }
    cout<<"\n";
    return 0;
}
