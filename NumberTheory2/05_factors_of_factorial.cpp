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

//Time.Complexity - O(n*Sqrt(n))
                    // O(1000*10) = O(10000) <  1e6

void ayan(){
   int n;
   cin>>n;
   map<int,int> mp;
   for(int j=1;j<=n;j++){
   		int copynum = j;
      // while(copynum%2==0){
      //   mp[2]++;
      //   copynum/=2;
      // }
      // for(int i=3;i*i<=copynum;i+=2){
      //     while(copynum%i==0){
      //       mp[i]++;
      //       copynum/=i;
      //     }
      // }
      // if(copynum>2)
      //   mp[copynum]++;
      
	   	for(int i=2;i*i<=copynum;i++){
		   	while(copynum%i==0)
		   		{
		   				mp[i]++;
		   				copynum /= i;
		   		}
	   		
	   }
      if(copynum>1)
         {
           mp[copynum]++;
         }
   }
   
   debug(mp);
   int ans=1LL;
   
   for(auto x:mp){
    ans  = (ans%mod *(x.ss + 1LL)%mod)%mod;
   }
   cout<<ans<<endl;
   
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
