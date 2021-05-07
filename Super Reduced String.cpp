#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    for(int i=1;i<s.size();i++){
        if(s[i]==s[i-1]){
            s.erase(s.begin()+i);
            s.erase(s.begin()+(i-1));
            i=0;
        }
    }
    if(s.size()==0){
        cout<<"Empty String"<<"\n";
    }
    else{
        cout<<s<<"\n";
    }
    return 0;
}
