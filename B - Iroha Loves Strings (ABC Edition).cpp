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
    int n,l;
    cin>>n>>l;
    string s[n];
    for(int i=0;i<n;i++){
      cin>>s[i];
    }
    sort(s,s+n);
    for(int i=0;i<n;i++){
      cout<<s[i];
    }
    cout<<"\n";

    return 0;
}
