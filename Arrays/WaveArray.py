# Wave Array
# Given an array of integers, sort the array into a wave like array and return it,
# In other words, arrange the elements into a sequence such that a1 >= a2 <= a3 >= a4 <= a5.....

# Example

# Given [1, 2, 3, 4]

# One possible answer : [2, 1, 4, 3]
# Another possible answer : [4, 1, 3, 2]
#  NOTE : If there are multiple answers possible, return the one thats lexicographically smallest.
# So, in example case, you will return [2, 1, 4, 3]


class Solution:
    def wave(self, A):
        # Sort
        A = sorted(A)
        i = 0
        size = len(A)
        # Swapping neighbors
        while(i < size - 1):
            A[i], A[i + 1] = A[i + 1], A[i]
            i += 2
        return A
