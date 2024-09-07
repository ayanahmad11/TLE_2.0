#include<bits/stdc++.h>
#define endl "\n"
using namespace std;
#define int long long int


void helper(int row,int col,int maxrow,int maxcol,vector<vector<int>> &a,vector<vector<int>> &b){
	if(row>=maxrow)
		return;
	if(col == maxcol-1 ){
		cout<< a[row][col] + b[row][col]<<endl;	
		helper(row+1,0,maxrow,maxcol,a,b);
		return;
	}
	cout<<a[row][col]+b[row][col]<<" ";
	helper(row,col+1,maxrow,maxcol,a,b);
	
}

void ayan(){

int r,c;
cin>>r>>c;

vector<vector<int>> a(r,vector<int> (c)),b(r,vector<int>(c));
fl(i,0,r){
	fl(j,0,c)
		cin>>a[i][j];
		
}
fl(i,0,r){
	fl(j,0,c)
		cin>>b[i][j];
		
}

helper(0,0,r,c,a,b);

}


int32_t main(){
 ios_base::sync_with_stdio(0);
    cin.tie(0);

	ayan();


return 0;
} 
