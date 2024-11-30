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

int binexpm(int a, int b){
	int ans = 1;
	while(b){
		if(b&1){
			ans = (ans * a * 1LL) % (mod-1);
		}
		a = (a * 1LL * a) % (mod-1);
		b >>= 1;
	}
	return ans;	
}
int binexp(int a, int b){
	int ans = 1;
	while(b){
		if(b&1){
			ans = (ans * a * 1LL) % mod;
		}
		a = (a * 1LL * a) %mod;
		b >>= 1;
	}
	return ans;	
}
void ayan(){
int a,b,c;
cin>>a>>b>>c;

int t = binexpm(b,c);
int u = binexp(a,t);
cout<<u<<endl; 
}


int32_t main(){
 ios_base::sync_with_stdio(0);
    cin.tie(0);
int tt;
cin>>tt;

while(tt--){

	ayan();
}

return 0;
} 
