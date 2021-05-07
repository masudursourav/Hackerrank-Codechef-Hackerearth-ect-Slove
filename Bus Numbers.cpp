//*Here I go out to sea again
//*The sunshine fills my hair
//*And dreams hang in the air

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mp make_pair
#define pb push_back

int main()
{
   ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++){
      int in;
      cin>>in;
      v.pb(in);
    }
    sort(v.begin(),v.end());
    int c=0,temp;
    for(int i=0;i<n;i++){
      if(v[i+1]-v[i]==1 && c==0 && i+1<n){
        ++c;
        temp=v[i];
      }
      else if(v[i+1]-v[i]==1 && c>0 && i+1<n){
        ++c;
      }
      else if(v[i+1]-v[i]>1 && c>1 || (i+1==n && c>1)){
        cout<<temp<<"-"<<v[i]<<" ";
        c=0;
      }
      else if((v[i+1]-v[i]>1 && c==1)||(i+1==n &&c==1)){
        cout<<temp<<" "<<v[i]<<" ";
        c=0;
      }
      else{
        cout<<v[i]<<" ";
      }
    }
    cout<<"\n";
    return 0;
}
