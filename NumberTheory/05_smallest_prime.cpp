#include<bits/stdc++.h>
#define endl "\n"
using namespace std;
#define int long long int
#define vi  vector<int>
#define vp  vector<pair<int,int>>
#define pb  push_back
#define all(v) v.begin(),v.end()
#define fl(i,a,n)  for(int i = (a); i < (n); i++)
#define ff  first
#define ss  second
#define pb push_back 
#define sz(x) (int)x.size()
#define mod 1000000007
/*--- debuger --- */    
void __print(int32_t x) {cerr << x;} void __print(long x) {cerr << x;} void __print(long long x) {cerr << x;} void __print(unsigned x) {cerr << x;} void __print(unsigned long x) {cerr << x;} void __print(unsigned long long x) {cerr << x;} void __print(float x) {cerr << x;} 
void __print(double x) {cerr << x;} void __print(long double x) {cerr << x;} void __print(char x) {cerr << '\'' << x << '\'';} void __print(const char *x) {cerr << '\"' << x << '\"';} void __print(const string &x) {cerr << '\"' << x << '\"';} void __print(bool x) {cerr << (x ? "true" : "false");}
template<typename T, typename V> void __print(const pair<T, V> &x) {cerr << '{'; __print(x.first); cerr << ','; __print(x.second); cerr << '}';}
template<typename T> void __print(const T &x) {int f = 0; cerr << '{'; for (auto &i : x) cerr << (f++ ? "," : ""), __print(i); cerr << "}";}
void _print() {cerr << "]\n";}
template <typename T, typename... V> void _print(T t, V... v) {__print(t); if (sizeof...(v)) cerr << ", "; _print(v...);}
 
#ifndef ONLINE_JUDGE
#define debug(x...) cerr << "[" << #x << "] = ["; _print(x)
#else
#define debug(x...)
#endif

const int N = 1e6+1;
int spf[N];
void Spf(int n)
{
	for(int i=0;i<n;i++){
		spf[i]=i; // initially marking all numbers as itself the spf 
	}
	
	
	for(int i=2;i*i<n;i++){
		if(spf[i]==i){  // if it's spf the multiples of it would have i as spf .
			for(int j=i*i;j<n;j+=i){ 
				if(spf[j]==j) // check whether if it's already marked
					spf[j] = i; 		 
			}
		}
	}
		
	
}

void solve(){
	int m;
	cin>>m;
	
	for(int i=2;i<=m;i++){
		cout<<spf[i]<<" "; // smallest prime factor of a number i  ;
	}
	cout<<endl;
	
	int k = m;
	vector<int> prime_factors;
	while(m>1){
		prime_factors.push_back(spf[m]);
		m/=spf[m];		
	}
	cout<<"Prime Factors of "<<k<< " : "; 
	for(auto it: prime_factors)
		cout<<it<<" "; 
	cout<<endl;

	
}
int32_t main(){
	
	Spf(N);
	solve();
	return 0;
}