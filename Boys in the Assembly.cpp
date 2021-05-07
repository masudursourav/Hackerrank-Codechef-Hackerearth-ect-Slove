//*Here I go out to sea again
//*The sunshine fills my hair
//*And dreams hang in the air

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mp make_pair
#define pb push_back
void input(){freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);}

int main()
{
   ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    queue<ll>q;
    ll n,k;
    cin>>n>>k;
    for(int i=0;i<n;i++){
      ll in;
      cin>>in;
      q.push(in);
    }
    ll s;
     for(int i=0;i<k;i++){
       s=q.front();
       q.pop();
       q.push(s);
     }
     cout<<q.front()<<" "<<q.back()<<"\n";
    return 0;
}
