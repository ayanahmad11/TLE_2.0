#include<bits/stdc++.h>
using namespace std;

// T.C - O(sqrt(n));

vector<int> solve(int n){
	vector<int> factors;
	
	for(int d=2;d*d<=n;d++){
		while(n%d==0)
		{
			factors.push_back(d);
			n=n/d;
		}	
		
	}
	if(n>1)
		factors.push_back(n);
	
	return factors;
	
}
int main(){

int n;
cin>>n;

for(auto x:solve(n))
	cout<<x<<" ";
return 0;
	
}