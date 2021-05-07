#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s[100000],q;
    int n,qn;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>s[i];
    }
    sort(s,s+n);
    cin>>qn;
    while(qn--){
        long long int v=0;
        cin>>q;
        for(int i=0;i<q.size();i++){
            if(q[i]>='A' && q[i]<='Z'){
                v=v+((q[i]-'A')+1);
            }
            else if(q[i]>='a' && q[i]<='z'){
                v=v+((q[i]-'a')+1);
            }
        }
        int pos=0;
        for(int i=0;i<n;i++){
            if(s[i]==q){
                pos=i+1;
                break;
            }
        }
        v=v*pos;
        cout<<v<<"\n";
    }
    return 0;
}
