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
    int n,a[100],q1,q2,q3;
    cin>>n;
    for(int i=0;i<n;i++){
      cin>>a[i];
    }
    sort(a,a+n);
    if(n%2==0){
      q2=(a[(int)(n/2)]+a[(int)(n/2)-1])/2;
    }
    else{
        q2=a[(int)(n/2)];
    }
    int pos=(int)(n/2);
    if(pos%2==0){
      q1=(a[(int)(pos/2)]+a[(int)(pos/2)-1])/2;
    }
    else{
      q1=a[(int)pos/2];
    }
    int pos1=pos+(int)(pos/2);
    if(pos%2==0 && n%2==0){
      q3=(a[pos1]+a[pos1-1])/2;
    }
    else if(pos%2==0){
      q3=(a[pos1]+a[pos1+1])/2;
    }
    else{
      q3=a[pos1];
    }
    cout<<q1<<"\n"<<q2<<"\n"<<q3<<"\n";
    return 0;
}
