# Factor57

# Develop a Python method change(amount) that for any integer amount in the range from 24 to 1000 
# returns a list consisting of numbers 5 and 7 only, such that their sum is equal to amount.
# For example, change(28) may return [7, 7, 7, 7], while change(49) may return [7, 7, 7, 7, 7, 7, 7] 
# or [5, 5, 5, 5, 5, 5, 5, 7, 7] or [7, 5, 5, 5, 5, 5, 5, 5, 7].

def change(amount):
    if not (24 <= amount <= 1000):
        return [0]
    k = int(3 * amount / 7)
    return [5] * (3*amount-7*k) + [7] * (5*k-2*amount)
    
# print(change (24))
# print(change (28))
# print(change (49))
# print(change (55))
n = int(input())
print(change(n))


# Explanation:
# If we call our target number n, count the number of 5s in the solution list and call it r, and count the number of 7s and call it s, we can restate the problem as finding nonnegative integers r, s for which

# 5 * r + 7 * s = n
# We first want to solve that equation for n=1 and allow r or s to be negative. I quickly used continued fractions to solve that, a technique similar to the extended Euclidean algorithm. I'll skip the details, but I quickly came up with

# 5 * 3 + 7 * -2 = 1
# We now multiply both sides of that equation by n and get

# 5 * (3*n) + 7 * (-2*n) = n
# Since we found one solution, number theory tells us there are actually infinitely many solutions, all of them in the form

# 5 * (3*n - 7*k) + 7 * (-2*n + 5*k) = n
# where k is an arbitrary integer. We are almost done, but we need to find k so that those multipliers are nonnegative. We also want to make our solution list as short as possible, so we want as many 7s and as few 5s as possible. So we require the multiplier of 5 to be nonnegative and desire it to be small which means we want k to be large. So we require

# 3 * n - 7 * k >= 0
# Solve that for k and we get

# k <= 3 * n / 7
# The largest integer that satisfies that is

# k = int(3 * n / 7)
# which explains the next-to-last line in my code. So we want 3*n-7*k number of 5s in our list and -2*n+5*k which is 5*k-2*n number of 7s in our result list. We finally use Python's list multiplier syntax, which means that if mylist is a list value, then mylist * t is a list containing t copies of mylist concatenated to each other. Therefore I used that notation twice to return a list with the desired number of 5s followed by the desired number of 7s.

# Finally, number theory tells us that we get nonnegative values for those list multipliers for any value of  n that is at least (5-1) * (7-1) which is 24. That explains the lower bound in the problem. There is no upper bound in the mathematical problem--I assume the computing problem gives an upper bound of 1000 to allow for quick checking.