#include<bits/stdc++.h>
#define endl "\n"
#define int long long int
using namespace std;
// T.C - O(sqrt(n));
// program to calculate all the divisors .
void solve(){
int n;
cin>>n;
vector<int> v;
for(int i=1;i*i<=n;i++){
	if(n%i==0)
	{
		v.push_back(i);
		if(n/i!=i)
			v.push_back(n/i);
		
	}
	
}
for(auto x:v)
cout<<x<<" ";

}


int32_t main(){

ios_base::sync_with_stdio(0);
cin.tie(0);

solve();

return 0;
} 
