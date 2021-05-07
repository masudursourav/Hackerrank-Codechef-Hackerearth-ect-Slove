//*Here I go out to sea again
//*The sunshine fills my hair
//*And dreams hang in the air

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mp make_pair
#define pb push_back

int main(){
  vector<int>v[27];
	int n;
  cin>>n;
  string s;
	cin>>s;
	for(int i=0;i<s.size();i++){
		v[s[i]-'a'].pb(i);
	}

  int q;
  cin>>q;
  while(q--)
  {
		string qu;
		cin>>qu;
    int ch=1;
		int posf=-1, posr=-1;
		for(int i=0;i<qu.size();i++)
		{
			bool find=false;
			int pos=qu[i]-'a';
			if(v[pos].size())
			{
				auto in=upper_bound(v[pos].begin(),v[pos].end(),posr);
				int indx=in-v[pos].begin();
				if (indx==v[pos].size())
				{
					ch=0;
					break;
				}
				posr=v[pos][indx];

				if (posr>posf)
					posf=posr;
				else
				{
					ch=0;
					break;
				}
			}
			else
			{
				ch=0;
				break;
			}
		}
		if (ch)
			cout << "YES\n";
		else
			cout << "NO\n";
  }
    return 0;
}
