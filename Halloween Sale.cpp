#include <bits/stdc++.h>
using namespace std;
int main()
{
    int m,p,d,s;
    cin>>m>>p>>d>>s;
    int c=0;
    while(1){
        s=s-m;
        m=m-p;
        if(s>=0){
            ++c;
            if(m<=d){
                break;
            }
        }
        if(s<=0){
            break;
        }

    }
    while(s>=d){
        ++c;
        s=s-d;
    }
    cout<<c<<"\n";

}
