#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,b;
    cin>>n>>b;
    long long int sum=0;
    for(int i=1;i<=n;i++){
        string p,q,sq,s;
        p=to_string(i);
        q=p;
        reverse(p.begin(),p.end());
        if(p==q){
            int k=i;
            while(k>0){
                int r=k%b;
                s+=to_string(r);
                k=k/b;
            }
            sq=s;
            reverse(s.begin(),s.end());
            if(sq==s){
                sum=sum+i;
            }
        }
    }
    cout<<sum<<"\n";
}
