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
    set<int>s;
    cin>>n;
    for(int i=0;i<n;i++){
      int in;
      cin>>in;
      s.insert(in);
    }
    cout<<s.size()-1<<"\n";

    return 0;
}
