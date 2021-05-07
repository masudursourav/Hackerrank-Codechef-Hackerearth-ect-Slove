#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int t;
    scanf("%d",&t);
    while(t--){
    string s;
    int a[27]={0};
    scanf("%d",&n);
    cin>>s;
    int c=0;
    for(int i=0;i<n;i++){
        if(s[i]=='_'){
            c=1;
        }
        else{
            a[s[i]-'A']=a[s[i]-'A']+1;
        }
    }
    int ch=0;
    for(int i=0;i<26;i++){
        if(a[i]==1){
            cout<<"NO"<<"\n";
            ch=1;
            break;
        }
    }
    if(c==1 && ch==0){
        int k=0;
        for(int i=0;i<26;i++){
            if(a[i]==1){
                cout<<"NO"<<"\n";
                k=1;
                break;
            }
        }
        if(k==0){
            cout<<"YES"<<"\n";
        }
    }
    else if(ch==0){
        int k=0;
        for(int i=0;i<n-1;i++){
            if(s[i]==s[i+1]){
                i=i+1;
            }
            else if(s[i]==s[i-1]){
                k=0;
            }
            else{
                k=1;
                cout<<"NO"<<"\n";
                break;
            }
        }
        if(k==0){
            cout<<"YES"<<"\n";
        }
    }
    }
    return 0;
}
