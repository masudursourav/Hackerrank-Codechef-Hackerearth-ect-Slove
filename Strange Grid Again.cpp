#include <bits/stdc++.h>
using namespace std;
int main()
{
  long long int row,col,result;
     cin>>row>>col;
     if(row%2==0){
       result = (row-2)*5+1+(col-1)*2;
       cout<<result<<"\n";
     }
     else{
       result = (row-1)*5+(col-1)*2;
       cout<<result<<"\n";
     }

   return 0;
 }
