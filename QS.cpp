#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mp make_pair
#define pb push_back
void input(){freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);}
ll A[10000];
ll partition (ll A[],ll start ,ll end) {
    int i = start + 1;
    int piv = A[start] ;
    for(int j =start + 1; j <= end ; j++ )  {
          if ( A[ j ] < piv) {
                 swap (A[ i ],A [ j ]);
            i += 1;
        }
   }
   swap ( A[ start ] ,A[ i-1 ] ) ;
   return i-1;
}

void quick_sort ( ll A[ ] ,ll start , ll end ) {
   if( start < end ) {
         ll piv_pos = partition (A,start , end ) ;
         quick_sort (A,start , piv_pos -1);
         quick_sort ( A,piv_pos +1 , end) ;
   }
}

int main()
{
    ll n;
    cin>>n;
    for(int i=0;i<n;i++){
      cin>>A[i];
    }
    quick_sort(A,0,n-1);
    cout<<"Sorted : "<<"\n";
    for(int i=0;i<n;i++){
      cout<<A[i]<<" ";
    }
   cout<<"\n";
    return 0;
}
