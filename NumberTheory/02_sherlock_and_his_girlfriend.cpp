#include<bits/stdc++.h>
#define endl "\n"
using namespace std;
#define int long long int

  
void SieveOfEratosthenes(int n)
{
  
   //  // Create a boolean array "prime[0..n]" and initialize
    // all entries it as true. A value in prime[i] will
    // finally be false if i is Not a prime, else true.
  	vector<int> prime(1e6,1);
    // memset(prime, 1, sizeof(prime));
 	 prime[0] = prime[1] = 2;
    for (int p = 2; p * p <= 1000000; p++) {
        // If prime[p] is not changed, then it is a prime
        if (prime[p] == 1) {
            // Update all multiples of p greater than or
            // equal to the square of it numbers which are
            // multiple of p and are less than p^2 are
            // already been marked.
            for (int i = p * p; i <= 1000000; i += p)
                prime[i] = 2;
        }
    }
 
    // Print all prime numbers
    for (int p = 2; p <= n+1; p++)
        {cout<<prime[p]<<" ";}
  
}
 
void ayan(){

	int n;
	cin>>n;
	if(n==1)
	{
		cout<<1<<endl;
		cout<<1<<endl;
		return ;
	}
	if(n==2){
		cout<<1<<endl;
		cout<<1<<" "<<1<<endl;
		return ;
	}
	
    cout<<2<<endl;
    
	SieveOfEratosthenes(n);


	}


int32_t main(){
 ios_base::sync_with_stdio(0);
    cin.tie(0);
int tt=1;

while(tt--){

	ayan();
}

return 0;
} 
