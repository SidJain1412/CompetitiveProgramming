# Largest number possible
# Given two numbers 'N' and 'S' , find the largest number that can be formed with 'N' digits and whose sum of digits should be equals to 'S'.


# Input

# The first line of input contains an integer T denoting the number of test cases. Then T test cases follow. The first line of each test case contains two space separated integers N and S, where N is the number of digits and S is the sum.


# Output

# Print the largest number that is possible.
# If there is no such number, then print -1


# Constraints:

# 1 <= T <= 30
# 1 <= N <= 50
# 0 <= S <= 500


# Example

# Input
# 2
# 2 9
# 3 20

# Output

# 90
# 992

# Expected Time Complexity: O(n)


n = int(input())
for i in range(n):
	# Input
    l, s = map(int, input().split())

    # Base cases where not possible
    if(s > l * 9 or s == 0):
        print('-1')
    else:
    	# Making empty array for the number
        num = [0] * l
        for j in range(l):
        	# Maximising
            if(s >= 9):
                num[j] = 9
                s -= 9
            else:
                num[j] = s
                s = 0
        # Printing
        for j in num:
            print(j, end='')
        print()
