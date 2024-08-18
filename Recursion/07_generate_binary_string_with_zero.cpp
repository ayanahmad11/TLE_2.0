/*
3211. Generate Binary Strings Without Adjacent Zeros {Leetcode}

You are given a positive integer n.
A binary string x is valid if all substrings of x of length 2 contain at least one "1".
Return all valid strings with length n, in any order.

Example 1:
Input: n = 3
Output: ["010","011","101","110","111"]

Explanation:
The valid strings of length 3 are: "010", "011", "101", "110", and "111".

*/
#include<bits/stdc++.h>
#define endl "\n"
using namespace std;


void helper(int n,vector<string>&ans,string s){
	if(n==0)
	{
		ans.push_back(s);
		return ;
	}
	if(s.back()=='1' || s.size()==0 ) 
	{
		helper(n-1,ans,s+'1');
		helper(n-1,ans,s+'0');
	}
	else{
		helper(n-1,ans,s+'1');
	}
	
}
vector<string> validStrings(int n){
	
	string ans="";
	helper(n,ans,"");
	for(auto x:ans)
		cout<<x<<" ";
	cout<<endl;

}


int32_t main(){

ios_base::sync_with_stdio(0); cin.tie(0);

int n;
cin>>n;
validStrings(n);



return 0;
} 
