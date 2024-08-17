/*
Problem - To find the factorial of a number

Ex-1 => 3! = 3*2*1 = 6
Ex-2 => 5! = 5*4*3*2*1 = 120   


*/

// ** Look for the subproblem 

#include <bits/stdc++.h>
using ll =long long ;
using namespace std;

ll fact(ll n){
 if(n==0)
 	return 1;
 
return fact(n-1)*n;

	
}
int main(){
	ll n;
	cin>>n;
	cout<<fact(n)<<endl;
	return 0;
}
