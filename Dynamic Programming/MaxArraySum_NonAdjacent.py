# QUESTION:
# https://www.hackerrank.com/challenges/max-array-sum/problem
# Given an array of integers, find the subset of non-adjacent elements with the maximum sum.
# Calculate the sum of that subset.

import os
# Complete the maxSubsetSum function below.


def maxSubsetSum(arr):
    incl = arr[0]
    excl = 0
    for i in arr[1:]:
        new_excl = max(excl, incl)
        incl = excl + i
        excl = new_excl
    return max(incl, excl)


if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    n = int(input())

    arr = list(map(int, input().rstrip().split()))

    res = maxSubsetSum(arr)

    fptr.write(str(res) + '\n')

    fptr.close()
