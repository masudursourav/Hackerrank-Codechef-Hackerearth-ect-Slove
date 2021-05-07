#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    string s,q;
    q="hackerrank";
    cin>>t;
    while(t--){
        cin>>s;
        int c=0,ch=0;
        for(int i=0;i<s.size();i++){
            if(s[i]==q[c]){
                ++c;
            }
            if(c>=q.size()){
                ch=1;
                break;
            }
        }
        if(ch==1){
            cout<<"YES"<<"\n";
        }
        else{
            cout<<"NO"<<"\n";
        }
    }
    return 0;
}
