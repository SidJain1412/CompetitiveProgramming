/*
Suppose an array sorted in ascending order is rotated at some pivot unknown to you beforehand.

(i.e., [0,0,1,2,2,5,6] might become [2,5,6,0,0,1,2]).

You are given a target value to search. If found in the array return true, otherwise return false.

Example 1:

Input: nums = [2,5,6,0,0,1,2], target = 0
Output: true
Example 2:

Input: nums = [2,5,6,0,0,1,2], target = 3
Output: false

*/






class Solution {
public:
    bool search(vector<int>& nums, int target) 
    {
        while (nums.size()>1 && nums.back()==nums[0])
            nums.pop_back();
        
        int left = 0;
        int right = nums.size()-1;
        
        while (left<right)
        {
            int mid = left+(right-left)/2;
            
            if (nums[mid] == target) return true;
            
            if (nums[mid]>=nums[0] == target>=nums[0])
            {
                if (nums[mid]<target)
                    left = mid+1;
                else
                    right = mid-1;
            }
            else if (target>=nums[0])
                right = mid-1;
            else
                left = mid+1;
        }
        
        if (left==right && nums[left]==target)
            return true;
        else
            return false;
    }
};