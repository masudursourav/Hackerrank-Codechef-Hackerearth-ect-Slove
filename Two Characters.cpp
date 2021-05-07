#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string s;
    cin>>n;
    cin>>s;
    int a[27]={0};
    for(int i=0;i<n;i++){
        a[s[i]-'a']++;
    }
    for(int i=1;i<n;i++){
        if(s[i]==s[i-1]){
            a[s[i]-'a']=0;
        }
    }
    int mx[28]={0};
    for(int i=0;i<26;i++){
        int m=0;
        int sum=0;
        for(int j=i+1;j<26;j++){
            sum=0;
            sum=a[i]+a[j];
            if(sum>m){
                m=sum;
            }
        }
        mx[i]=m;
    }
    sort(mx,mx+26,greater<int>());
    cout<<mx[0]<<"\n";

}
