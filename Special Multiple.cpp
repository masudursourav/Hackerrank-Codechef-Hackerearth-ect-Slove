#include <bits/stdc++.h>
using namespace std;
long long int a[10005];
void bin(){
    for(int i=1;i<=10000;i++){
        string b;
        int temp=i;
        long long int r=0;
        while(temp>0){
            r=temp%2;
            b+=(r+'0');
            temp=temp/2;
        }
        reverse(b.begin(),b.end());
        a[i]=stol(b);
    }
}
int main()
{
    bin();
    unsigned long long int n,t;
    cin>>t;
    while(t--){
        cin>>n;
        int i=1;
        while(1){
            if((a[i]*9)%n==0){
                cout<<a[i]*9<<"\n";
                break;
            }
            else{
                ++i;
            }

    }
}
    return 0;
}
