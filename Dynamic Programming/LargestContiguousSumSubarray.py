# Largest Sum Contiguous Subarray

# Write an efficient program to find the sum of contiguous subarray within a one-dimensional array of numbers which has the largest sum.



# Sample input:

# -2 -3 4 -1 -2 1 5 -3


#Sample output:

# 7


# Explanation:

#  4,-1,-2,1,5 has the largest sum




# CODE:

import sys



arr = list(map(int, input().split()))


max_so_far = -sys.maxsize-1


max_ending_here = 0


size = len(arr)



for i in range(size):

    max_ending_here = max_ending_here+arr[i]

    
if(max_so_far<max_ending_here):

        max_so_far = max_ending_here

    if(max_ending_here<0):

        max_ending_here=0




print(max_so_far)