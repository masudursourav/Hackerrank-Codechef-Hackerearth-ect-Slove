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
    int a[n];
    for(int i=0;i<n;i++){
      cin>>a[i];
    }
    sort(a,a+n);
    for(int i=0;i<n-1;i++){
      if(a[i]^a[i+1]){
        if(i!=0 && a[i]^a[i-1]){
        cout<<a[i]<<" ";
      }
      if(i==0){
        cout<<a[i]<<" ";
      }
    }
  }
  cout<<"\n";
    return 0;
}
