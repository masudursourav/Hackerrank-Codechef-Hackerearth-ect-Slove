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
    int a[6][6],mx=-64;
    for(int i=0;i<6;i++){
      for(int j=0;j<6;j++){
        cin>>a[i][j];
      }
    }

    for(int i=0;i<6;i++){
      ll sum=0;
      for(int j=0;j<6;j++){
        if(i+2<6 && j+2<6){
          sum=a[i][j]+a[i][j+1]+a[i][j+2]+a[i+1][j+1]+a[i+2][j]+a[i+2][j+1]+a[i+2][j+2];
          if(sum>mx){
            mx=sum;
          }
        }
      }
    }
    cout<<mx<<"\n";

    return 0;
}
