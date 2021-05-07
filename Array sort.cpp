#include<bits/stdc++.h>
using namespace std;

#define ll long long
int main()
{
	ll t,n,k,x,a,p=0,ca=0;
	cin>>t;
	while(t--)
	{
		p=0;
		cin>>n>>k>>x;
		ll f=0;
		while(n--)
		{
			cin>>a;
			if(p==0)
				p=a;
			else
			{
				if(a>=p)
				{
					p=a;
				}
				else
				{
					ll v=p-a,nd;
					if(v%x==0)
						nd=v/x;
					else
						nd=(v/x)+1;
					if(nd<=k)
					{
						k=k-nd;
						p=a+(x*nd);
					}
					else
					{
						f=1;
					}
				}
			}
		}
		if(!f)
			cout<<"Case "<<++ca<<": YES"<<endl;
		else
			cout<<"Case "<<++ca<<": NO"<<endl;
	}
}
