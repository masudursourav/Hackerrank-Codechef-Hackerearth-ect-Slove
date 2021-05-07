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
    int a,b,c;
    int c5=0,c7=0;
    cin>>a;
    if(a==5){
      ++c5;
    }
    else if(a==7){
      ++c7;
    }
    cin>>b;
    if(b==5){
      ++c5;
    }
    else if(b==7){
      ++c7;
    }
    cin>>c;
    if(c==5){
      ++c5;
    }
    else if(c==7){
      ++c7;
    }
    if(c5==2 && c7==1){
      cout<<"YES"<<"\n";
    }
    else{
      cout<<"NO"<<"\n";
    }
    return 0;
}
