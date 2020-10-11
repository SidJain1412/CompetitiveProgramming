# Noble Integer

# Given an integer array, find if an integer p exists in the array
# such that the number of integers greater than p in the array equals to p

# If such an integer is found return 1 else return -1.


class Solution:
    # @param A : list of integers
    # @return an integer
    def solve(self, A):
        A = sorted(A)
        size = len(A)
        i = 0
        while i < size:
            temp = A[i]
            # Checking for the same number being repeated multiple times
            # Example: 0,0,2,2,3 should be -1 (as 2 isn't greater than 2)
            while(i < size - 1 and A[i + 1] == temp):
                i += 1
            if(temp == size - i - 1):
                return 1
            i += 1
        return -1


"""
Testing Code for this problem
"""

s = Solution()
a = [0, 0, 2, 2, 3]
print(s.solve(a))

# output == [1,2,3,5]
