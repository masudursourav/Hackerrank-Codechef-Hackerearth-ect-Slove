//*Here I go out to sea again
//*The sunshine fills my hair
//*And dreams hang in the air

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mp make_pair
#define pb push_back
void input(){freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);}

  ll findpos(ll sum)	{
	long double ans= sqrtl(1ll+4*(sum));
  cout<<ans<<"\n";
	ans=ans-1.0;
  cout<<ans<<"\n";
	ans=ans/2.0;
	ll finalAns=ans;
  cout<<finalAns<<"\n";
	return finalAns;
}

void submain(){
	ll n;
	cin>>n;
	ll sum=(n)*(n+1)/2;
	if(sum%2!=0){
		cout<<0<<"\n";
		return;
	}
	ll x=findpos(sum);
	ll subsum=x*(x+1)/2;
	if(sum/2==subsum){
	ll result=(x*(x-1ul))/2l+((n-x)*(n-x-1ul))/2l+(n-x);
		cout<<result<<"\n";
	     }
	else{
		cout<<n-x<<"\n";
  }
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	 ll t;
	 cin>>t;
	 while(t--){
		submain();
	 }
	return 0;
}
