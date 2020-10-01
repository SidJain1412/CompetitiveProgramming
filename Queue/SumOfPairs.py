# Count the number of pairs in an array having the given sum

# Given an array of integers, and a number ‘sum’, chef wants to find the number of pairs of integers in the array whose sum is equal to ‘sum’.

# Examples:

# Input  :  arr[] = {1, 5, 7, -1}, 
#           sum = 6
# Output :  2
# Pairs with sum 6 are (1, 5) and (7, -1)

# Input  :  arr[] = {1, 5, 7, -1, 5}, 
#           sum = 6
# Output :  3
# Pairs with sum 6 are (1, 5), (7, -1) &
#                      (1, 5)         

# Input  :  arr[] = {1, 1, 1, 1}, 
#           sum = 2
# Output :  6
# There are 3! pairs with sum 2.

# Input  :  arr[] = {10, 12, 10, 15, -1, 7, 6, 
#                    5, 4, 2, 1, 1, 1}, 
#           sum = 11
# Output :  9


# cook your dish here
n = int(input())
arr = list(map(int,input().split()))
sum = int(input())
count = 0

for i in range(0, n):
    for j in range(i+1, n): 
        if arr[i]+arr[j]==sum: 
            count+=1
print(count)