#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,a;
    cin>>t;
    while(t--){
        int flag=0;
        cin>>n;
        int c5=0,c10=0;
        for(int i=0;i<n;i++){
            cin>>a;
            if(a==5){
                ++c5;
            }
            else if(a==10){
                ++c10;
                if(c5>0){
                    --c5;
                }
                else{
                    flag=1;
                }
            }
            else if(a==15){
                if(c10>0){
                    --c10;
                }
                else if(c5>1){
                    c5=c5-2;
                }
                else{
                    flag=1;
                }
            }
        }
        if(flag){
            cout<<"NO"<<"\n";
        }
        else{
            cout<<"YES"<<"\n";
        }
    }
    return 0;
}
