/*
Problem - Given a number , print its Binary representation.
Example - Input: 17 
		  Output :10001
		  
Code Explanation:
The function f(int n) recursively calls itself with n/2 until n becomes 0. At each step, it appends a character ('0' or '1') to the string s.
The string concatenation operation s += '1' or s += '0' in C++ has a time complexity of O(k),
 where 
𝑘 is the current length of the string. This is because each concatenation operation potentially reallocates memory and copies the string content.

String Concatenation Complexity:

In C++, strings are dynamic, meaning that appending a character to a string isn't always a constant-time operation. 
When you append to a string, the following happens:
1. Ample Space: If there's enough space allocated, the character is added in O(1) time.
2. Insufficient Space: If there's not enough space, a new memory allocation happens, usually doubling the current size, followed by copying the existing content into the new space. This operation can take O(k) time, where k is the current length of the string.

Recursive Calls and String Appending:

In both of your functions, each recursive call results in a string being appended with a single character ('0' or '1'). 

Let’s analyze the time complexity step by step:

1. Number of Recursive Calls:
   - The recursion depth is determined by repeatedly dividing n by 2 until n becomes 0.
   - This means the recursion depth is O(log n), as it takes log n steps to reduce n to 0.

2. Cost of String Appending:
   - At each level of recursion, you're appending one character to the string. If the string length at the i-th step is k, the appending operation may take O(k) time.
   - Initially, the string is short, so appending takes O(1) time.
   - As the string grows, the time to append increases.

Total Time Complexity:

Let’s sum the time complexities of all append operations:

1. First Append: O(1) time for the first character.
2. Second Append: O(2) time for the next character (if reallocation happens).
3. Third Append: O(3) time, and so on, until the recursion depth reaches O(log n).

The total time complexity for all appending operations is:

T(n) = O(1) + O(2) + O(3) + … + O(log n)

This is the sum of the first O(log n) natural numbers:

T(n) = sum_{i=1}^{log n} O(i)

The sum of the first m natural numbers is given by the formula:

sum_{i=1}^{m} i = m(m+1)/2

For m = log n, this becomes:

T(n) = (log n)(log n + 1)/2

This simplifies to:

T(n) = O((log n)^2)

Conclusion:
The time complexity is O((log n)^2) because:
- There are O(log n) recursive calls.
- The cost of appending to the string grows linearly with each recursive call, leading to a cumulative sum of O((log n)^2).

*/
#include<bits/stdc++.h>
#define endl "\n"
using namespace std;

string f( int n){
	if(n==0) return "0";
	
	string s = f(n/2);
	if(n%2==1)
		s+='1';
	else{
		s+='0';
	}
	return s;
}
string s = "";
void bin_rep(int n){
	
	if(n==0)
		{
			
			return ;
		}
	
	if(n%2==1) // remainder 1 hai
		{
			s+='1';
			bin_rep(n/2);
		}
		
	else if(n%2==0){ 
		s+='0';
		bin_rep(n/2);
	}
	
	
 }

void ayan(){

int n;
cin>>n;

string s = f(n);

if(n>=1)
	cout<<s.substr(1,s.size())<<endl;
else 
	cout<<s<<endl;
	
	

}


int32_t main(){
 ios_base::sync_with_stdio(0);
    cin.tie(0);
int tt;
cin>>tt;

while(tt--){

	ayan();
}

return 0;
} 
