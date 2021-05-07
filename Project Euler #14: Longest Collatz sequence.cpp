#include <bits/stdc++.h>
using namespace std;
vector<int> v;
void store(){
  v.push_back(0);
  for(int i=1;i<=5*1000000;i++){
      int temp=i;
      int c=0;
      if(i%2!=0){
      while(temp!=1){
          if(temp%2==0){
              temp=temp/2;
          }
          else{
              temp=3*temp+1;
              temp=temp/2;
              c+=2;
          }
        }
      }
        v.push_back(c);
}
}
int main()
{
    store();
    int n,t;
    cin>>t;
    while(t--){
        cin>>n;
        int num,mx=0;
        for(int i=1;i<=n;i++){
          if(mx<v[i]){
            num=i;
            mx=v[i];
          }
        }
        cout<<num<<"\n";
    }
}
