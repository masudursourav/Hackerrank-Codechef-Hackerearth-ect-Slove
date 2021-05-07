#include <bits/stdc++.h>
using namespace std;
int main()
{
  long long int n,res;
  scanf ( "%lld" , & n);

if (n>=1)

{

  if (n%2)
   res=(1 + n)/2*n;

  else res=n/2*(1 + n);
}
else
{

  if (n%2)
   res=(1+n)/2*(abs(n)+2);

  else
  res=(abs(n)+2)/2*(1 + n);

}
cout<<res<<"\n";
  return 0;
}
