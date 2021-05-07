#include <bits/stdc++.h>
using namespace std;
int main()
{
    int d1,d2,m1,m2,y1,y2;
    cin>>d1>>m1>>y1;
    cin>>d2>>m2>>y2;
    if(d1!=d2 && m1==m2 && y1==y2){
        if(d1>d2){
            cout<<(d1-d2)*15<<"\n";
        }
        else{
            cout<<"0"<<"\n";
            return 0;
        }
    }
    else if(m1!=m2 && y1==y2){
        if(m1>m2){
            cout<<(m1-m2)*500<<"\n";
        }
        else{
            cout<<"0"<<"\n";
            return 0;
        }
    }
    else if(y1!=y2 && y1>y2){
        cout<<"10000"<<"\n";
    }
    else{
        cout<<"0"<<"\n";
    }
    return 0;
}
