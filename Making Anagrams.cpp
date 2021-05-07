#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s,s1;
    cin>>s;
    cin>>s1;
    int c=0;
    int a[27]={0};
    int b[27]={0};
    for(int i=0;i<s.size();i++){
        a[s[i]-'a']++;
    }
    for(int i=0;i<s1.size();i++){
        b[s1[i]-'a']++;
    }
    for(int i=0;i<26;i++){
        c+=abs(a[i]-b[i]);
    }
    cout<<c<<"\n";
    return 0;
}
