#include<bits/stdc++.h>
#include<set>
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

set<int> s;

void Sieve(int n)
{	
	
	bool sieve[n];
	memset(sieve,true,sizeof(sieve));
	
	sieve[0]=sieve[1]=0;
	
	for(int i=2;i*i<n;i++){
		if(sieve[i]){ // if i is a prime then marking all its multiple as prime.
			for(int j=i*i;j<n;j+=i){ // starting with square of i bcoz 
				sieve[j] = 0; 		// 
			}
		}
	}
	for(int p=2;p<=n;p++){
		if(sieve[p])
			s.insert(p);
	}
	
}

void ayan(){

int n,m;
cin>>n>>m;

vector<vector<int>> v(n,vector<int> (m));

fl(i,0,n){
	fl(j,0,m){
		cin>>v[i][j];		
	}
}

vector<int> row(n,0),column(m,0);

fl(i,0,n){
	int c1=0;
	fl(j,0,m){
		int prime = *s.lower_bound(v[i][j]);
      // cout<<prime<<"\n";
      row[i]+=prime-v[i][j];
      column[j]+=prime-v[i][j];
		
	}
}

int mn=INT_MAX;
  for(auto i:row)mn=min(mn,i);
  for(auto i:column)mn=min(mn,i);
  cout<<mn<<"\n";

}


int32_t main(){
 ios_base::sync_with_stdio(0);
    cin.tie(0);

Sieve(1e5+10);
int tt=1;
// cin>>tt;

while(tt--){

	ayan();
}

return 0;
} 
