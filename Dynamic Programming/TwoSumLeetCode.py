# Two Sum
# Given an array of integers, return indices of the two numbers such that they add up to a specific target.

# You may assume that each input would have exactly one solution, and you may not use the same element twice.

# Example:

# Given nums = [2, 7, 11, 15], target = 9,

# Because nums[0] + nums[1] = 2 + 7 = 9,
# return [0, 1]

# TC2:
# Input:
# [3,2,3]
# 6
# Output:
# [0,2]


class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
    	# Storing sum
        tot = 0
        # Creating a clone list
        temp = nums
        # Sorting numbers
        nums = sorted(nums)
        # Initializing indexes 
        j = 1
        i = 0
        size = len(temp)
        while(tot != target and i < size - 1):
            tot = nums[i] + nums[j]
            if(tot == target):
                break
            if(j == size - 1):
                i += 1
                j = i
            if(tot < target):
                j += 1
            else:
                i += 1
                j = i
        # if both numbers are the same
        pos1 = temp.index(nums[i])
        pos2 = temp.index(nums[j])
        if pos1 == pos2:
            ind = [k for k, n in enumerate(temp) if n == nums[i]][1]
            return([pos1, ind])
        return([pos1, pos2])
