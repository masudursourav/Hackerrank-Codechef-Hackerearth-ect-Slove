#include <bits/stdc++.h>
using namespace std;
int main()
{
    int y;
    cin>>y;
    if(y==1918){
        cout<<"26.09.1918"<<"\n";
        return 0;
    }
    if(y%4==0 && 1918>=y){
        cout<<"12.09."<<y<<"\n";
    }
    else if(1918<=y && ((y%4==0 && y%100!=0)||(y%400==0))) {
        cout<<"12.09."<<y<<"\n";
    }
    else{
        cout<<"13.09."<<y<<"\n";
    }
    return 0;
}
