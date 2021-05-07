//*Here I go out to sea again
//*The sunshine fills my hair
//*And dreams hang in the air

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mp make_pair
#define pb push_back
#define mod 1000000007
void input(){freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);}

 ll power(ll a, ll b)	{
	if(b == 0)
		return 1;
	ll ans = power(a, b/2)%mod;
	ans = (ans*ans)%mod;
	if(b%2!=0)
		ans = (ans*a)%mod;
	return ans;
}
  ll divide(ll a, ll b)	{
	return (a%mod*(power(b, mod-2)%mod))%mod;
}

ll comb(ll n, ll r)	{
	ll answer = 1;
	ll k = min(r, n-r);
	for(int i=0;i<k;i++)	{
		answer = (answer%mod*(n-i)%mod)%mod;
		answer = divide(answer, i+1);
	}
	return answer%mod;
}

void subMain()	{
	ll n;
	cin >> n;
	ll a[n], ans;
	for(int i=0;i<n;i++)
		cin >> a[i];
	ll max = 0, maxcount = 0;
	for(int i=0;i<n;i++)
		if(max < a[i])
			max = a[i];
	for(int i=0;i<n;i++)
		if(max == a[i])
			maxcount++;
	if(n == 1)	{
		cout << 2;
		return;
	}
	if(maxcount%2!=0)
		ans = power(2, n)%mod;
	else
		ans = power(2, n)%mod-((power(2, n-maxcount)%mod)*comb(maxcount, maxcount/2)%mod)%mod;
	if(ans < 0)
		ans = (ans+mod)%mod;
	cout << ans%mod;
}

int main()	{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	ll t;
	cin >> t;
	while(t--)	{
		subMain();
		cout << "\n";
	}
	return 0;
}
