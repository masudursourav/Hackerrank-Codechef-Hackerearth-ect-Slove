//*Here I go out to sea again
//*The sunshine fills my hair
//*And dreams hang in the air
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mp make_pair
#define pb push_back

void input(){freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t;
cin>>t;
while(t--){
 ll n;
 cin>>n;
 ll a[n];
 for (int i = 0 ; i<n;i++){
     cin>>a[i];
 }
 sort(a , a+n);
 ll maxi = a[n-1];
 ll mini = a[0];
 ll sum = abs(maxi - mini) + abs(mini - mini) + abs(mini - maxi);
 cout<<sum<<"\n";

};

      return 0;
}
