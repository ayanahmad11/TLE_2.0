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

void ayan(){

int n,m,q;
cin>>n>>m>>q;

int g = __gcd(n,m);

int a = n/g; 

int b = m/g;

// debug(a);
// debug(b);
  
// debug(g);

while(q--){
	int x1,y1,x2,y2;
	cin>>x1>>y1>>x2>>y2;
	 
	 y1--;
	 y2--;
	 int c,d; 
	if(x1 == 1)
			c = (y1) / a;
		
	else  c = y1 / b;
	
	if(x2 == 1)
		 d = y2/ a;
	else 
		d = y2 / b;
	
	// debug(c);
	// debug(d);
	 if(c==d)
	 	cout<<"yes"<<endl;
	 else cout<<"no"<<endl;
}



}


int32_t main(){
 ios_base::sync_with_stdio(0);
    cin.tie(0);
int tt=1;
// cin>>tt;

while(tt--){

	ayan();
}

return 0;
} 
