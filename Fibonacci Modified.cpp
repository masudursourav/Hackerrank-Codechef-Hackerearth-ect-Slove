//*Here I go out to sea again
//*The sunshine fills my hair
//*And dreams hang in the air
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mp make_pair
#define pb push_back

void input(){freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);}
unsigned long long int powl(unsigned long long int k){
  return (k*k);
}
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  unsigned long long int t1,t2,c,n;
  cin>>t1>>t2>>n;
  for(int i=0;i<n-2;i++){
    c=t1+powl(t2);
    //cout<<"c"<<" "<<c<<"\n";
    t1=t2;
    //cout<<"t1"<<" "<<t1<<"\n";
    t2=c;
    //cout<<"t2"<<" "<<t2<<"\n";
  }
  cout<<c<<"\n";

      return 0;
}
