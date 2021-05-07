#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    string s;
    cin>>t;
    while(t--){
        cin>>s;
        int c=0;
        for(int i=0;i<s.size();i+=2){
            if((s[i]=='x'&&s[i+1]=='y')||(s[i]=='y'&&s[i+1]=='x')){
                ++c;
            }
            else{
                i=i-1;
            }
        }
        cout<<c<<"\n";
    }
    return 0;
}
