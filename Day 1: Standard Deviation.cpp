//*Here I go out to sea again
//*The sunshine fills my hair
//*And dreams hang in the air

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mp make_pair
#define pb push_back
double po(double k,double m){
  return (k-m)*(k-m);
}

int main()
{
   ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    double a[10000];
    cin>>n;
    double sum=0;
    for(int i=0;i<n;i++){
      cin>>a[i];
      sum+=a[i];
    }
    double mid=(double)sum/n;
    sum=0;
    for(int i=0;i<n;i++){
      sum+=po(a[i],mid);
    }
    printf("%.1lf\n",sqrt(sum/n));
    return 0;
}
