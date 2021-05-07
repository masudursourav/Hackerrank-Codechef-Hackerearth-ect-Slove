#include <bits/stdc++.h>
using namespace std;
int main()
{
    string in;
    int t;
    cin>>t;
    while(t--){
        string s,s1;
        cin>>in;
        int l=in.size();
        if(l%2!=0){
            cout<<"-1"<<"\n";
            continue;
        }
        s=in.substr(0,l/2);
        s1=in.substr(l/2,l/2);
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
        cout<<(int)c/2<<"\n";
    }
}
