#include <bits/stdc++.h>
using namespace std;
bool comp(string a, string b) {
if (a.size() != b.size())
return a.size() < b.size();
return a < b;
}

int main()
{
    int n;
    cin>>n;
    vector<string>v;
    string s;
    for(int i=0;i<n;i++){
        cin>>s;
        v.push_back(s);
    }
    sort(v.begin(),v.end(),comp);
    for(int i=0;i<n;i++){
        cout<<v[i]<<"\n";
    }
    return 0;
}
