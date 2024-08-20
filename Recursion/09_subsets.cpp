/*
Problem : https://leetcode.com/problems/subsets/

Given an integer array nums of unique elements, 
return all possible subsets (the power set).

The solution set must not contain duplicate subsets.
 Return the solution in any order.

 

Example 1:

Input: nums = [1,2,3]
Output: [[],[1],[2],[1,2],[3],[1,3],[2,3],[1,2,3]]

*/

class Solution {
    vector<vector<int>>ans;
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        int i=0,n=nums.size();
        vector<int>v;
        solve(nums,i,n,v);
        return ans;
    }
    void solve(vector<int>&nums,int i,int n, vector<int>v)
    {
        if(i==n)
        {
            ans.push_back(v);
            return;
        }
        solve(nums,i+1,n,v);// not pick and move
        
        v.push_back(nums[i]);// pick 
        solve(nums,i+1,n,v);// and let's move
    }
};