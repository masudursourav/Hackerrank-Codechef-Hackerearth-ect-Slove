#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[27]={0};
    string s;
    int n;
    cin>>n;
    int c=0;
    for(int i=0;i<n;i++){
        cin>>s;
        for(int j=0;j<s.size();j++){
            if(a[s[j]-'a']==c){
                a[s[j]-'a']++;
            }
        }
        ++c;
    }
    int ans=0;
    for(int i=0;i<26;i++){
        if(a[i]==n){
            ++ans;
        }
    }
    cout<<ans<<"\n";
}
