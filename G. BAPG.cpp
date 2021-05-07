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
  ll t;
	cin>>t;
	while(t--)
	{
    ll n,m;
    vector<ll>v;
		cin>>n>>m;
		for(int i=0;i<m;i++)
		{
      ll in;
			cin>>in;
			v.pb(in);
		}
		sort(v.rbegin(),v.rend());
		ll sum=0;
		if(n>m)
		n=m;
		for(int i=0;i<n;i++)
		{
			sum+=v[i];
		}
		cout<<sum<<endl;
		v.clear();
	}
	return 0;
}
