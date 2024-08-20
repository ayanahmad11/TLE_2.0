/*
Problem : https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1

Given an array of non-negative integers, 
and a value sum,determine if there is a subset
of the given set with sum equal to given sum. 

Input:
N = 6
arr[] = {3, 34, 4, 12, 5, 2}
sum = 9
Output: 1 
Explanation: Here there exists a subset with
sum = 9, 4+3+2 = 9.



*/

#include<bits/stdc++.h>
using namespace std;

class Solution {
    bool helper(vector<int>& arr, int n, int sum) {
  
    // Base Cases
    if (sum == 0)
        return true;
    if (n == 0)
        return false;

    // If last element is greater than sum,
    // then ignore it
    if (arr[n - 1] > sum)
        return helper(arr, n - 1, sum);

    /* else, check if sum can be obtained by any 
of the following:
      (a) including the last element
      (b) excluding the last element   */
    return helper(arr, n - 1, sum)
           || helper(arr, n - 1, sum - arr[n - 1]);
    }
public:
    bool isSubsetSum(vector<int> arr, int sum) {
        // If there's at least one subset with the desired sum, return true
      int n = arr.size();
      return helper(arr,n,sum);
      
    }
};

int main(){
	int tt;
	cin>>tt;
	while(tt--){
		int N,sum;
		cin>>N;
		vector<int> arr(N);
		for(int i=0;i<N;i++){
			cin>>arr[i];
		}
		cin>>sum;
		Solution ob;
		cout<<ob.isSubsetSum(arr,sum)<<endl;
	}
}