#include <bits/stdc++.h>
using namespace std;
int main()
{
    int k;
    string s,q;
    cin>>s;
    cin>>q;
    cin>>k;
    int c=0;
    for(int i=0;i<q.size();i++){
        if(q[i]!=s[i]){
            break;
        }
        ++c;
    }
    if((s.size()+q.size()-2*c)>k){
          cout<<"No"<<"\n";
      }
      else if((s.size()+q.size()-2*c)%2==k%2){
          cout<<"Yes"<<"\n";
      }
      else if((s.size()+q.size())<k){
          cout<<"Yes"<<"\n";
      }
      else{
          cout<<"No"<<"\n";
      }
}
