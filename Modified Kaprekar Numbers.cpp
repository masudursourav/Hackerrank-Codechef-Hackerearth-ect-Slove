#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int p,q;
    cin>>p;
    cin>>q;
    int c=0;
    for(long long int i=p;i<=q;i++){
        if(i<9 && i==1){
            cout<<"1"<<" ";
            c=1;
        }
        else if(i>=9){
            unsigned long long int n=i*i;
            string s=to_string(n);
            int l=s.size();
            string s1,s2;
            if(l%2==0){
            s1=s.substr(0,l/2);
            s2=s.substr(l/2,l/2);
            }
            else{
            s1=s.substr(0,l/2);
            s2=s.substr(l/2,(l/2+1));
           }
            unsigned long long int num1=stoi(s1);
            unsigned long long int num2=stoi(s2);
            unsigned long long int sum=num1+num2;
            if(sum==i){
                cout<<i<<" ";
                c=1;
            }
        }
    }
    if(c==0){
        cout<<"INVALID RANGE"<<"\n";
        return 0;
    }
    cout<<"\n";
    return 0;
}
