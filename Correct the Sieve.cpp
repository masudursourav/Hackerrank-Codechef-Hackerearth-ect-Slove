#include <bits/stdc++.h>
using namespace std;

bool isPrime[1000001] ;
void sieve() {
	memset(isPrime,true,sizeof(isPrime));
  isPrime[0]=isPrime[1]=false;
	for( int i = 2 ; i*i < 1000001; i ++ ) {
    if(isPrime[i]==true){
		for( int j = i * i ; j <1000001 ; j += i ) {
			isPrime[j]= false ;
		}
	}
}
}
int main() {
	sieve() ;
	int N ;
	scanf("%d",&N) ;
	int num ;
	for( int i = 0 ; i < N ; i ++ ) {
		scanf("%d",&num) ;
		if(isPrime[num]) {
			printf("%d is a prime number.\n",num);
		}
		else {
			printf("%d is not a prime number.\n",num);
		}
	}
	return 0 ;
}
