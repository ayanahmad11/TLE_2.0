/*
Problem link : https://leetcode.com/problems/subsets-ii/

Subsets II:

Given an integer array nums that may contain duplicates, 
return all possible subsets (the power set).

The solution set must not contain duplicate subsets.
 Return the solution in any order.
 
Thus, the overall time complexity of the algorithm is:

Time Complexity: O(n*2^n);
Space Complexity : O(2^n)

*/
class Solution {
    void helper(vector<vector<int>>&ans , int n ,int i,vector<int> temp, vector<int>&nums){
        if(i==n){
            if(find(ans.begin(),ans.end(),temp)==ans.end())
            {
                ans.push_back(temp);
            }
            return ;
        }
        helper(ans,n,i+1,temp,nums);
        temp.push_back(nums[i]);
        helper(ans,n,i+1,temp,nums);
        
    }
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
       int n = nums.size();
        sort(nums.begin(),nums.end());
        vector<int> temp;
        vector<vector<int>> ans;
        helper(ans,n,0,temp,nums);
        return ans;
    }
};