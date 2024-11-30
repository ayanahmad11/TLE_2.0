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

int __gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
const int N = 1e7+7;
vector<int> st;
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
	for(int i=2;i<n;i++){
		if(sieve[i]==1)
		st.pb(i);
	}
}
void ayan(){
int d;
cin>>d;


int a = 1;

int it = *lower_bound(st.begin(),st.end(),a+d) ;

// cout<<it<<endl;

int it1  = *lower_bound(st.begin(),st.end(),it+d) ;
// cout<<it1<<endl;
cout<<it*it1<<endl;


}


int32_t main(){
 ios_base::sync_with_stdio(0);
    cin.tie(0);
Sieve(1e7+7);
int tt;
cin>>tt;

while(tt--){

	ayan();
}

return 0;
} 
