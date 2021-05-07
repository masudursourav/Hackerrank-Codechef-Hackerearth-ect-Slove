#include <bits/stdc++.h>
using namespace std;
int main()
{
     long long int n,t;
     cin>>t;
     while(t--){
         cin>>n;
         if(n%7==0 || n%7==1){
             cout<<"Second"<<"\n";
         }
         else{
             cout<<"First"<<"\n";
         }
     }
     return 0;
}
