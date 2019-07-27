# Repeated String

# Lilah has a string, s, of lowercase English letters that she repeated infinitely many times.

# Given an integer, , find and print the number of letter a's in the first n letters of Lilah's infinite string.

# For example, if the string s='abcac' and n=10, the substring we consider is abcacabcac, the first 10 characters of her infinite string. There are 4 occurrences of a in the substring.

# Function Description

# Complete the repeatedString function in the editor below. It should return an integer representing the number of occurrences of a in the prefix of length n in the infinitely repeating string.

# repeatedString has the following parameter(s):

# s: a string to repeat
# n: the number of characters to consider
# Input Format

# The first line contains a single string, s. 
# The second line contains an integer, n.

# Print a single integer denoting the number of letter a's in the first n letters of the infinite string created by repeating  infinitely many times.

# Sample Input 0

# aba
# 10
# Sample Output 0

# 7
# Explanation 0 
# The first  letters of the infinite string are abaabaabaa. Because there are  a's, we print  on a new line.

# Sample Input 1

# a
# 1000000000000
# Sample Output 1

# 1000000000000
# Explanation 1 
# Because all of the first  letters of the infinite string are a, we print  on a new line.



#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the repeatedString function below.
def repeatedString(s, n):
    ct=0
    if(s=='a'):
        return n
    else:
        for ch in s:
            if(ch=='a'):
                ct+=1
    repeat=n//len(s)
    ct_a = ct*repeat
    n = n - repeat*len(s)
    rem = s[0:n]
    for ch in rem:
        if(ch=='a'):
            ct_a+=1
    return ct_a
    # return rem

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    s = input()

    n = int(input())

    result = repeatedString(s, n)

    fptr.write(str(result) + '\n')

    fptr.close()
