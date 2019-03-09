# You invited n guests to dinner! 
# You plan to arrange one or more circles of chairs. 
# Each chair is going to be either occupied by one guest, or be empty. 
# You can make any number of circles.

# Your guests happen to be a little bit shy, so the i-th guest wants to have a least li free chairs to the left of his chair, and at least ri free chairs to the right. 
# The "left" and "right" directions are chosen assuming all guests are going to be seated towards the center of the circle. 
# Note that when a guest is the only one in his circle, the li chairs to his left and ri chairs to his right may overlap.

# What is smallest total number of chairs you have to use?

# Input Format
# First line contains one integer  n— number of guests.

# Next n lines contain n pairs of space-separated integers li and ri.

# Sample Input 0
# 4
# 1 2
# 2 1
# 3 5
# 5 3

# Sample Output 0
# 15

# Explanation 0
# In the second sample the only optimal answer is to use two circles: a circle with 5 chairs accomodating guests 1 and 2, 
# and another one with 10 chairs accomodating guests 3 and 4.

n = int(input())
a = []
b = []
# input
for i in range(n):
    x, y = map(int, input().split())
    a.append(x)
    b.append(y)


# sorting because then distances between two most similar people (by difference of chairs) will be lowest possible
a = sorted(a)
b = sorted(b)

# counting total chairs in between people
tot = 0
for i in range(n):
    tot += max(a[i], b[i])

# adding num of people
print(tot+n)
