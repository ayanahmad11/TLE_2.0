#include<bits/stdc++.h>
#define endl "\n"
using namespace std;

int cnt=0;
void  print(int n){
	cnt++;
	if(n==1)
	 {
		return ;
	}
	
	if(n&1) { 
	print(3*n+1);
}
	
	if(n%2==0) {
		print(n/2);
		
	}
	
}
void ayan(){

int n;
cin>>n;

print(n);
cout<<cnt<<endl;


}


int32_t main(){
 ios_base::sync_with_stdio(0);
    cin.tie(0);


	ayan();


return 0;
} 
