#include<bits/stdc++.h>
#define endl "\n"
using namespace std;


int f(int a,int b){
	if(b==0)
		return 1;
	
	int ans = f(a,b/2);
		ans*=ans;
	
	if(b%2)
	ans*=a;
	
	return ans;
	 
	
}

int32_t main(){

ios_base::sync_with_stdio(0);
cin.tie(0);

int a,b;
cin>>a>>b;

cout<<f(a,b)<<endl;


return 0;
} 
