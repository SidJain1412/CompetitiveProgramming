# Minimum Unique Array Sum

# If any element has a duplicate in the array, increment it by 1 until no 2 elements are the same in the array.
# Find the sum of all the array elements once all elements are unique.

# Sample Input: [3,1,3,5,7]
# Output: 20

# Explanation:
# arr = [3,1,3,5,7]
# arrunique = [3,1,4,5,7]
# sum = 20


#!/bin/python3

import math
import os
import random
import re
import sys



#
# Complete the 'getMinimumUniqueSum' function below.
#
# The function is expected to return an INTEGER.
# The function accepts INTEGER_ARRAY arr as parameter.
#

def getMinimumUniqueSum(arr):
    # Write your code here
    l = []
    s = 0
    for i in arr:
        if i not in l:
            print('appended',i)
            l.append(i)
            s+=i
        else:
            while i in l:
                i+=1
            l.append(i)
            print('appended',i)
            s+=i
    return s

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    arr_count = int(input().strip())

    arr = []

    for _ in range(arr_count):
        arr_item = int(input().strip())
        arr.append(arr_item)

    result = getMinimumUniqueSum(arr)

    fptr.write(str(result) + '\n')

    fptr.close()
