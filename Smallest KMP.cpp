//*Here I go out to sea again
//*The sunshine fills my hair
//*And dreams hang in the air

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mp make_pair
#define pb push_back
void input(){freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);}

int main() {
	ios_base::sync_with_stdio(false);
	 cin.tie(NULL);
	ll t;
	cin>>t;
	while(t--)
	{
		string s,q;
		cin>>s>>q;
		ll a[27];
    memset(a,0,sizeof(a));
	  ll b[27];
		for(int i=0;i<s.size();i++)
		{
			a[s[i]-'a']++;
		}
		for(int i=0;i<q.size();i++)
		{
			a[q[i]-'a']--;
		}
		for(int i=0;i<26;i++){
		b[i]=a[i];
    }
		string ans;
		for(int i=0;i<=(q[0]-'a');i++)
		{
			while(a[i]>0)
			{
				ans+=(char)(i+'a');
				a[i]--;
			}
		}
		ans+=q;
		for(int i=0;i<26;i++)
		{
			while(a[i]>0)
			{
				ans+=(char)(i+'a');
				a[i]--;
			}
		}
		string ans2;
		for(int i=0;i<q[0]-'a';i++)
		{
			while(b[i]!=0)
			{
				ans2+=(char)(i+'a');
				b[i]--;
			}
		}
		ans2+=q;
		for(int i=0;i<26;i++)
		{
			while(b[i]!=0)
			{
				ans2+=(char)(i+'a');
				b[i]--;
			}
		}
		cout<<min(ans,ans2)<<"\n";
	}
    return 0;
}
