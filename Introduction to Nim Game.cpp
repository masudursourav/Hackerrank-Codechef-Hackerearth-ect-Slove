#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int sum=0;
        for(int i=0;i<n;i++){
            int in;
            cin>>in;
            sum^=in;
        }
        if(sum==0){
            cout<<"Second"<<"\n";
        }
        else{
            cout<<"First"<<"\n";
        }
    }
    return 0;
}
