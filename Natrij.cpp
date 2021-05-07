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
    int h1,h2,h3,m1,m2,m3,s1,s2,s3;
    scanf("%d:%d:%d",&h1,&m1,&s1);
    scanf("%d:%d:%d",&h2,&m2,&s2);
    s3=s2-s1;
    m3=m2-m1;
    h3=h2-h1;
    if(s3<0){
      s3=s3+60;
      --m3;
    }
    if(m3<0){
      m3=m3+60;
      --h3;
    }
    if(h3<0){
      h3=h3+24;
    }
    if(h3+m3+s3==0){
      h3=24;
    }
    printf("%02d:%02d:%02d\n",h3,m3,s3);
    return 0;
}
