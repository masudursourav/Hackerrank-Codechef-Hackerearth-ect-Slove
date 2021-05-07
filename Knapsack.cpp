//*Here I go out to sea again
//*The sunshine fills my hair
//*And dreams hang in the air

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mp make_pair
#define pb push_back
int knapsack(int b[],int n,int w){
  if(w<0){
    return INT_MIN;
  }
  if(n<0 || w==0){
    return 0;
  }
  int inc=b[n]+knapsack(b,n-1,w-b[n]);
  int ex=knapsack(b,n-1,w);
  return max(inc,ex);
}
int main()
{
   ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
    int n,w;
    cin>>n>>w;
    int b[n];
    for(int i=0;i<n;i++){
      cin>>b[i];
    }
    cout<<knapsack(b,n-1,w)<<"\n";
  }
    return 0;
}
