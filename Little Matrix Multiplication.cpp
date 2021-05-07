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
    int a[2][2],b[2][2];
    cin>>a[0][0]>>a[0][1]>>a[1][0]>>a[1][1];
    cin>>b[0][0]>>b[0][1]>>b[1][0]>>b[1][1];
    cout<<(a[0][0]*b[0][0])+(a[0][1]*b[1][0])<<" ";
    cout<<(a[0][0]*b[0][1])+(a[0][1]*b[1][1])<<"\n";
    cout<<(a[1][0]*b[0][0])+(a[1][1]*b[1][0])<<" ";
    cout<<(a[1][0]*b[0][1])+(a[1][1]*b[1][1])<<"\n";
    return 0;
}
