#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s2;
    s2="hackerrank";
    int t;
    scanf("%d ",&t);
    while(t--){
        string s;
        getline(cin,s);
        if(s==s2){
            cout<<"0"<<"\n";
            continue;
        }
        stringstream ss(s);
        string word;
        int c=0;
        int pos=0;
        int pos2=0;
        int ch=0;
        while(ss>>word){
            ++c;
            if(word==s2 && ch==0){
                pos=c;
            }
            else if(word==s2 && ch==1){
                pos2=c;
            }
        }
        if(pos==c){
            cout<<"2"<<"\n";
        }
        else if(pos==1){
            cout<<"1"<<"\n";
        }
        else if(pos==1 && pos2==c){
            cout<<"0"<<"\n";
        }
        else{
            cout<<"-1"<<"\n";
        }

    }
    return 0;

}
