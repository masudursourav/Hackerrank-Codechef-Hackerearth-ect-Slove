#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int a[27];
    memset(a,0,sizeof(a));
    for(int i=0;i<s.size();i++){
        a[s[i]-'a']++;
    }
    if(s.size()%2==0){
        for(int i=0;i<26;i++){
            if(a[i]%2!=0){
                cout<<"NO"<<"\n";
                return 0;
            }
        }
        cout<<"YES"<<"\n";
    }
    else{
        int c=0;
        for(int i=0;i<26;i++){
            if(a[i]%2!=0){
                ++c;
                if(c>1){
                cout<<"NO"<<"\n";
                return 0;
            }
            }
        }
        if(c==1){
        cout<<"YES"<<"\n";
    }
    else{
        cout<<"NO"<<"\n";
    }
    }
    return 0;
}
