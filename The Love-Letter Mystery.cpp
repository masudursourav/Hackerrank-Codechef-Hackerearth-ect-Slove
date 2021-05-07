#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    string s;
    while(t--){
        cin>>s;
        int sum;
        if(((s.size())%2)==0){
            sum=0;
            for(int i=0,j=s.size()-1;i<(s.size()/2);i++,j--){
                sum+=abs((s[i]-'a'+1)-(s[j]-'a'+1));
            }
        }
        else{
            sum=0;
            for(int i=0,j=s.size()-1;i<((s.size()-1)/2);i++,j--){
                sum+=abs((s[i]-'a'+1)-(s[j]-'a'+1));
            }
        }
        cout<<sum<<"\n";
    }
}
