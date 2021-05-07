#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        for(long int i=n-1;i>=101101;i--){
            string s,q;
            s=to_string(i);
            q=s;
            int c=0;
            reverse(s.begin(),s.end());
            if(q==s){
                for(int j=100;j<=999;j++){
                    if(i%j==0 && (i/j)<=999){
                    c=1;
                    break;
                    }
                }
            }
            if(c){
                cout<<i<<"\n";
                break;
            }
    }
}
return 0;
}
