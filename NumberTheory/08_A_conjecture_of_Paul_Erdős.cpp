	#include<bits/stdc++.h>
	#define endl "\n"
	using namespace std;
	#define int long long int

	// Total T.C  - // Nloglog(N) + N(3/4) + N + t;
		
	const int n = 10000007;
	bool sieve[n];
	int ans[n];

	int32_t main(){
	 ios_base::sync_with_stdio(0);
	    cin.tie(0);


		memset(sieve,0,sizeof(sieve));
		for(int i=2;i*i<n;i++){	 	// NLoglogN;
			if(!sieve[i]){
					for(int j=i*i;j<n;j+=i){
							sieve[j]=1;
							
				}
			}
		}	
		for(int x=1;x<=5000;x++){				// n^(1/2) * n^(1/4); 
			for(int y=1;y<=90;y++){				// i.e = n^(3/4);
				int res = x*x + y*y*y*y;	
					
					if(res>=n) break;
					
					if(!sieve[res])
							ans[res]=1;
						
			}
		}
		// prefix sum;
												
													
		for(int i=1;i<n;i++){
			ans[i] = ans[i] +ans[i-1];
		}	



	int tt;
	cin>>tt;

	while(tt--){
		int m;
		cin>>m;
		cout<<ans[m]<<endl;
		
	}

	return 0;
	} 
