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
    int n,k;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++){
      int in;
      cin>>in;
      a[(i+n-k)%n]=in;
    }
    for(int i=0;i<n;i++){
      cout<<a[i]<<" ";
    }
    cout<<"\n";
    return 0;
}
