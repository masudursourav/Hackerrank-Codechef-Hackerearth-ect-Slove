#include <bits/stdc++.h>
using namespace std;
bool p[9000009];
void shiv(){
    memset(p,true,sizeof(p));
    p[0]=p[1]=false;
    for(int i=2;i*i<9000009;i++){
      if(p[i]==true){
        for(int j=i*i;j<9000009;j+=i){
          p[j]=false;
        }
      }
    }
}
vector<int> v;
void store(){
  for(int i=0;i<9000009;i++){
    if(p[i]){
      v.push_back(i);
    }
  }
}
int main()
{
    shiv();
    store();
    int n;
    cin>>n;
    cout<<v[n-1]<<"\n";
    return 0;
}
