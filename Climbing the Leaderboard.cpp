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
    stack<ll>s;
    ll n;
    cin>>n;
    for(int i=0;i<n;i++){
      ll in;
      cin>>in;
      if(s.empty() || s.top()!=in){
        s.push(in);
      }
    }
    ll m;
    cin>> m;
    for(int i=0;i<m;i++){
      ll in;
      cin>>in;
      while(!s.empty() && in>=s.top()){
        s.pop();
      }
      cout<<(s.size())+1<<"\n";
    }
    return 0;
}
