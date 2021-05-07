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
    int a[900005]={0};
    int n;
    cin>>n;
    for(int i=1;i<n;i++){
      int in;
      cin>>in;
      a[in]++;
    }
    for(int i=1;i<=n;i++){
      if(a[i]==0){
        cout<<i<<"\n";
        break;
      }
    }


    return 0;
}
