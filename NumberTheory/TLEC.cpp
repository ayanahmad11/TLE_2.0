#include<bits/stdc++.h>
#include <bitset>
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

string int_to_binary(int num, int bit_length) {
    string binary;
    for (int i = bit_length - 1; i >= 0; i--) {
        binary += ((num >> i) & 1) ? '1' : '0';
    }
    return binary;
}


void ayan(){
int n;
cin>>n;

  int l;
cin>>l;
 
vi v(n);
fl(i,0,n)
cin>>v[i];
string s="";
for(int i=0;i<l;i++){
	int cnt0=0, cnt1=0;
	for(int j=0;j<n;j++){
		// int d = (1<<i);
		// debug(d);
		int a = (v[j] & (1<<i));
		// debug(a)
		if(a==0)
			cnt0++;
		else cnt1++;
		
	}
	(cnt0>cnt1 ? (s+='0'):s+='1');

	// cout<<'hi'<<endl;
}

reverse(all(s));
// debug(s);
 int num = stoll(s, nullptr, 2); 
 cout<<num<<endl;
// int ans=0;
// for(int i=0;i<n;i++){
 
	
// 	string b = int_to_binary(v[i], l); 
// 	debug(b);
// 	for(int i=0;i<s.size();i++){
// 		if(s[i]!=b[i]){
// 			ans+=;
// 		}
// 	}
// 	// for(int i=0;i<(s.size),31);i++){
		
// 	// }
// }
// cout<<ans<<endl;











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
