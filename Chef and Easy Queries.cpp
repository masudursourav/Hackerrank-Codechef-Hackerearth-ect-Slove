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
    ll t;
cin>>t;
while(t--){
    ll n,k,count=0;
    cin>>n>>k;
    ll q[n];
    for(int i=0; i<n; i++)
    cin>>q[i];
    ll i;
    for(i=0; i<n; i++){
        if(q[i]>=k)
        {
            count++;
            q[i+1]+=(q[i]-k);
        }
        if(q[i]<k)
        break;
    }
    if(i==n)
    count+=((q[n-1]-k)/k);
    cout<<count+1<<endl;
}

    return 0;
}
