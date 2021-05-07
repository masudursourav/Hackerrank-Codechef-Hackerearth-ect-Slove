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
    char a[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    string s;
    int k;
    cin>>k;
    scanf("\n");
    getline(cin,s);
    for(int i=0;i<s.size();i++){
      if(s[i]>='a' && s[i]<='z'){
        int pos = (s[i]-'a')-k;
        if(pos<0){
          pos=pos+26;
        }
        cout<<a[pos];
      }
      else{
        cout<<s[i];
      }
    }
    cout<<"\n";
    return 0;
}
