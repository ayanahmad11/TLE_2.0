
#include <bits/stdc++.h>
using ll =long long ;
using namespace std;

const int N = 1e6+1;
bool sieve[N];
void Sieve(int n)
{
	// for(int i=0;i<n;i++){
	// 	sieve[i]=1; // marking all numbers as Prime;		
	// }
	memset(sieve,1,sizeof(sieve)); //  similar as above 
	
	for(int i=2;i*i<n;i++){
		if(sieve[i]){ // if i is a prime then marking all its multiple as non prime.
			for(int j=i*i;j<n;j+=i){ // starting with square of i bcoz 
				sieve[j] = 0; 		// 
			}
		}
	}
}
void solve(){
	int m;
	cin>>m;
	
	for(int i=2;i<=m;i++){
		if(sieve[i])
			cout<<i<<" ";
	}
}
int main(){
	
	Sieve(N);
	int tt;
	cin>>tt;
	while(tt--){
		solve();
	}
	return 0;
}