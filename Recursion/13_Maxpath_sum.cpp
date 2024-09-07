#include <bits/stdc++.h>
using ll =long long ;
using namespace std;

int helper(int r,int c,int n,int m,vector<vector<int>> &v){
	if(r==n-1 && c ==m-1)
	return v[r][c];
	if(r<n-1){
		if(c<m-1)
				return max(helper(r,c+1,n,m,v)+v[r][c],helper(r+1,c,n,m,v)+v[r][c]);
		else
			return helper(r+1,c,n,m,v)+v[r][c];
	}
	else{
		return helper(r,c+1,n,m,v)+v[r][c];
	}
}
void ayan(){
	int n,m;
	cin>>n>>m;
	vector<vector<int>> v(n,vector<int>(m));
		for(int i=0;i<n;i++){
			
			for(int j=0;j<m;j++){
			
				cin>>v[i][j];
		}
	}
	
	cout<<helper(0,0,n,m,v)<<endl;
	
	
}
int main(){
	ayan();
	return 0;
}