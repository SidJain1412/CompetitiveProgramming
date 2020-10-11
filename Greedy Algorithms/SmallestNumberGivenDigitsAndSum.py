# Smallest number
# The task is to find the smallest number with given sum of digits as s and number of digits as d.

# Expected Time Complexity: O(d)

# Input:
# The first line of input contains a single integer T denoting the number of test cases. Then T test cases follow. Each test case consist of a single line containing two space separated integers s and d, where s is digit sum and d is number of digits.

# Output:
# Corresponding to each test case, in a new line, print the smallest number if possible, else print -1.

# Constraints:
# 1 ≤ T ≤ 100
# 1 ≤ s ≤ 100
# 1 ≤ d ≤ 6

# Example:
# Input
# 3
# 9 2
# 20 3
# 63 3

# Output
# 18
# 299
# -1

n = int(input())
for i in range(n):
        # Sum, number of digits
    a, b = map(int, input().split())
    # first check, example: 3 digit number can't have sum more than 27 (999)
    if(a > b * 9):
        print('-1')
    else:
        # Making empty result array
        res = [0] * b
        # First digit (most sig) must be atleast 1, so reserving that
        a -= 1
        # Starting from behind, putting bigger numbers in the end
        for j in range(b - 1, 0, -1):
                # Get rid of 9 to reduce overall number
            if(a >= 9):
                res[j] = 9
                a -= 9
            else:
                res[j] = a
                a = 0
        # Reusing the reserved 1
        res[0] = a + 1

        # Printing result
        for e in res:
            print(e, end='')
        print()
