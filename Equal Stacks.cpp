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
    int x,y,z;
    cin>>x>>y>>z;
    int a[x],b[y],c[z];
    int h1=0,h2=0,h3=0;
    for(int i=0;i<x;i++){
      cin>>a[i];
      h1+=a[i];
    }
    for(int i=0;i<y;i++){
      cin>>b[i];
      h2+=b[i];
    }
    for(int i=0;i<z;i++){
      cin>>c[i];
      h3+=c[i];
    }
    int i=0,j=0,k=0;
    while(1){
      if(h1==h2 && h2==h3){
        break;
      }
      if(h1>h2 || h1>h3){
        h1=h1-a[i];
        ++i;
      }
      if(h2>h1 || h2>h3){
        h2=h2-b[j];
        ++j;
      }
      if(h3>h1 || h3>h2){
        h3=h3-c[k];
        ++k;
      }
    }
    cout<<h1<<"\n";

    return 0;
}
