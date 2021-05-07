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
    int c=0;
    for(int i=1;;i++){
      int temp=i;
      int ch=0;
      while(temp>0){
      if(temp%2==1){
        ++ch;
        if(ch==2){
          break;
        }
      }
      else{
        ch=0;
      }
      temp=temp/2;
      }
      if(ch<2){
        ++c;
        if(c==n){
          cout<<i<<"\n";
          break;
        }
      }
    }

    return 0;
}
