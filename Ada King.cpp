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
    int t;
    cin>>t;
    while(t--){
      int n;
      cin>>n;
    char a[65][65];
    memset(a,'X',sizeof(a));
    int c=1;
    a[1][1]='O';
    for(int i=1;i<=8;i++){
      for(int j=1;j<=8;j++){
        if(c<n && a[i][j]=='X'){
          cout<<".";
          ++c;
        }
        else{
          cout<<a[i][j];
        }
      }
      cout<<"\n";
    }
  }
    return 0;
}
