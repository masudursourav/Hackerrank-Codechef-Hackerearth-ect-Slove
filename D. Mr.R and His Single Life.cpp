//*Here I go out to sea again
//*The sunshine fills my hair
//*And dreams hang in the air

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mp make_pair
#define pb push_back
ll convertBinaryToDecimal(long long n)
{
    ll decimalNumber = 0, i = 0, remainder;
    while (n!=0)
    {
        remainder = n%10;
        n /= 10;
        decimalNumber += remainder*pow(2,i);
        ++i;
    }
    return decimalNumber;
}


int main()
{
   ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
      ll n,d;
      cin>>n;
      d=convertBinaryToDecimal(n);
      for(ll i=d+1;;i++){
        if(__builtin_popcount(i)==__builtin_popcount(d)){
          cout<<i<<"\n";
          break;
        }
      }

    }

    return 0;
}
