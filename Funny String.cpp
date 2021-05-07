#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s,r;
    int t;
    cin>>t;
    while(t--){
        cin>>s;
        r=s;
        reverse(s.begin(),s.end());
        int c=0;
        for(int i=1;i<s.size();i++){
            int k=abs((s[i]-'a')-(s[i-1]-'a'));
            int q=abs((r[i]-'a')-(r[i-1]-'a'));
            if(k!=q){
                cout<<"Not Funny"<<"\n";
                c=1;
                break;
            }
        }
        if(c==0){
            cout<<"Funny"<<"\n";
        }
    }
}
