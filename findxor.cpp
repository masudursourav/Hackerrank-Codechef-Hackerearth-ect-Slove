//*Here I go out to sea again
//*The sunshine fills my hair
//*And dreams hang in the air

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mp make_pair
#define pb push_back
void input(){freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);}
int subMain()	{
	ll n, answer = 0;
	cin >> n;
	vector<ll>xorsum;
	long long x;
	for(long long i=1;i<=20;i++)	{
		cout << 1 << " " << (1ul<<i) << "\n";
		cout.flush();
		cin >> x;
		xorsum.push_back(x);
	}
	reverse(xorsum.begin(), xorsum.end());
	long long sum = xorsum[0]-n*(1ul<<20);
	for(long long i=1;i<xorsum.size();i++)	{
		if(xorsum[i] >= sum)	{
			xorsum[i] = ((n-(xorsum[i]-sum)/(1ul<<(xorsum.size()-i)))/2);
		}
		else
			xorsum[i] = (n+(sum-xorsum[i])/(1ul<<(xorsum.size()-i)))/2;
	}
	for(int i=1;i<xorsum.size();i++)
		if(xorsum[i]%2 != 0)
			answer+=1ul<<(xorsum.size()-i);
	if(sum%2!=0)
		answer++;
	cout << 2 << " " << answer <<"\n";
	cout.flush();
	int result;
	cin >> result;
	return result;
}

int main()	{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t = 1;
	cin >> t;
	while(t--)	{
		if(!subMain())
			break;
		cout<<"\n";
		cout.flush();
	}
	return 0;
}
