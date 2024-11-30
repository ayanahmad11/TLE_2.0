#include <bits/stdc++.h>
using namespace std;
#define mp make_pair


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

pair<int, int> s[11];
int d[11];
void get() {
	int n, l = 0, i, c;
	cin >> n;
	for (i = 2; i * i <= n; i++) {
		if (n % i == 0) {
			c = 0;
			while (n % i == 0) c++, n /= i;
			s[++l] = make_pair(c, i);
		}
	}
	if (n != 1) s[++l] = make_pair(1, n);
	sort(s + 1, s + l + 1), d[l + 1] = 1;
	
	for(int i=0;i<l+1;i++) cout<<s[i].first <<" "<<s[i].second<<endl;
		
	cout<<" ^ debug s" <<endl;
	
	for (i = l; i >= 1; i--) d[i] = d[i + 1] * s[i].second;
	
	for(int i=0;i<l+1;i++) {cout<<d[i]<<" ";}
		cout<<endl;
	int ans = 0;
	for (i = 1; i <= l; i++) if (s[i].first != s[i - 1].first) { ans += d[i] * ( s[i].first - s[i - 1].first); cout<<"ans"<<ans<<" "; }
		cout<<endl;
	cout << ans << endl;
}
signed main() {
	ios::sync_with_stdio(0);
	cin.tie(0);	
	int T;
	cin >> T;
	while (T--) get();
	return 0;
}
