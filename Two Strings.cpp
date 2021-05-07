#include <bits/stdc++.h>
using namespace std;
int main()
{
    string p,q;
    int t;
    cin>>t;
    while(t--){
        cin>>p;
        cin>>q;
        int c=0;
        for(int i=0;i<p.size();i++){
            char k=p[i];
            size_t f=q.find(k);
            if(f!=string::npos){
                c=1;
                break;
            }
            }
        if(c==1){
            cout<<"YES"<<"\n";
        }
        else{
            cout<<"NO"<<"\n";
        }
    }
}
