#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int t;
    cin>>t;
    vector<bool>v(10e7);
    int j=0;
    for(int i=0;i<s.size();i=i+j){
        int sum=0;
        for(j=0;j<s.size()-1 && s[i]==s[i+j];j++){
            sum+=((s[i+j]-'a')+1);
            v[sum]=true;
        }
    }
    while(t--){
        int x;
        cin>>x;
        if(v[x]){
            cout<<"Yes"<<"\n";
        }
        else{
            cout<<"No"<<"\n";
        }
    }
    return 0;
}
