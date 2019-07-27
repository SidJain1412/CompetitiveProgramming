# Counting Valleys

# Gary is an avid hiker. He tracks his hikes meticulously, paying close attention to small details like topography. During his last hike he took exactly  steps. For every step he took, he noted if it was an uphill, , or a downhill,  step. Gary's hikes start and end at sea level and each step up or down represents a  unit change in altitude. We define the following terms:

# A mountain is a sequence of consecutive steps above sea level, starting with a step up from sea level and ending with a step down to sea level.
# A valley is a sequence of consecutive steps below sea level, starting with a step down from sea level and ending with a step up to sea level.
# Given Gary's sequence of up and down steps during his last hike, find and print the number of valleys he walked through.

# For example, if Gary's path is , he first enters a valley  units deep. Then he climbs out an up onto a mountain  units high. Finally, he returns to sea level and ends his hike.

# Function Description

# Complete the countingValleys function in the editor below. It must return an integer that denotes the number of valleys Gary traversed.

# countingValleys has the following parameter(s):

# n: the number of steps Gary takes
# s: a string describing his path
# Input Format

# The first line contains an integer , the number of steps in Gary's hike. 
# The second line contains a single string , of  characters that describe his path.

# Constraints

# Output Format

# Print a single integer that denotes the number of valleys Gary walked through during his hike.

# Sample Input

# 8
# UDDDUDUU
# Sample Output

# 1
# Explanation

# If we represent _ as sea level, a step up as /, and a step down as \, Gary's hike can be drawn as:

# _/\      _
#    \    /
#     \/\/
# He enters and leaves one valley.



#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the countingValleys function below.
def countingValleys(n, s):
    sum1=0
    m=0
    v=0
    l=[0]
    for t in s:
        if(t=='U'):
            sum1+=1
        else:
            sum1+=-1
        l.append(sum1)
    for i in range(len(l)-1):
        if(l[i]==0 and l[i+1]>0):
            m+=1
        elif(l[i]==0 and l[i+1]<0):
            v+=1
    return v

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    n = int(input())

    s = input()

    result = countingValleys(n, s)

    fptr.write(str(result) + '\n')

    fptr.close()
